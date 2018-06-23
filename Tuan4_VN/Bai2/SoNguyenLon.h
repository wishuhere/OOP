#include<iostream>
using namespace std;

#pragma once
#define MAXLENGTH 100 

class SoNguyenLon {
private:  
	int mangSo[MAXLENGTH];  
	int soCS;  
	static SoNguyenLon snlMax;
public:  
	SoNguyenLon(void);  
	SoNguyenLon(const int& cs, const int& scs);  
	SoNguyenLon(const unsigned int& n);  
	SoNguyenLon(const SoNguyenLon& snl); 
	~SoNguyenLon(void);
	//Toan tu
	 SoNguyenLon operator+(const SoNguyenLon& snl);  
	 SoNguyenLon operator-(const SoNguyenLon& snl); 
	 bool operator>(const SoNguyenLon& snl);  
	 const SoNguyenLon& operator=(const SoNguyenLon& snl); 
	 friend SoNguyenLon operator+(const unsigned int& n, const SoNguyenLon& snl); 
	 friend SoNguyenLon operator-(const unsigned int& n, const SoNguyenLon& snl);  
	 //Toan tu xuat
	 friend ostream& operator<<(ostream& os, const SoNguyenLon& snl);

	 static SoNguyenLon SNLMax();
};
