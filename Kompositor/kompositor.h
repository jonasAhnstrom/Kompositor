#ifndef KOMPOSITOR_H
#define KOMPOSITOR_H

#include <QtWidgets/QMainWindow>
#include "ui_kompositor.h"

class Kompositor : public QMainWindow
{
	Q_OBJECT

public:
	Kompositor(QWidget *parent = 0);
	~Kompositor();

private:
	Ui::KompositorClass ui;
};

#endif // KOMPOSITOR_H
