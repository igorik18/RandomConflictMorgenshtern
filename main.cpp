#include "brainarena.h"
#include <QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	BrainArena w;
	w.show();
	return a.exec();
}
