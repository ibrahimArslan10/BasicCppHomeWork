#include "pch.h"
#include <conio.h>
#include <cstring>
#include <cstdlib>
#include<locale.h>
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "turkish");
	char cumle[100];
	int uzunluk, i;
	char harf;
	int sayac_a = 0;
	int sayac_e = 0;
	int sayac_o = 0;
	int sayac_o_noktali = 0;
	int sayac_i_noktasiz = 0;
	int sayac_i = 0;
	int sayac_u = 0;
	int sayac_u_noktali = 0;


	cout << "Bir cümle giriniz  ( Büyük harf kullanabilirsiniz)\n" << "" << endl;
	cin >> cumle;

	uzunluk = strlen(cumle);

	for (i = 0; i < uzunluk; i++) {
		harf = cumle[i];
		if (harf == 'a' || harf == 'A') {
			sayac_a += 1;
		}


	}


	cout << " A Harfi Sayisi" << sayac_a<<endl;




	for (i = 0; i < uzunluk; i++) {
		harf = cumle[i];
		if (harf == 'e' || harf == 'E') {
			sayac_e += 1;
		}


	}


	cout << " E Harfi Sayisi" << sayac_e<<endl;





	for (i = 0; i < uzunluk; i++) {
		harf = cumle[i];
		if (harf == 'O' || harf == 'o') {
			sayac_o += 1;
		}


	}


	cout << " O Harfi Sayisi" << sayac_o<<endl;



	for (i = 0; i < uzunluk; i++) {
		harf = cumle[i];
		if (harf == 'ö' || harf == 'Ö') {
			sayac_o_noktali += 1;
		}


	}


	cout << " Ö Harfi Sayisi" << sayac_o_noktali<<endl;



	for (i = 0; i < uzunluk; i++) {
		harf = cumle[i];
		if (harf == 'ı' || harf == 'I') {
			sayac_i_noktasiz += 1;
		}


	}


	cout << " I Harfi Sayisi" << sayac_i_noktasiz<<endl;






	for (i = 0; i < uzunluk; i++) {
		harf = cumle[i];
		if (harf == 'i' || harf == 'İ') {
			sayac_i += 1;
		}


	}


	cout << " İ Harfi Sayisi" << sayac_i<<endl;




	for (i = 0; i < uzunluk; i++) {
		harf = cumle[i];
		if (harf == 'U' || harf == 'u') {
			sayac_u += 1;
		}


	}


	cout << " U Harfi Sayisi" << sayac_u<<endl;





	for (i = 0; i < uzunluk; i++) {
		harf = cumle[i];
		if (harf == 'Ü' || harf == 'ü') {
			sayac_u_noktali += 1;
		}


	}


	cout << " Ü Harfi Sayisi" << sayac_u_noktali<<endl;



	system("pause");
	return 0;
}
