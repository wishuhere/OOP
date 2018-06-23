#include "Stack.h"

void Stack::khoiTao()
{
	Top = 0;
}

int Stack::Empty()
{
	return (Top == 0);
}

int Stack::Size()
{
	return Top;
}

int Stack::Full()
{
	return (Top == 1000);
}

void Stack::Push(int x) 
{
	if (!Full())
	{
		Data[Top] = x; 
		Top++; 
	}
}

int Stack::Peak()
{
	return Data[Top - 1];
}

int Stack::Pop()
{
	if (!(Empty()))
	{
		Top--;
		return Data[Top];
	}
}

void Stack::Nhap(Stack &S)
{
	int n, x;
	do
	{
		cout << "Nhap so phan tu cua Stack (nho hon 1000): ";
		cin >> n;
	} while (n > 1000 || n < 1);
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu thu " << i + 1 << ": ";
		cin >> x;
		S.Push(x);
	}
}

void Stack::Xuat()
{
	for (int i = Top - 1; i >= 0; i--)
		cout << Data[i] << "    ";
	cout << "\n";
}

Stack::Stack()
{
}


Stack::~Stack()
{
}
