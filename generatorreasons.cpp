#include "generatorreasons.h"

Reason *GeneratorReasons::generateReasons()
{
	Reason *result = new Reason;
	QRandomGenerator *generatorReason = QRandomGenerator::global();
	TypeReason typeReason = static_cast<TypeReason>(generatorReason->bounded(3));
	int randIter = generatorReason->bounded(_nameReasons.size());


	result->SetReason(typeReason, _nameReasons[randIter]);
	return result;
}
