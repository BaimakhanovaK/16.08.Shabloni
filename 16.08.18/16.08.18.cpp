// 16.08.18.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include<iostream>
#include<ctime>

using namespace std;

//Zadacha 35
template<typename type>
type arrMax(type arr[], int size, int &pos)
{
	type max = arr[0];
	int max_pos;

	for(int i=0;i<size;i++)
		if (arr[i] > max)
		{
			max = arr[i];
			max_pos = i;
		}
	pos = max_pos;
	return max;
}

//Zadacha 36
template<typename T> 
void arr(T arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == 0)
			cout << " "<<i <<" "<< endl;
	}
}

//Zadacha 37
template<typename S> 
void shag(S x, int &y)
{
	int n=1;
	for (int i = 0; i < y;i++)
	{
		n *= x;
	}
	cout << n << endl;
}

//Zadacha 41
//podkorrektirovat
int date(int day, int month, int year)
{
	int bday = 1;
	int bmonth = 1;
	int byear = 2018;
	int days = day;
	int months[12] = { 31, 28, 31,30,31,30,31,31,30,31,30,31 };
	if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
		months[1] = 29;

	for (int i = 0; i < month; i++)
	{
		days += months[i];
	}

	int week_day = days % 7;
	return week_day;
}




int main()
{
	//Zadacha 37
	/*int x, y;
	cin >> x>> y;
	shag(x, y);
	*/

	//Zadacha 36
	/*int a[] = { 1,2,0,0,0,5 };
	arr(a, 6);*/

	//Zadacha 35 c word doc
	//int a[] = { 2,5,1,8,3 };
	//double b[] = { 1.2, 2.6, 2.8, 1.3, 3.6 };
	//int position;
	//cout << arrMax(a, 5, position) << endl;
	//cout << " " << position << endl;
	//cout << arrMax(b, 5, position) << endl;
	//cout << " " << position << endl;

	


	

	system("pause");
    return 0;
}

