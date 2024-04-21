#include "brainarena.h"
#include "ui_brainarena.h"

BrainArena::BrainArena(QWidget *parent)
	: QMainWindow(parent)
	, ui(new Ui::BrainArena)
{
	ui->setupUi(this);

	QObject::connect(ui->pushButton, &QPushButton::clicked, [=]() {

		Reason* randomReason = generatorReasons->generateReasons();
		Conflict* randomConflict = morgen->generateConflict(randomReason);

		ui->label->setText(randomReason->getReason().first);
		ui->label_2->setText(randomConflict->getConflict().first);
		ui->label_3->setText(randomConflict->getConflict().second);

	});

}

BrainArena::~BrainArena()
{
	delete ui;
}

