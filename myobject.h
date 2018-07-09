#ifndef MYOBJECT_H
#define MYOBJECT_H

#include <QObject>
#include<3rd/qmqtt/qmqtt.h>

class MyObject : public QObject
{
    Q_OBJECT
public:
    explicit MyObject(QObject *parent = nullptr);

signals:

public slots:
  void onRe(QMQTT::Message &message);

};

#endif // MYOBJECT_H
