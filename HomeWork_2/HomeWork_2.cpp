#include "pch.h"
#include<conio.h>
#include<stdio.h>
#include<cstring>
#include<ctype.h>
#include<stdio.h>
#include<string.h>
#include <iostream>
using namespace std;

 char alfabev1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
 char* alfabev2 = alfabev1;
class Sifre {

public:
	char*	Sifrem(char* alfabe, char* girilensifre) {

		char*  yeniKey;
		girilensifre = yeniKey;
		int i, x, y, ss, sk;
		ss = strlen(alfabe);
		sk = strlen(girilensifre);
		x = ss / sk;
		y = ss % sk;
		for (i = 1; i < x; i++)
			strcat(yeniKey,girilensifre);
		x = strlen(girilensifre);
		for (i = 0; i < y; i++)
		{
			girilensifre[x] = yeniKey[i];
			x++;
		}
		return girilensifre;


}

  

	
	Sifre() {
	
		alfabe = alfabev2;
	
	
	};

	char* sifrele(char*,char*);
	char* sifrecoz(char*,char*);
	//void sifreKelimesiAta(char*);

private:
	char* alfabe;
	char* sifreKelimesi;
	









};








char* sifrele(char* mesaj,char* yenikey) {


	char* sifrelimesaj;
	for (int i = 0; i < strlen(mesaj); i++)
	{
		if (mesaj[i] >= 65 && mesaj[i] <= 90)
		{
			sifrelimesaj[i] = (mesaj[i] + yenikey[i]) % 26;
		sifrelimesaj[i] += 'A';
		}
		else
			sifrelimesaj[i] = mesaj[i];
	}
	return sifrelimesaj;

}




char* sifrecoz(char* mesaj,char* yenisifre) {

	char* cozulmus;

	for (int i = 0; i < strlen(mesaj); i++)
	{
		if (mesaj[i] >= 65 && mesaj[i] <= 90)
		{
			cozulmus[i] = (mesaj[i] - yenisifre[i] + 26) % 26;
			cozulmus[i] += 'A';
		}
		else
			cozulmus[i] = mesaj[i];
	}
	return cozulmus;

}


int main()
{
	char* sifrelimesaj;
	char* mesaj;
	Sifre sifre;
	cout << "Alfabe giriniz" << endl;
	cin >> alfabev2;
	char* ksifre;
	char* yenisifre;
	char* sifrelimesaj;
	char* cozulmusmesaj;
	
	cout << "Mesajı giriniz: " << endl;
	cin >> mesaj;
	cout << "Şifreyi giriniz:" << endl;
	cin >>ksifre;
	yenisifre = sifre.Sifrem(mesaj, ksifre);
	sifrelimesaj = sifrele(mesaj, yenisifre);
	cozulmusmesaj = sifrecoz(mesaj, yenisifre);



	cout << "Şifrelenmiş Mesaj : " << sifrelimesaj << endl;
	cout << "Şifresi Çözülmüş Mesaj : " << cozulmusmesaj<<endl;
	system("pause");
	return 0;
}