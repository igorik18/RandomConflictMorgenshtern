#ifndef CONFLICT_H
#define CONFLICT_H

#include <QObject>
#include <QPair>

class Conflict : public QObject
{
		Q_OBJECT
	public:
		explicit Conflict(QObject *parent = nullptr);
		void setConflict(QString nameArtist, QString nameAbuse);
		QPair <QString, QString> getConflict();
	private:
		QString _nameArtist;
		QString _nameAbuse;
};

#endif // CONFLICT_H
