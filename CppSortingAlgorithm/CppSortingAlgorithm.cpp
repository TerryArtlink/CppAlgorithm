// CppSortingAlgorithm.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "Bubble sort.h"


using namespace std;


int main()
{
	int stature[] = { 176, 185, 190, 222, 1, 23, 45, 174 };
	
	BubbleSortByDescend(stature, 8);
	BubbleSortByAscend(stature, 8);


    return 0;
}

