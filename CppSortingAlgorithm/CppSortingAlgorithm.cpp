// CppSortingAlgorithm.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "sort.h"


using namespace std;


int main()
{
	cout << "     ==========Start Running==========     \n";
	int stature[] = { 999, 7, 5, 3, 1, 2, 4, 8, 6, 888, 777, 666, 555, 444, 333, 786, 231, 864, 325, 444, 555, 666, 123 };
	
	int lengthOfStature = sizeof(stature) / sizeof(int);

	//BubbleSortOpitimized(stature, lengthOfStature);
	VisualgoBubbleSort(stature, lengthOfStature);

	cout << "     ==========Succeed==========     \n" << endl;

    return 0;
}

