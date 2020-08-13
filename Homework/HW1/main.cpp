//File: VectorMain.cpp
//Programmer: Taylor Pedretti
//Class: CSE-330
//Project: Homework 1
#include <iostream>
#include "Vector.h"

using namespace std;

void print_vector(Vector<int> v)
{
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";

	cout << endl;
}

int main()
{
	Vector<int> v1;
	Vector<int> v2;

	for (int i = 1; i <= 10; i++) 
	{
		v1.push_back(i);
		//v2.push_back(i);
	}

	cout << "Size of v1: " << v1.size() << endl;
	cout << "Printing vector: ";
	print_vector(v1);
	cout << endl;

	cout << "Erasing index 10" << endl;
	v1.erase(10);
	cout << "Printing vector: ";
	print_vector(v1);
	cout << endl;

	cout << "Erasing index 3" << endl;
	v1.erase(3);
	cout << "Printing vector: ";
	print_vector(v1);
	cout << endl;

	cout << "Inserting value 777 into location 10 in the vector:" << endl;
	v1.insert(777, 10);
	cout << "Printing vector: ";
	print_vector(v1);
	cout << endl;

	cout << "Inserting value 777 into location 5 in the vector:" << endl;
	v1.insert(777, 5);
	cout << "Printing vector: ";
	print_vector(v1);
	cout << endl;

	cout << "Erasing index 0" << endl;
	v1.erase(0);
	cout << "Printing vector: ";
	print_vector(v1);
	cout << endl;
	

	//system("PAUSE");
	return 0;
}
