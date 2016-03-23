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
	int pixelToHojd(int yPixel);
	int pixelToBredd(int xPixel);

private:
	Ui::KompositorClass ui;

	Notblad::Nottyp _valdNotTyp;
	Notblad _notblad;
	Synthesizer _synthesizer;

private slots:
	void halvnotKlickad();
	void fjardedelsnotKlickad();
	void attondelsnotKlickad();
	void spelaKlickad();
};

#endif // KOMPOSITOR_H
