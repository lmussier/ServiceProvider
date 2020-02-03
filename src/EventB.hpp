#pragma once

#include <QEvent>

class EventB : public QEvent {

public:
        EventB():QEvent(generateEventType()){}
        ~EventB(){qInfo() << "EventB destroyed";}
private:
    static inline QEvent::Type generateEventType()
    {
        static QEvent::Type myEventType = static_cast<QEvent::Type>(QEvent::registerEventType());
        qInfo() << "EventB type "<<myEventType;
        return myEventType;
    }
};
