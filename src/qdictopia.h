#ifndef _QDICTOPIA_H_
#define _QDICTOPIA_H_

#include <QMainWindow>

#include "mainwindow.h"

class QDictOpia : public QMainWindow
{
public:
	QDictOpia(QWidget* parent = 0, Qt::WindowFlags flags = 0);

private:
	MainWindow* mMainWindow;
};

#endif
