#include "reason.h"

Reason::Reason(QObject *parent)
	: QObject{parent}
{

}

void Reason::SetReason(TypeReason typeReason, QString nameReason)
{
	_nameReason = nameReason;
	_typeReason = typeReason;
}

QPair<QString, TypeReason> Reason::getReason()
{
	return QPair <QString, TypeReason> (_nameReason, _typeReason);
}
