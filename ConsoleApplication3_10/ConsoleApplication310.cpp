// ConsoleApplication310.cpp: 定义控制台应用程序的入口点。
//3.10.cpp汉诺塔问题

#include "stdafx.h"
#include<iostream>
using namespace std;

//把SRC针的最上面一个盘子移动到dest针上
void move(char src, char dest) {
	cout << src << "-->" << dest << endl;
}

//把n个盘子从src针移动到dest针，以medium为中介
void hanoi(int n, char src, char medium, char dest) {
	if (n == 1)
		move(src, dest);
	else {
		hanoi(n - 1, src, dest, medium);
		move(src, dest);
		hanoi(n - 1, medium, src, dest);
	}
}

int main()
{
	int m;
	cout << "enter the number of disks:";
	cin >> m;
	cout << "the steps to moving " << m << " disks:" << endl;
	hanoi(m, 'A', 'B', 'C');
	return 0;
}

