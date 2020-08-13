#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Vector.h"
#include "List.h"
#include "BinarySearch.h"

using namespace std;

void rand_seed();
int rand_int(int a, int b);
void random_vector_asc(int k, Vector<int>& vec);
void random_vector_asc(int k, List<int>& vec);


int main()
{
	Vector<int> vec;
	List<int> list;
	int vecSteps;
	int listSteps;
	int lookup;
	int valueLocVec;
	int valueLocList;
	char runAgain = 'N';

	//Fill Vector with ints
	random_vector_asc(32, vec);

	//Fill List with same values of the Vector
	for (int i = 0; i < vec.size(); i++)
		list.push_back(vec[i]);

	//Print out Vector so user can see whats in the vector to search for
	cout << "Values within the vector:" << endl;
	for (int i = 0; i < vec.size(); i++) 
	{
		cout << vec[i] << ",";
	}
	cout << endl;

	//Print out List so user can see whats in the vector to search for
	cout << "Values within the list:" << endl;
	List<int>::iterator itr = list.begin();
	for (; itr != list.end(); *itr++)
	{
		cout << *itr << ",";
	}
	cout << endl;

	//Search for a value the user enters, to see if in vector.
	do {
		cout << "What value would you like to find?:";
		cin >> lookup;

		valueLocVec = binary_search(lookup, vec, vecSteps);
		valueLocList = binary_search(lookup, list, listSteps);

		if ((valueLocVec != -1) && (valueLocList != -1)) 
		{
			cout << "Value within the Vector found at location: " << valueLocVec << " in the vector and took " << vecSteps << " to find it." << endl;
			cout << "Value within the List found at location: " << valueLocList << " in the vector and took " << listSteps << " to find it." << endl;
		}

		else
			cout << "Value not found." << endl;

		cout << "Run again? (Y/N):";
		cin >> runAgain;

		cout << endl;
	} while (toupper(runAgain) != 'N');
		


	return 0;
}

void rand_seed()
{
	int seed = static_cast<int>(time(0));
	srand(seed);
	return;
}

int rand_int(int a, int b)
{
	return a + rand() % (b - a + 1);
}

void random_vector_asc(int k, Vector<int>& vec)
{
	if (k <= 0)
		return;
	int rnum = rand_int(1, 9);

	vec.push_back(rnum);
	int prev = rnum;

	for (int i = 1; i <= k - 1; i++)
	{
		int next = prev + rand_int(1, 9);
		vec.push_back(next);
		prev = next;
	}
	return;
}

void random_vector_asc(int k, List<int>& vec)
{
	if (k <= 0)
		return;
	int rnum = rand_int(1, 9);

	vec.push_back(rnum);
	int prev = rnum;

	for (int i = 1; i <= k - 1; i++)
	{
		int next = prev + rand_int(1, 9);
		vec.push_back(next);
		prev = next;
	}
	return;
}