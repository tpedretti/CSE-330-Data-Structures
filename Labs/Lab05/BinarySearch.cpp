#include "Vector.h"
#include "List.h"
#include "BinarySearch.h"

using namespace std;

int binary_search(int x, const Vector<int>& vec, int& steps)
{
	int low = 0;
	int high = vec.size() - 1;
	steps = 0;

	while (low <= high)
	{
		int mid = (low + high) / 2;

		steps++;
		if (vec[mid] < x)
			low = mid + 1;

		else if (vec[mid] > x)
			high = mid - 1;

		else
			return mid;
	}

	return -1; //Return -1 if value not found
}

int binary_search(int x, const List<int>& lst, int& steps)
{
	int low = 0;
	int high = lst.size() - 1;

	steps = 0;
	while (low <= high)
	{
		int mid = (low + high) / 2;
		int nthSteps = 0;
		int midx = lst.nth(mid, nthSteps);

		steps++;
		steps += nthSteps;

		if (midx < x)
			low = mid + 1;
		else if (midx > x)
			high = mid - 1;
		else
			return mid;
	}

	return -1; //Return -1 if value not found
}