#ifndef KOMPOSITOR_H
#define KOMPOSITOR_H

#include <QtWidgets/QMainWindow>
#include <QtGui>
#include "ui_kompositor.h"
#include "Notblad.h"
#include "Synthesizer.h"


class Kompositor : public QMainWindow
{
	Q_OBJECT


public:
	Kompositor(QWidget *parent = 0);
	~Kompositor();

	void mousePressEvent(QMouseEvent *e);
	void paintEvent(QPaintEvent *e);
	int pixelToHojd(int ypixel);

private:
	Ui::KompositorClass ui;

	Nottyp _valdNotTyp;
	Notblad _notblad;
	Synthesizer _synthesizer;

private slots:
	void fjardedelsnotKlickad();
	void spelaKlickad();
};

#endif // KOMPOSITOR_H
