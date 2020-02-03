#pragma once

#include <QObject>
#include <QEvent>

class Broker : public QObject
{
public:
    static Broker& get() {
        static Broker theBroker;
        return theBroker;
    }

    void sub(QObject* p_subscriber, const QEvent& p_event);
    void pub(QEvent*);

private:
    Broker() = default;
    std::map<QEvent::Type, std::vector<QObject*>> subecribers;
};
