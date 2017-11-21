#include "stdafx.h"
#include <iostream>
#include "algorithm"


using namespace std;

//template 声明一个任意数据类型
template <class T>
//==============Bubble sort===============================
void BubbleSort(T arr[], int n)
{
	//数组中有几个值就遍历几遍
	for (int i = 0; i < n; i++) 
		//遍历数组中的每一个值
		for (int j = 0; j < n - 1; j++) 
			//遍历的值和它右边的值对比 如果大于右边的值 就交换
			if (arr[j] > arr[j + 1]) 
				swap(arr[i], arr[i+1]);
}
/* 
当然，如果考虑到与STL库的兼容性，最好就是将函数的两个参数分别改为数组的起始地址，
以及最后一个元素的地址+1，这样就能兼容STL的vector容器了，可扩展性进一步得到提升。 
*/

//！！！！！推荐版本！！！！！ visualgo.net bubble sort的思路 + http://www.jianshu.com/p/8abad5e9432b 的优化 最易理解（效率等同于优化版本）
	//目前缺少模板T任意类型数组（稍后再做）
void VisualgoBubbleSort(int arr[], int n) {
	int count = 0;
	bool swapped;
	do
	{
		swapped = false;
		for (int i = 1; i <= n - 1; i++)
			if (arr[i-1]>arr[i]) {
				++count;
				cout << "arr[i - 1] = " << arr[i - 1] << ", arr[i] = " << arr[i] <<"第 "<< count << " 次"<< endl;
				swap(arr[i - 1], arr[i]);
				swapped = true;
			}
		//每次冒泡完 最大值到最右边，所以下次遍历都不遍历最右边，所以最大值减一
		n--;
	} while (swapped);
}

//int冒泡排序免长度加强版
void VisualgoBubbleSortWithIntWithoutLenth(int arr[]) {
	int length = (int) sizeof(arr) / sizeof(*arr);
	int count = 0;
	bool swapped;
	do{
		for(int i = 1; i <= length; i++)
			if (arr[i-1] > arr[i]) {
				++count;
				swap(arr[i - 1], arr[i]);
				swapped = true;
			}
		length--;
	} while (swapped);
}




//优化版冒泡  每一轮取出最大值，之后不再对最大值排序(效率等同于visualgo版本)
void BubbleSortOpitimized(int arr[], int len) {
	int count = 0;
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
				++count;
				cout << "arr[i] = " << arr[i] << ", arr[i+1] = " << arr[i + 1] <<"第 " << count << " 次"<< endl;
				swap(arr[i], arr[i+1]);
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
	cout << "This is bubblesort by descend :" << endl;
	for (int i = 7; i >= 0; i--) {
		cout << arr[i] << endl;
	}
	cout << "\n" << endl;
}
//升序输出
void BubbleSortByAscend(int arr[], int n) {
	BubbleSort(arr, n);
	cout << "This is bubblesort by  ascend :" << endl;
	for (int i = 0; i < 8; i++) {
		cout << arr[i] << endl;
	}
	cout << "\n" << endl;
}

//降序输出优化版
void BubbleSortOpitimizedByDescend(int arr[], int n) {
	BubbleSortOpitimized(arr, n);
	cout << "Opitimized: This is bubblesort by  descend :" << endl;
	for (int i = 7; i >= 0; i--) {
		cout << arr[i] << endl;
	}
	cout << "\n" << endl;
}

//升序输出优化版
void BubbleSortOpitimizedByAscend(int arr[], int n) {
	BubbleSortOpitimized(arr, n);
	cout << "Opitimized: This is bubblesort by ascend :" << endl;
	for (int i = 0; i < 8; i++) {
		cout << arr[i] << endl;
	}
	cout << "\n" << endl;
}



//==========================直接插入排序================================
void InsertionSort(int arr[], int len) {
	int i, j;
	int temp;
	//for each unsorted element X
	for (i = 1; i < len; i++) {
		//'extract' the element X
		temp = arr[i];
		//for j = lastSortedIndex down to 0
		//if current element j > X
		for (j = i - 1; j >= 0 && arr[j] > temp; j--)
			//move sorted element to the right by 1
			arr[j + 1] = arr[j];
		//break loop and insert X here
		arr[j + 1] = temp;
	}
}


// i5   j4   1    

void PrintInsertionSortByAsscend(int arr[], int n) {
	InsertionSort(arr, n);
	cout << "Insertion sort by ascend: " << endl;
	for (int i = 0; i < n; i++) {
		cout << arr[i] << endl;
	}
	cout << "\n" << endl;
}




template<typename T> 
void bubble_sort(T arr[], int len) {
	int i, j; T temp; 
	for (i = 0; i < len - 1; i++) 
		for (j = 0; j < len - 1 - i; j++) 
			if (arr[j] > arr[j + 1]) {
		temp = arr[j]; 
		arr[j] = arr[j + 1]; 
		arr[j + 1] = temp; 
			}
}

int main() {
	int arr[] = { 61, 17, 29, 22, 34, 60, 72, 21, 50, 1, 62 }; 
	int len = (int) sizeof(arr) / sizeof(*arr); 
	bubble_sort(arr, len); 
	for (int i = 0; i < len; i++) 
		cout << arr[i] << ' '; 
	cout << endl; float arrf[] = { 17.5, 19.1, 0.6, 1.9, 10.5, 12.4, 3.8, 19.7, 1.5, 25.4, 28.6, 4.4, 23.8, 5.4 }; 
	len = (int) sizeof(arrf) / sizeof(*arrf); bubble_sort(arrf, len); 
	for (int i = 0; i < len; i++) cout << arrf[i] << ' '; return 0;
	}