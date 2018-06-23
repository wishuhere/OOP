#include "Queue.h"

void Queue::khoiTao() 
{
	front = 0;
	Rear = -1;
	Count = 0;
}

int Queue::Full() 
{
	if (Count == 1000) 
		return 1;
	return 0;
}

int Queue::Empty() 
{
	if (Count == 0)
		return 1;
	return 0;
}

void Queue::Push(int x)
{
	if (Full()) 
		cout << "Hang doi day !";
	else
	{
		Data[++Rear] = x;
		Count++;
	}
}

int Queue::Pop()
{
	if (Empty()) 
		cout << "Hang doi rong !";
	else
	{
		int x = Data[front];
		for (int i = front; i < Rear; i++) 
			Data[i] = Data[i + 1];
		Rear--; 
		Count--;
		return x;
	}
}

int Queue::Front()
{
	if (Empty()) 
		cout << "Hang doi rong !";
	else 
		return Data[front];
}

void Queue::Nhap(Queue &Q) 
{
	int n, x;
	do
	{
		cout << "Nhap so phan tu cua Queue (nho hon 1000): ";
		cin >> n;
	} while (n > 1000 || n < 1);
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu thu " << i + 1 << ": ";
		cin >> x;
		Q.Push(x);
	}
}


void Queue::Xuat()
{
	if (Empty()) 
		cout << "Hang doi rong !";
	else
	{
		for (int i = front; i <= Rear; i++)
			cout << Data[i] << "    ";
		cout << "\n";
	}
}

int Queue::Size()
{
	return Count;
}

Queue::Queue()
{
}


Queue::~Queue()
{
}
