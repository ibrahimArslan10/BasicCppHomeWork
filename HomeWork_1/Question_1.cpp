#include "pch.h"
#include <iostream>
using namespace std;


int main() {

	const int satir = 5;

	for (int i = 0; i < satir; ++i)
	{
		for(int j=0;j<satir-i;++j)

		{
			cout << "*";

		}
		for (int k = 0; k < 2 * i; ++k)
		{
			cout << " ";
		}
		cout << " ";
		for(int m=0;m<satir-i; ++m)
		{
			cout<<"*";
		}

		cout << endl;
	}


	cout << endl;
	for (int i = 0; i < satir; ++i)
	{

		for (int j = -1; j < i; ++j)
		{
			cout << "*";

		}
		for (int k = 2; k < 2 * satir - 2 * i; ++k)

		{

			cout << " ";

		}
		cout << " ";
		for (int g = -1; g < i; ++g)
		{
			cout << "*";

		}
		cout << endl;
	}

	system("pause");
	return 0;
}

