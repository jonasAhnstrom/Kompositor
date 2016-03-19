#include "kompositor.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Kompositor w;
	w.show();
	return a.exec();
}
