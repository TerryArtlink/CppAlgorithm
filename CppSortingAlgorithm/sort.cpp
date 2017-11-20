#include "stdafx.h"
#include <iostream>
#include "algorithm"


using namespace std;

//template ����һ��������������
template <class T>
//==============Bubble sort===============================
void BubbleSort(T arr[], int n)
{
	//�������м���ֵ�ͱ�������
	for (int i = 0; i < n; i++) 
		//���������е�ÿһ��ֵ
		for (int j = 0; j < n - 1; j++) 
			//������ֵ�����ұߵ�ֵ�Ա� ��������ұߵ�ֵ �ͽ���
			if (arr[j] > arr[j + 1]) 
				swap(arr[i], arr[i+1]);
}
/* 
��Ȼ��������ǵ���STL��ļ����ԣ���þ��ǽ����������������ֱ��Ϊ�������ʼ��ַ��
�Լ����һ��Ԫ�صĵ�ַ+1���������ܼ���STL��vector�����ˣ�����չ�Խ�һ���õ������� 
*/

//�����������Ƽ��汾���������� visualgo.net bubble sort��˼· + http://www.jianshu.com/p/8abad5e9432b ���Ż� ������⣨Ч�ʵ�ͬ���Ż��汾��

void VisualgoBubbleSort(int arr[], int n) {
	int count = 0;
	bool swapped;
	do
	{
		swapped = false;
		for (int i = 1; i <= n - 1; i++)
			if (arr[i-1]>arr[i]) {
				++count;
				cout << "arr[i - 1] = " << arr[i - 1] << ", arr[i] = " << arr[i] <<"�� "<< count << " ��"<< endl;
				swap(arr[i - 1], arr[i]);
				swapped = true;
			}
		//ÿ��ð���� ���ֵ�����ұߣ������´α��������������ұߣ��������ֵ��һ
		n--;
	} while (swapped);
}



//�Ż���ð��  ÿһ��ȡ�����ֵ��֮���ٶ����ֵ����(Ч�ʵ�ͬ��visualgo�汾)
void BubbleSortOpitimized(int arr[], int len) {
	int count = 0;
	int i, temp;
	//��¼Ϊֹ�� ��ǰ����λ�ú�����������ĵط�
	int current, last = len - 1;
	while (last > 0) {
		/* ��ֻ�ǳ�ʼֵ��  ���治���ٴθ������ֵ��
			i = current = 0;
				i = 0; current = 0;
		*/
		for (i = current = 0; i < last; ++i) {
			if (arr[i] > arr[i + 1]) {
				++count;
				cout << "arr[i] = " << arr[i] << ", arr[i+1] = " << arr[i + 1] <<"�� " << count << " ��"<< endl;
				swap(arr[i], arr[i+1]);
				//��¼��ǰ��Ϊֹ�� ���û�з�������currentֵ��forѭ����ʼ����0
				current = i;
			}
		}
		//��current = 0 ���Ѿ�û�п��Խ�����Ԫ���ˣ����Ѿ�������
		last = current;
	}
}

//�������1
void BubbleSortByDescend(int arr[], int n) {
	BubbleSort(arr, n);
	cout << "This is bubblesort by descend :" << endl;
	for (int i = 7; i >= 0; i--) {
		cout << arr[i] << endl;
	}
	cout << "\n" << endl;
}
//�������
void BubbleSortByAscend(int arr[], int n) {
	BubbleSort(arr, n);
	cout << "This is bubblesort by  ascend :" << endl;
	for (int i = 0; i < 8; i++) {
		cout << arr[i] << endl;
	}
	cout << "\n" << endl;
}

//��������Ż���
void BubbleSortOpitimizedByDescend(int arr[], int n) {
	BubbleSortOpitimized(arr, n);
	cout << "Opitimized: This is bubblesort by  descend :" << endl;
	for (int i = 7; i >= 0; i--) {
		cout << arr[i] << endl;
	}
	cout << "\n" << endl;
}

//��������Ż���
void BubbleSortOpitimizedByAscend(int arr[], int n) {
	BubbleSortOpitimized(arr, n);
	cout << "Opitimized: This is bubblesort by ascend :" << endl;
	for (int i = 0; i < 8; i++) {
		cout << arr[i] << endl;
	}
	cout << "\n" << endl;
}



//==========================ֱ�Ӳ�������================================
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



