#include "Stack.h"

int main()
{
	Stack s;
	s.khoiTao();
	s.Nhap(s);
	s.Xuat();
	int n;
	cout << "Moi chon phep toan voi Stack: ";
	cout << "\n1: Kiem tra Stack rong";
	cout << "\n2: Lay phan tu dau Stack: ";
	cout << "\n3: Them phan tu vao Stack";
	cout << "\n4: Lay va xoa phan tu dau cua Stack";
	cout << "\n5: Lay kich thuoc Stack";
	cout << "\n6: Xuat Stack";
	cout << "\n7: Thoat";
	do
	{
		cout << "\nBan chon: ";
		cin >> n;
		switch (n)
		{
		case 1:
		{
				  if (s.Empty())
					  cout << "Stack rong !";
				  else 
					  cout << "Stack khong rong !";
				  break;
		}
		case 2:
		{
				  cout << "Phan tu dau Stack: " << s.Peak();
				  break;
		}
		case 3:
		{
				  int x;
				  cout << "Nhap phan tu can them: ";
				  cin >> x;
				  s.Push(x);
				  break;
		}
		case 4:
		{
				  cout << "Phan tu lay ra: " << s.Pop();
				  break;
		}
		case 5:
		{
				  cout << "Kich thuoc cua Stack: " << s.Size();
				  break;
		}
		case 6:
		{
				  s.Xuat();
				  break;
		}
		case 7: break;
		}
	} while (n != 7);
	return 0;
}