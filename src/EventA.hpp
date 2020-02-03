#pragma once

#include <QEvent>
#include <QDebug>

class EventA : public QEvent {

public:
    EventA():QEvent(generateEventType()) {};

    ~EventA(){qInfo() << "EventA destroyed";}
private:
    static inline QEvent::Type generateEventType()
    {
        static QEvent::Type myEventType = static_cast<QEvent::Type>(QEvent::registerEventType());
        qInfo() << "EventA type "<<myEventType;
        return myEventType;
    }
};
