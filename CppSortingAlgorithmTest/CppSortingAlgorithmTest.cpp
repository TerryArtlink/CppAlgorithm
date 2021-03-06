// CppSortingAlgorithmTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <string>
#include <iterator>
#include <iostream>
#include <algorithm>
#include <array>

using namespace std;

int main()
{
	//用聚合初始化构造
	array<int, 3> a1{1, 2, 3}; // C++11 中要求双花括号 （C++14中不要求）
	array<int, 3> a2 = { 1, 2, 3 }; // 决不要求在 = 后
	array<string, 2> a3 = { string("a"), "b" };

	//支持容器操作
	sort(a1.begin(), a1.end());
	reverse_copy(a2.begin(), a2.end(), ostream_iterator<int>(cout, " "));

	cout << '\n';

	//支持带范围 for 循环
	for (const auto& s : a3)
		cout << s << ' ';
	
}

