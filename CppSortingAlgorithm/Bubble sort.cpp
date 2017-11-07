#include "stdafx.h"
#include <iostream>
#include "algorithm"


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

//优化版冒泡  每一轮取出最大值，之后不再对最大值排序
void BubbleSortOpitimized(int arr[], int len) {
	int i, temp;
	//记录为止， 当前所在位置和最后发生交换的地方
	int current, last = len - 1;
	while (last > 0) {
		/* 这只是初始值，  后面不会再次赋予这个值。
			i = current = 0;
				i = 0; current = 0;
		*/
		for (i = current = 0; i < last; ++i) {
			if (arr[i] > arr[i + 1]) {
				temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
				//记录当前的为止， 如果没有发生交换current值即for循环初始化的0
				current = i;
			}
		}
		//若current = 0 即已经没有可以交换的元素了，即已经有序了
		last = current;
	}
}

//降序输出1
void BubbleSortByDescend(int arr[], int n) {
	BubbleSort(arr, n);
	cout << "This is descend :" << endl;
	for (int i = 7; i >= 0; i--) {
		cout << arr[i] << endl;
	}
	cout << "\n" << endl;
}
//升序输出
void BubbleSortByAscend(int arr[], int n) {
	BubbleSort(arr, n);
	cout << "This is ascend :" << endl;
	for (int i = 0; i < 8; i++) {
		cout << arr[i] << endl;
	}
	cout << "\n" << endl;
}

//降序输出优化版
void BubbleSortOpitimizedByDescend(int arr[], int n) {
	BubbleSortOpitimized(arr, n);
	cout << "Opitimized: This is descend :" << endl;
	for (int i = 7; i >= 0; i--) {
		cout << arr[i] << endl;
	}
	cout << "\n" << endl;
}

//升序输出优化版
void BubbleSortOpitimizedByAscend(int arr[], int n) {
	BubbleSortOpitimized(arr, n);
	cout << "Opitimized: This is ascend :" << endl;
	for (int i = 0; i < 8; i++) {
		cout << arr[i] << endl;
	}
	cout << "\n" << endl;
}