#include <iostream>
using namespace std;

#pragma once
class Queue
{
private:
	int front, Rear, Data[1000], Count;
public:
	Queue();
	void khoiTao();
	void Nhap(Queue &Q);
	void Xuat();
	void Push(int x);
	int Pop();
	int Front();
	int Full();
	int Empty();
	int Size();
	~Queue();
};

