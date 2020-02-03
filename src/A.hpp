#pragma once

#include <QDebug>
#include <QObject>

class A : public QObject
{
public:
    A();
    void subecribe();
    void publish();
    bool event(QEvent* ev) override;
};
