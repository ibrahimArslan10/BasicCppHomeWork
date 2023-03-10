#include "stdafx.h"
#include <iostream>
#include <time.h>
#include <iomanip>
#include <locale.h>
using namespace std;

int matris[10][10];
int olustur();
bool elemanKontrol(int);
void matrisYaz();
void sirala();

int main() {
	setlocale(LC_ALL, "turkish");
	srand(time(NULL));
	cout << "Toplam rastgele cağrım adedi: " << olustur() << endl;
	cout << "Rastgele oluşan ve elemanları birbirinden farklı matris: " << endl;
	matrisYaz();
	cout << endl << "Büyükten küçüğe sıralanmış matris: " << endl;
	sirala();
	system("pause");
	return 0;
}

int olustur() {
	int randTekrar = 0;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			int gecici;
			do {
				gecici = (rand() % 100) + 1; 
				randTekrar++; 
			} while (elemanKontrol(gecici)); 
			matris[i][j] = gecici; 
		}
	}
	return randTekrar;
}

bool elemanKontrol(int eleman) {
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (matris[i][j] == eleman) 
				return true;
		}
	}
	return false;
}

void matrisYaz() {
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			cout << setw(5) << matris[i][j] << " "; 
		}
		cout << endl;
	}
}

void sirala() {
	int gecici[10][10]; 
	int geciciSatir, geciciSutun, indis;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			indis = 100 - matris[i][j]; 
			geciciSatir = indis / 10; 
			geciciSutun = indis % 10; 
			gecici[geciciSatir][geciciSutun] = matris[i][j]; 
		}
	}
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			matris[i][j] = gecici[i][j]; 
		}
	}
	matrisYaz();
}