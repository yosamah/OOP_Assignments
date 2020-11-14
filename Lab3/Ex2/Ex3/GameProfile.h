#pragma once
class GameProfile
{
private:
	char letter;
	int currentLevel;
	int coins;
	int hints;
	bool IsPremiumVersion;
	int watchedAdvertisements;
public:
	GameProfile(char l = 'm', int c = 0, int h = 0, bool p = false, int w = 0, int currentL = 0);
	char getLetter();
	void setLetter(char m);
	int getCurrentLevel();
	void setCurrentLevel(int cL);
	int getCoins();
	void setCoins(int c);
	int getHints();
	void setHints(int hint);
	bool getIsPremium();
	void setIsPremium(bool p);
	int getWatchedAdver();
	void setWatchedAdver(int w);
	bool buyHints();
	int getRank();
	void BuyPremiumVersion();
	void transferCoins(GameProfile& x, GameProfile& y, int z);

	GameProfile HighestLevel(GameProfile* arr, int n);
};

