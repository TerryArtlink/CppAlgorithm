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

//�Ż���ð��  ÿһ��ȡ�����ֵ��֮���ٶ����ֵ����
void BubbleSortOpitimized(int arr[], int len) {
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
				temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
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
	cout << "This is descend :" << endl;
	for (int i = 7; i >= 0; i--) {
		cout << arr[i] << endl;
	}
	cout << "\n" << endl;
}
//�������
void BubbleSortByAscend(int arr[], int n) {
	BubbleSort(arr, n);
	cout << "This is ascend :" << endl;
	for (int i = 0; i < 8; i++) {
		cout << arr[i] << endl;
	}
	cout << "\n" << endl;
}

//��������Ż���
void BubbleSortOpitimizedByDescend(int arr[], int n) {
	BubbleSortOpitimized(arr, n);
	cout << "Opitimized: This is descend :" << endl;
	for (int i = 7; i >= 0; i--) {
		cout << arr[i] << endl;
	}
	cout << "\n" << endl;
}

//��������Ż���
void BubbleSortOpitimizedByAscend(int arr[], int n) {
	BubbleSortOpitimized(arr, n);
	cout << "Opitimized: This is ascend :" << endl;
	for (int i = 0; i < 8; i++) {
		cout << arr[i] << endl;
	}
	cout << "\n" << endl;
}