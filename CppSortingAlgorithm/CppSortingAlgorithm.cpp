// CppSortingAlgorithm.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "Bubble sort.h"


using namespace std;


int main()
{
	cout << "     ==========Start Running==========     \n";
	int stature[] = { 7, 5, 3, 1, 2, 4, 8, 6 };
	
	BubbleSortByDescend(stature, 8);
	BubbleSortByAscend(stature, 8);

	BubbleSortOpitimizedByDescend(stature, 8);
	BubbleSortOpitimizedByAscend(stature, 8);

	cout << "     ==========Succeed==========     \n" << endl;

    return 0;
}

