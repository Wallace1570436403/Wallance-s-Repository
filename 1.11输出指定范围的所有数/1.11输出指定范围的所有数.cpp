// 1.11输出指定范围的所有数.cpp: 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include<iostream>
using namespace std;
void output(int x,int y)
{
	while (x != y+1)
	{
		cout << x<< "," << "\t";
		x++;
    }
}

int main()
{
	int m, n;
	cout << "请指定你要输出的范围的下限" << endl;
	cin >> m;
	cout << "请指定你要输出的范围的上限" << endl;
	cin >> n;
	output(m, n);
	system("pause");
	return 0;
}

