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
	int pixelToHojd(int ypixel);
	void PaintEvent(QPaintEvent *e);

public Q_SLOTS:
	void fjardedelsnotKlickad();
	void spelaKlickad();

private:
	Ui::KompositorClass ui;

	Nottyp _valdNotTyp;
	Notblad _notblad;
	Synthesizer _synthesizer;

};

#endif // KOMPOSITOR_H
