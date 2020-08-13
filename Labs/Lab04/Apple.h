#include <iostream>
#include <string>

#include "Weiss_List.h"

using namespace std;

class Apple 
{
private:
	string color;
public:
	Apple() :color{ "red" } {}
	Apple(string col) :color{ col } {}
	Apple(const Apple& x) :color{ x.color } {}
	Apple(Apple && x) :color{ x.color } {}

	Apple& operator=(const Apple& x)
	{
		if (this != &x)
			color = x.color;

		return *this;
	}

	Apple& operator=(Apple && x)
	{
		std::swap(color, x.color);
		return *this;
	}

	bool operator ==(const Apple& x) { return x.color == color; }

	string get_color() const { return color; }

};