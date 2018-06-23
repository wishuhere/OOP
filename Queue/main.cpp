#include "Queue.h"

int main()
{
	Queue q;
	q.khoiTao();
	q.Nhap(q);
	q.Xuat();

	int n;
	cout << "Moi chon phep toan voi Queue: ";
	cout << "\n1: Kiem tra Queue rong";
	cout << "\n2: Lay phan tu dau Queue: ";
	cout << "\n3: Them phan tu vao Queue";
	cout << "\n4: Lay va xoa phan tu dau cua Queue";
	cout << "\n5: Lay kich thuoc Queue";
	cout << "\n6: Xuat Queue";
	cout << "\n7: Thoat";
	do
	{
		cout << "\nBan chon: ";
		cin >> n;
		switch (n)
		{
		case 1:
		{
				  if (q.Empty()) 
					  cout << "Queue rong !";
				  else 
					  cout << "Queue khong rong !";
				  break;
		}
		case 2:
		{
				  cout << "Phan tu dau Queue: " << q.Front();
				  break;
		}
		case 3:
		{
				  int x;
				  cout <<"Nhap phan tu can chen vao Queue: ";
				  cin >> x;
				  q.Push(x);
				  break;
		}
		case 4:
		{
				  cout << "Phan tu lay ra: " << q.Pop();
				  break;
		}
		case 5:
		{
				  cout << "Kich thuoc cua Queue: " << q.Size();
				  break;
		}
		case 6:
		{
				  q.Xuat();
				  break;
		}
		case 7: break;
		}
	} while (n != 7);
	return 0;
}