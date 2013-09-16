#ifndef PLANE_H
#define PLANE_H

#include <QtGui/QMainWindow>
#include "ui_plane.h"

class plane : public QMainWindow
{
	Q_OBJECT

public:
	plane(QWidget *parent = 0, Qt::WFlags flags = 0);
	~plane();

private:
	Ui::planeClass ui;
};

#endif // PLANE_H
