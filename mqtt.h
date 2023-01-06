#ifndef MQTT_H
#define MQTT_H

#include <QObject>
#include <QDebug>
using namespace std;

class mqtt : public QObject
{
    Q_OBJECT
public:
    mqtt();
    ~mqtt();
};

#endif // MQTT_H
