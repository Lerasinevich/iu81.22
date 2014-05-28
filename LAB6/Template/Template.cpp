// Template.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "iostream"
#include "conio.h"

using namespace std;

class A
{
public:

	int var1;
	int var2;
	A()
	{
		var1 = 0;
		var2 = 0;
	}
	void swap (A a, A b)
	{
		A tmp = a;
		a = b;
		b = tmp;
	}

    bool A::operator > (A c)
	{
		bool more;
		if(var1 > c.var1) more = true;
		return more;
	}

}

class B
{
public:
	double var3;
	char var4;
	B()
	{
		var3 = 0;
		var4 = 0;
	}
	void swap (B a, B b)
	{
		B tmp = a;
		a = b;
		b = tmp;
	}

	 bool B::operator > (B c)
	{
		bool more;
		if(var3 > c.var3) more = true;
		return more;
	}
}


template <typename T>
void sort(T *mas)
{
	int count = 0;
	while (mas[count])
	{
		count++;
	}
	int n = count;
	for (int i = n-1; i>0; i--)
	{
		for (int j = 1; j <i+1; j++)
		{
			if (mas[j] < mas[j-1]) swap (mas[j-1], mas[j]);
		}
	}
	for (int i = 0; i<n; i++)
	{
		cout << mas[i];
	}
}






int _tmain(int argc, _TCHAR* argv[])
{
	A *masA = new A[10];
	B *masB = new B[10];
	cout << "¬ведите значени€ дл€ элементов класса A (10)";
	for (int i = 0; i <10; i++)
	{
		int x;
		cin >> x;
		masA[i].var1 = x;
	}

	cout << "¬ведите значени€ дл€ элементов класса B (10)";
	for (int i = 0; i <10; i++)
	{
		int x;
		cin >> x;
		masB[i].var3 = x;
	}

	sort(masA);
	sort(masB);

	return 0;
}

