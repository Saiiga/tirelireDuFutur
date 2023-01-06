#include <QCoreApplication>
#include "mqtt.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    mqtt myMqtt;
    return a.exec();
}
