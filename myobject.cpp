#include "myobject.h"
#include "3rd/qmqtt/qmqtt.h"
MyObject::MyObject(QObject *parent) : QObject(parent)
{

}

void MyObject::onRe(QMQTT::Message &message)
{

//    qDebug() << message.topic();

}
