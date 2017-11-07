#include "stdafx.h"
#include <iostream>


using namespace std;

void BubbleSort(int arr[], int n)
{
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

//½µÐòÊä³ö1
void BubbleSortByDescend(int arr[], int n) {
	BubbleSort(arr, n);
	cout << "This is descend :" << endl;
	for (int i = 7; i >= 0; i--) {
		cout << arr[i] << endl;
	}
	cout << "\n" << endl;
}
//ÉýÐòÊä³ö
void BubbleSortByAscend(int arr[], int n) {
	BubbleSort(arr, n);
	cout << "This is ascend :" << endl;
	for (int i = 0; i < 8; i++) {
		cout << arr[i] << endl;
	}
	cout << "\n" << endl;
}
