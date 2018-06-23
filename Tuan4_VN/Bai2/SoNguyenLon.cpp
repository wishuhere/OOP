#include "SoNguyenLon.h"

SoNguyenLon SoNguyenLon::snlMax;

//Khai bao
SoNguyenLon::SoNguyenLon(void) 
{ 
	soCS = 1;  mangSo[soCS - 1] = 0;  
	if (*this > snlMax)  
	{ 
		snlMax = *this; 
	} 
}

SoNguyenLon::SoNguyenLon(const int& cs, const int& a) 
{
	int csR = cs;  
	if (csR < 1)  
	{ 
		csR = 1; 
	}  
	if (csR > 9)  
	{
		csR = 9; 
	}  
	soCS = abs(a); 
	if (soCS < 1)  
	{
		soCS = 1;
	}  
	if (soCS > MAXLENGTH)  
	{ 
		soCS = MAXLENGTH; 
	}  
	for (int i = 0; i<soCS; ++i)  
	{
		mangSo[i] = cs; 
	}  
	if (*this > snlMax)  
	{ 
		snlMax = *this; 
	}
}

SoNguyenLon::SoNguyenLon(const unsigned int& n) 
{ 
	unsigned int temp = n;  
	soCS = 0;  
	while (temp > 9) 
	{ 
		mangSo[soCS++] = temp % 10;  
		temp /= 10;
	}  
	mangSo[soCS++] = temp;  
	if (*this > snlMax)  
	{
		snlMax = *this; 
	} 
}

SoNguyenLon::SoNguyenLon(const SoNguyenLon& snl) 
{ 
	soCS = snl.soCS;  
	for (int i = 0; i<soCS; ++i) 
	{ 
		mangSo[i] = snl.mangSo[i]; 
	} 
}

SoNguyenLon::~SoNguyenLon(void) 
{ 
}


//Toan tu
bool SoNguyenLon::operator>(const SoNguyenLon& snl) 
{
	if (soCS > snl.soCS)  
	{ 
		return true; 
	}  
	if (soCS < snl.soCS) 
	{ 
		return false;
	}  
	for (int i = soCS - 1; i >= 0; --i) 
	{
		if (mangSo[i] == snl.mangSo[i])
		{
			continue;
		}  
		if (mangSo[i] > snl.mangSo[i])   
		{ 
			return true; 
		}   
		return false;
	}  
	return false;
}

const SoNguyenLon& SoNguyenLon::operator=(const SoNguyenLon& snl) 
{ 
	soCS = snl.soCS;  
	for (int i = 0; i<soCS; ++i) 
	{ 
		mangSo[i] = snl.mangSo[i]; 
	}  
	return *this; 
}

SoNguyenLon SoNguyenLon::operator+(const SoNguyenLon& snl) 
{ 
	SoNguyenLon ketQua;  
	const SoNguyenLon *snlSCSMax = (soCS > snl.soCS) ? this : &snl; 
	const SoNguyenLon *snlSCSMin = (soCS < snl.soCS) ? this : &snl;  
	int soCSMin = (soCS > snl.soCS) ? snl.soCS : soCS;  
	int nho = 0;  
	for (int i = 0; i<snlSCSMin->soCS; ++i)  
	{ 
		ketQua.mangSo[i] = mangSo[i] + snl.mangSo[i] + nho;  
		nho = ketQua.mangSo[i] / 10;   
		ketQua.mangSo[i] %= 10; 
	}  
	for (int i = snlSCSMin->soCS; i < snlSCSMax->soCS; i++)  
	{ 
		ketQua.mangSo[i] = snlSCSMax->mangSo[i] + nho;  
		nho = ketQua.mangSo[i] / 10;   
		ketQua.mangSo[i] %= 10; 
	}  
	ketQua.soCS = snlSCSMax->soCS;  
	if (nho > 0) 
	{ 
		ketQua.mangSo[ketQua.soCS++] = 1; 
	}  
	if (ketQua > snlMax)  
	{ 
		snlMax = ketQua; 
	}  
	return ketQua;
}

SoNguyenLon SoNguyenLon::operator-(const SoNguyenLon& snl) 
{
	SoNguyenLon ketQua;  
	int nho = 0, i; 
	if (soCS >= snl.soCS)  
	{
		for (i = 0; i<snl.soCS; ++i)  
		{ 
			ketQua.mangSo[i] = mangSo[i] - snl.mangSo[i] - nho;   
			nho = 0;    
			if (ketQua.mangSo[i] < 0)    
			{ 
				ketQua.mangSo[i] += 10;
				nho = 1; 
			} 
		}   
		for (; i < soCS; i++)  
		{
			ketQua.mangSo[i] = mangSo[i] - nho;   
			nho = 0;    
			if (ketQua.mangSo[i] < 0)    
			{ 
				ketQua.mangSo[i] += 10;     nho = 1; 
			} 
		}  
		ketQua.soCS = soCS;  
		while (ketQua.mangSo[ketQua.soCS - 1] == 0)  
		{ 
			ketQua.soCS--; 
		} 
	}  
	return ketQua;
}

SoNguyenLon operator+(const unsigned int& n, const SoNguyenLon& snl) 
{ 
	SoNguyenLon a(n);  
	SoNguyenLon ketQua = a + snl; 
	if (ketQua > SoNguyenLon::snlMax) 
	{ 
		SoNguyenLon::snlMax = ketQua;
	} 
	return ketQua; 
}

SoNguyenLon operator-(const unsigned int& n, const SoNguyenLon& snl) 
{ 
	SoNguyenLon a(n); 
	return a - snl; 
}

//Toan tu xuat
ostream& operator<<(ostream& os, const SoNguyenLon& snl) 
{ 
	for (int i = snl.soCS - 1; i >= 0; --i)  
	{ 
		os << snl.mangSo[i];
	} 
	return os; 
}

//Tim so nguyen lon lon nhat
SoNguyenLon SoNguyenLon::SNLMax() 
{ 
	return snlMax; 
}