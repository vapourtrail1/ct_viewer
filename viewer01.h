#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_viewer01.h"

class viewer01 : public QMainWindow
{
    Q_OBJECT

public:
    viewer01(QWidget *parent = nullptr);
    ~viewer01();

private:
    Ui::viewer01Class ui;
};

