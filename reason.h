#ifndef REASON_H
#define REASON_H

#include <QObject>
#include <QPair>

enum TypeReason
{
	SmallReason, // МАЛЕНЬКАЯ ПРИЧИНА
	MediumReason, // СРЕДНЯЯ ПРИЧИНА
	BigReason // БОЛЬШАЯ ПРИЧИНА
};

class Reason : public QObject
{
		Q_OBJECT
	public:
		explicit Reason(QObject *parent = nullptr);
		void SetReason(TypeReason typeReason, QString nameReason);
		QPair <QString, TypeReason> getReason();
	private:
		QString _nameReason;
		TypeReason _typeReason;
};

#endif // REASON_H
