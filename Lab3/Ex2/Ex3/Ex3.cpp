#include <iostream>
using namespace std;
#include "GameProfile.h"


int main()
{
	GameProfile x('m');
	GameProfile y('y');
	char l=x. getLetter();
	cout << l << endl;
	y.setLetter('k');
	cout << y.getLetter() << endl;
	cout << x.getCurrentLevel() << endl;
	y.setCurrentLevel(10);
	cout << y.getCurrentLevel() << endl;
	cout << x.getCoins() << endl;
	y.setCoins(150);
	cout << y.getCoins() << endl;
	cout << x.getHints() << endl;
	x.setHints(15);
	cout << x.getHints() << endl;
	cout << y.getIsPremium() << endl;
	x.setIsPremium(true);
	cout << x.getIsPremium() << endl;
	cout << x.getWatchedAdver() << endl;
	y.setWatchedAdver(7);
	cout << y.getWatchedAdver() << endl;
	y.buyHints();
	cout << y.getHints() << endl;
	cout << y.getWatchedAdver() << endl;
	x.setCoins(600);
	cout << x.getRank() << endl;
	x.BuyPremiumVersion();
	cout << x.getCoins() << endl;
	//void transferCoins(GameProfile & x, GameProfile & y, int z);*/
	GameProfile arr[3];
	arr[1].setCoins(150);
	arr[1].setCurrentLevel(100);
	arr[0].setCurrentLevel(150);
	arr[2].setCurrentLevel(200);
	GameProfile z= x.HighestLevel(arr, 3);
	cout << z.getCurrentLevel() << endl;
	y.transferCoins(x, y,5);
	cout << y.getCoins() <<" "<< x.getCoins();
	return 0;
}