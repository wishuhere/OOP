#include "Diem.h"

void Diem::Nhap()
{
	cout << "Nhap vao tung do: ";
	cin >> x;
	cout << "Nhap vao hoanh do: ";
	cin >> y;
}

double Diem::khoangCach(const Diem &p)
{
	float dx = this->x - p.x;
	float dy = this->y - p.y;
	return sqrt((double)(dx*dx + dy*dy));
}

Diem::Diem(float xx, float yy)
{
	this->x = xx;
	this->y = yy;
}

int Diem::xetDongThang(Diem b, Diem c)
{
	if (this->x == b.x&&this->x == c.x&&b.x == c.x || this->y == b.y&&this->y == c.y&&b.y == c.y)
		return 1;
	else
		return 0;
}


Diem::Diem()
{
}


Diem::~Diem()
{
}
