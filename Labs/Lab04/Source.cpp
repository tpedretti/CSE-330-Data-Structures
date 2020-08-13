#include "Apple.h"


int main()
{
	List<int> mylist;
	for (int i = 1; i <= 10; i++)
		mylist.push_back(i * 1);

	List<int>::iterator itr = mylist.begin();

	for (; itr != mylist.end(); ++itr)
		cout << *itr << " ";
	cout << endl;

	List<int>::iterator third = mylist.begin();
	++third;
	++third;

	mylist.insert(third, 123);

	List<int>::iterator fifth = third;
	fifth++;
	fifth++;
	
	mylist.erase(fifth);

	itr = mylist.begin();
	for (; itr != mylist.end(); ++itr)
		cout << *itr << " ";
	cout << endl;

	List<int> another(mylist);

	itr = another.begin();
	for (; itr != another.end(); ++itr)
		cout << *itr << " ";
	cout << endl;

	cout << endl;

	List<Apple> myapps;
	Apple ap1;
	Apple ap2("green");
	Apple ap3(ap2);
	Apple ap4(Apple("yellow"));

	myapps.push_back(ap1);
	myapps.push_back(ap2);
	myapps.insert(myapps.begin(), ap3);
	myapps.insert(myapps.end(), ap4);

	List<Apple>::iterator aitr = myapps.begin();
	for (; aitr != myapps.end(); ++aitr)
		cout << (*aitr).get_color() << " ";
	cout << endl << endl;


	return 0;
}