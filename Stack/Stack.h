#include <iostream>
using namespace std;

#pragma once
class Stack
{
private:
	int Top, Data[1000];
public:
	void khoiTao();
	void Nhap(Stack &S);
	void Xuat();
	void Push(int x);
	int Pop();
	int Peak();
	int Full();
	int Empty();
	int Size();
	Stack();
	~Stack();
};

