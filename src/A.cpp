#include "A.hpp"
#include "EventB.hpp"
#include "EventA.hpp"
#include "Broker.hpp"
#include <QDebug>

A::A()
{

}

void A::subecribe(){
    Broker::get().sub(this, EventB());
    qInfo() << "A subscribed to B";
    Broker::get().sub(this, EventA());
    qInfo() << "A subscribed to A";
}

void A::publish(){
    Broker::get().pub(new EventA());
    qInfo() << "A published A";
}

bool A::event(QEvent* ev){
    qInfo() << "A get event" << ev->type();
    return false;
}

