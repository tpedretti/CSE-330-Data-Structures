#ifndef BINARYSEARCH_H_
#define BINARYSEARCH_H_

#include <iostream>
#include <ctime>

#include "Vector.h"
#include "List.h"

using namespace std;

int binary_search(int x, const Vector<int>& vec, int& steps);
int binary_search(int x, const List<int>& vec, int& steps);

#endif