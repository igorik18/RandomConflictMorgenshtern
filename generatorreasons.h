#ifndef GENERATORREASONS_H
#define GENERATORREASONS_H

#include <QObject>
#include "reason.h"
#include <QRandomGenerator>
#include <QStringList>

#define generatorReasons GeneratorReasons::getInstance()

class GeneratorReasons : public QObject
{
		Q_OBJECT
	public:
		static GeneratorReasons* getInstance() // Переименовал метод для ясности
		{
			static GeneratorReasons* _generator = nullptr;
			if (!_generator)
			{
				_generator = new GeneratorReasons;
			}
			return _generator;
		}

		Reason* generateReasons();

	protected:
		GeneratorReasons() {} // Конструктор защищен

	private:
		static GeneratorReasons* _generator;
		QStringList _nameReasons = {"Вышел новый трек Моргенштерна", "Посмеялся в неподходящий момент", "занял чужое место на диване", "перепутал чужую кружку", "не выключил свет в комнате", "закрыл дверь слишком громко", "поздоровался не с тем тоном", "забыл вынести мусор", "открыл окно", "когда было холодно", "присел на чужое место в транспорте", "спросил слишком много вопросов", "не ответил на сообщение вовремя", "передал соль не тем способом", "положил ногу на ногу при сидении", "забыл поздравить с незначительной датой", "поправил чужую прическу", "пошутил не по теме", "захотел посмотреть другой телеканал", "не согласился с очевидным мнением", "сказал", "что устал от общения", "не заметил новую стрижку", "зевнул во время разговора", "попросил повторить слово", "отказался от предложенной еды", "взял последний кусок пиццы", "забрал дистанционный пульт без спроса", "оценил чужой выбор критически", "смеялся слишком громко", "неправильно произнёс имя", "отметил чужую ошибку", "не поделился своими планами", "использовал чужой зарядное устройство", "опоздал на несколько минут", "поправил чужие вещи на полке", "задал неловкий вопрос", "попытался помочь", "не спросив", "вступил в комнату без стука", "нарушил чью-то личную границу", "включил музыку не по вкусу всех", "пропустил важный момент в фильме", "забыл вернуть вещь", "не дал совет", "когда его ждали", "поднял громкость телевизора", "съел чью-то еду из холодильника", "проигнорировал чей-то совет", "сделал замечание на публике", "вспомнил старый конфликт", "не согласился на компромисс", "поставил лайк не тому человеку", "перебил в разговоре", "взял чужую ручку без спроса", "не принял приглашение", "отказался от чашки кофе", "рассказал старый анекдот", "забыл закрыть крышку унитаза", "отправил сообщение с ошибкой", "не убрал за собой после еды", "сказал что-то очевидное", "смеялся над собственной шуткой", "переместил чужие вещи", "не попрощался при уходе", "забыл ключи", "вызвав неудобства", "слишком долго говорил по телефону", "запостил что-то странное в соцсетях", "проигнорировал приглашение в соцсетях", "отказался играть в игру", "неправильно расставил приоритеты", "слишком долго держал вещь", "вспомнил чью-то старую ошибку", "поставил чайник на неправильное место", "использовал слишком много времени в ванной", "забыл выключить железо", "отказался от помощи", "не поинтересовался чьим-то делом", "переместил чью-то книгу", "смеялся над чужой неудачей", "не отдал должное внимание", "слишком много говорил о себе", "не принял чужую помощь", "принял чью-то шутку всерьез", "слишком быстро согласился", "слишком долго молчал", "не разделил чьё-то мнение", "использовал чужие специи", "не оценил чьё-то усилие", "прошёл первым в дверь", "не уступил место", "принял чью-то критику лично", "промолчал", "когда нужно было поддержать", "сказал слишком много", "принял шутку за серьёзное", "пожал руку слишком сильно", "не поделился новостями", "проигнорировал просьбу", "заставил ждать", "ответил слишком сухо", "забыл о договорённости", "не посмотрел рекомендованный фильм", "сделал слишком много шума", "не принял чью-то помощь", "слишком долго использовал компьютер"};
};

#endif // GENERATORREASONS_H
