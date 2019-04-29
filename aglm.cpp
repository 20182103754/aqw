// aglm.cpp : 定义控制台应用程序的入口点。

#include "stdafx.h"
#include"iostream"
using  namespace std;
class CAngeluma
{
private:
	int year;
	int month;
	int day;
public:
	CAngeluma();
	CAngeluma(int y, int m, int d);
	void getCAngeluma();
};
CAngeluma::CAngeluma()
{
	year = 2019;
	month = 1;
	day = 1;
}
CAngeluma::CAngeluma(int y, int m, int d)
{
	year = y;
	month = m;
	day = d;
}
void CAngeluma::getCAngeluma()
{
	cout << year << " " << month << " " << day << " " << endl;
}
int main()
{
	CAngeluma o1;
	o1.getCAngeluma();
	return 0;
}
