#include <QCoreApplication>
#include "Broker.hpp"

void Broker::sub(QObject* p_subscriber, const QEvent& p_event){
    subecribers[p_event.type()].push_back(p_subscriber);
}

void Broker::pub(QEvent* p_event){
       for (std::pair<QEvent::Type, std::vector<QObject*>>item : this->subecribers) {
        if(item.first == p_event->type()) {
            for(auto subscriber : item.second)
            {
                QCoreApplication::postEvent(subscriber, p_event);
            }
        }
    }
}
