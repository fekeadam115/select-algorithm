#pragma once
#include <string>

struct Player
{
	std::string name;
	std::string gender;
	struct Stat
	{
		int curHp = 100;
		int maxHp = 100;
		int curMana = 50;
		int maxMana = 50;
		int coins = 0;
	};
	struct Card
	{
		std::string type;
		int manaReq;
		int levelReq;
		bool isOwned = false;

	}card[9];
};