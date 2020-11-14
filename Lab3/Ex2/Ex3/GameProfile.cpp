#include <iostream>
using namespace std;
#include "GameProfile.h"

GameProfile:: GameProfile(char l, int c, int h , bool p , int w, int currentL)
{
	currentLevel = currentL;
	letter = l;
	coins = c;
	hints = h;
	IsPremiumVersion = p;
	watchedAdvertisements = w;
}

int GameProfile:: getCurrentLevel()
{
	return currentLevel;
}
void GameProfile::setCurrentLevel(int cL)
{
	currentLevel = cL;
}

char GameProfile::getLetter()
{
	return letter;
}
void GameProfile::setLetter(char m)
{
	letter = m;
}
int GameProfile::getCoins()
{
	return coins;
}
void GameProfile::setCoins(int c)
{
	coins = c;
}
int GameProfile::getHints()
{
	return hints;
}
void GameProfile::setHints(int hint)
{
	hints = hint;
}
bool GameProfile::getIsPremium()
{
	return IsPremiumVersion;
}
void GameProfile::setIsPremium(bool p)
{
	IsPremiumVersion = p;
}
int GameProfile::getWatchedAdver()
{
	return watchedAdvertisements;
}
void GameProfile::setWatchedAdver(int w)
{
	watchedAdvertisements = w;
}
bool GameProfile::buyHints()
{
	int x = coins / 100;
	if (x > 0)
	{
		hints += x;
		coins = coins % 100;
		return true;
	}
	return false;
}

int GameProfile:: getRank()
{
	return (currentLevel / 1000);
}

void GameProfile::BuyPremiumVersion()
{
	if (coins > 500)
	{
		IsPremiumVersion = true;
		coins -= 500;
	}
	else
	{
		coins += 50;
		watchedAdvertisements++;
	}
}



GameProfile GameProfile:: HighestLevel(GameProfile* arr, int n)
{
	int y=0;
	for (int i = 0; i < n-1; i++)
	{
		if (arr[i].getCurrentLevel() < arr[i + 1].getCurrentLevel())
			y = i + 1;
	}
	return arr[y];
}

void GameProfile::transferCoins(GameProfile& x, GameProfile& y, int z)
{
	if (z < x.getCoins())
	{
		y.setCoins(y.getCoins() + z);
		x.setCoins(x.getCoins() - z);
	}
	else
	{
		cout << "Invalid!" <<endl;
	}
}
