#ifndef MAP_H_
#define MAP_H_
#include <string>
#include <vector>
#include "Pair.h"
#include "Set18.h"     // must have insert that returns iterator!!!

using namespace std;

template <typename K, typename V>

class Map
{
public:
	Map() {}

	void printMap() const
	{
		typename Set<Pair<K, V> >::iterator itr = themap.begin();
		for (; itr != themap.end(); ++itr)
		{
			std::cout << (*itr).first << ":" << (*itr).second << endl;
		}
		return;
	}

	V & operator [](K index)
	{
		typename Set<Pair<K, V> >::iterator here;
		Pair<K, V> probe(index, V());
		here = themap.insert(probe);
		return (*here).second;
	}

	void remove(K & key)
	{
		Pair<K, V> probe;
		probe.first = key;
		themap.remove(probe);
		return;
	}

	vector<string> allKnownKeys()
	{
		vector<string> knownKeys;

		typename Set<Pair<K, V> >::iterator itr = themap.begin();

		for (; itr != themap.end(); ++itr)
		{
			knownKeys.push_back((*itr).first);
		}		

		return knownKeys;
	}

	vector<int> allKnownValues()
	{
		vector<int> knownValues;

		typename Set<Pair<K, V> >::iterator itr = themap.begin();

		for (; itr != themap.end(); ++itr)
		{
			knownValues.push_back((*itr).second);
		}

		return knownValues;
	}

private:
	Set<Pair<K, V> > themap;
};

#endif
