#include <iostream>
#include <string>
#include "Map.h"

using namespace std;

int main()
{
	Map<string, int> basket;
	string remove;
	
	basket["apple"] = 5;
	basket["plum"] = 7;

	basket.printMap();

	cout << "Removing item form basket." << endl;
	remove = "apple";
	basket.remove(remove);
	basket.printMap();

	vector<string> keys = basket.allKnownKeys();
	vector<int> values = basket.allKnownValues();

	cout << "All known Keys:";
	for(int i = 0; i < keys.size(); i++)
	{
		cout << keys[i] << endl;
	}
	cout << endl;

	cout << "All known Values:";
	for (int i = 0; i < keys.size(); i++)
	{
		cout << values[i] << endl;
	}
	cout << endl;


	return 0;
}