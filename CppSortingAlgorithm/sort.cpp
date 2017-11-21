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
	//Ŀǰȱ��ģ��T�����������飨�Ժ�������
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

//intð�������ⳤ�ȼ�ǿ��
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