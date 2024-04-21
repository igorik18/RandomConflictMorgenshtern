#include "morgenshtern.h"

Conflict *Morgenshtern::generateConflict(Reason* reasonConflict)
{
	Conflict * result = new Conflict;
	if (reasonConflict->getReason().first == "Вышел новый трек Моргенштерна")
	{
		result->setConflict("Morgenshtern", "Сегодня без конфликтов, чуваки!" );
	}
	else
	{
		QRandomGenerator *generatorReason = QRandomGenerator::global();
		QString nameArtist = _nameArtists[generatorReason->bounded(_nameArtists.size())];
		QString nameAbuse = _nameAbuses[generatorReason->bounded(_nameAbuses.size())];
		result->setConflict(nameArtist, nameAbuse);
	}

	return result;
}
