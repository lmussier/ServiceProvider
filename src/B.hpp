#pragma once

#include <QObject>
#include <QDebug>

class B: public QObject
{
public:
    B();
    void subecribe();
    void publish();
    bool event(QEvent* ev) override;
};
