#ifndef _PAIR_H_
#define _PAIR_H_

using namespace std;

template <typename K, typename V>
class Pair
{
public:
	Pair() {}

	Pair(K thekey)
		: first(thekey) {}
	Pair(K thekey, V theval)
		: first(thekey), second(theval) {}

	Pair(const Pair& rhs)
		: first(rhs.first), second(rhs.second) {}
	
	bool operator == (const Pair<K, V>& rhs) const
	{
		return first == rhs.first;
	}

	bool operator != (const Pair<K, V>& rhs) const
	{
		return first != rhs.first;
	}

	bool operator < (const Pair<K, V>& rhs) const
	{
		return first < rhs.first;
	}

	bool operator > (const Pair<K, V>& rhs) const
	{
		return first > rhs.first;
	}

	K first;
	V second;
};


#endif // !_PAIR_H_H
