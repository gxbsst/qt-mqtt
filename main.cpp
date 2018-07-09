#include <QString>
#include <3rd/qmqtt/qmqtt_client.h>
#include <QCoreApplication>
#include <QCommandLineParser>
#include <QObject>
#include <QTimer>

using QMQTT::Client;
using QMQTT::Will;
using QMQTT::Message;


#include <iostream>
using namespace std;


class Logger : public QObject {
    public:
        Logger() : QObject(0) {
        }
        ~Logger() {
        }
    public slots:
        void showMqttData(const QMQTT::Message &message) {
            QString data(message.payload());
            cout << "received data: " << data.toStdString() << endl;
        }
        void showSubscribed() {
            cout << "subscribed" << endl;
        }
        void showConnected() {
            cout << "connected!" << endl;
        }
        void showDisConnected() {
            cout << "disconnected!" << endl;
        }
};


class MyClient : public Client {
    public:
    MyClient(const QString & host, quint32 port) : Client(host, port) {
    }
    void setTopic(const QString & topic) {
        subTopic = topic;
    }
    void setQos(const QString & qos) {
        subQos = qos.toUInt();
    }
    public slots:
    void subscribeTo() {
        subscribe(subTopic, subQos);
    }

    private:
    QString subTopic;
    quint8 subQos;
};


int main(int argc, char ** argv)
{
    QCoreApplication a(argc, argv);
//    QCommandLineParser parser;
//    QCommandLineOption hostOption("host",
//            QCoreApplication::translate("host", "The MQTT host to connect, localhost used if not defined."),
//            "host", "localhost");
//    QCommandLineOption qosOption("qos",
//            QCoreApplication::translate("qos", "Quality of Service level, 0 used if not defined."),
//            "qos", "0");
//    QCommandLineOption portOption("port",
//            QCoreApplication::translate("port", "The MQTT port to connect, 1883 used if not defined."),
//            "port", "1883");

//    parser.addPositionalArgument("topic", QCoreApplication::translate("main", "Topic to subscribe"));
//    parser.addOption(hostOption);
//    parser.addOption(qosOption);
//    parser.addOption(portOption);
//    parser.process(a);
//    QStringList args = parser.positionalArguments();

//    if (args.size() < 1) {
//        parser.showHelp(0);
//        return 0;
//    }

    QString host = "localhost";
    quint32 port = 1883;
    QString qos = "1";
    QString topic = "topic";

    cout << "using: host[" << host.toStdString() << "] port[" << port << "] qos[" << qos.toStdString() << "]" << endl;
    cout << "subscribe on topic[" << topic.toStdString() << "]" << endl;

    Logger s;
    MyClient c(host, port);
    c.setTopic(topic);
    c.setQos(qos);
    c.setAutoReconnect(true);


//    c.setAutoReconnectInterval(3000);

    QObject::connect(&c, &MyClient::connected, &s, &Logger::showConnected);
    QObject::connect(&c, &MyClient::connected, &c, &MyClient::subscribeTo);
    QObject::connect(&c, &MyClient::disconnected, &s, &Logger::showDisConnected);
    QObject::connect(&c, &MyClient::subscribed, &s, &Logger::showSubscribed);
    QObject::connect(&c, &MyClient::received, &s, &Logger::showMqttData);
    QObject::connect(&a, &QCoreApplication::aboutToQuit, &c, &MyClient::disconnect);
//    QObject::connect(&c, &c.isConnected, &c,  &MyClient::connect() );
    c.connect();


    QTimer t;
       QObject::connect(&t,&QTimer::timeout,[&](){
           if(!c.isConnected()) {
               c.connect();
           }
       });
       t.start(2000);



//    QTimer *timer = new QTimer(this);
//    connect(&c, SIGNAL(), this, SLOT(update()));
//    timer->start(1000);

    a.exec();
}
