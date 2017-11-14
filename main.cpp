#include "mycalculator.h"
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	MyCalculator w;
	w.show();
	return a.exec();
}
