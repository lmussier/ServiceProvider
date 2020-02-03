#include "B.hpp"
#include <QDebug>
#include "EventB.hpp"
#include "EventA.hpp"
#include "Broker.hpp"

B::B()
{

}

void B::subecribe(){
    Broker::get().sub(this, EventA());
    qInfo() << "B subscribed to A";
}

void B::publish(){
    Broker::get().pub(new EventB());
    qInfo() << "B published B";
}

bool B::event(QEvent* ev){
    qInfo() << "B get event" << ev->type();
    return false;
}
