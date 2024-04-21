#include "conflict.h"

Conflict::Conflict(QObject *parent)
	: QObject{parent}
{

}

void Conflict::setConflict(QString nameArtist, QString nameAbuse)
{
	_nameArtist = nameArtist;
	_nameAbuse = nameAbuse;
}

QPair<QString, QString> Conflict::getConflict()
{
	return QPair <QString, QString> (_nameArtist, _nameAbuse);
}
