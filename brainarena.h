#ifndef BRAINARENA_H
#define BRAINARENA_H

#include <QMainWindow>
#include "generatorreasons.h"
#include "morgenshtern.h"

QT_BEGIN_NAMESPACE
namespace Ui { class BrainArena; }
QT_END_NAMESPACE

class BrainArena : public QMainWindow
{
		Q_OBJECT

	public:
		BrainArena(QWidget *parent = nullptr);
		~BrainArena();

	private:
		Ui::BrainArena *ui;
};
#endif // BRAINARENA_H
