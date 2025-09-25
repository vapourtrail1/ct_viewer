#include "viewer01.h"
#include <QPushButton>

viewer01::viewer01(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
	QPushButton* btn = new QPushButton("Click Me", this);
	btn->setGeometry(QRect(QPoint(100, 100), QSize(200, 50)));	
}

viewer01::~viewer01()
{}

