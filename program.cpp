#include <iostream>
#include <Windows.h>     // Sleep fonksiyonu i�in

using namespace std;

int satirSayisi, sutunSayisi;              //de�i�kenlerimizi yazd�k

void satir_sutun()                         //satir_sutun fonksiyonu yazarak tekrar kullanmam�z gerekti�inde satir_sutun yazmam�z yeterli olacak
{
	cout << "satir...: ";                  

	cin >> satirSayisi;                    

	while (satirSayisi < 5 || satirSayisi > 15)       // burada ko�ullar�m�z ba�lad� while d�ng�s�ne koyduk hata olursa tekrar tekrar sormas� i�in
	{
		if (satirSayisi < 5 || satirSayisi > 15)      // if ile sat�r�n 5 ile 15 aras�nda bir de�er al�p almad���na bak�l�yor

		{
			cout << "satir numarasi hatali...Tekrar Deneyin..." << endl;

			cout << "satir...: ";

			cin >> satirSayisi;
		}

	}

	cout << "sutun...: ";                             

	cin >> sutunSayisi;                               

	while (sutunSayisi < 5 || sutunSayisi > 40)       // sutun say�s�n� da bir while d�ng�s�ne koyuyoruz
	{
		if (sutunSayisi < 5 || sutunSayisi > 40)      // if ile sutun say�s�n�n 5 ile 40 aras�nda olup olmad�� kontrol ediliyor
		{
			cout << "sutun numarasi hatali...Tekrar Deneyin..." << endl;    

			cout << "sutun...: ";

			cin >> sutunSayisi;

		}

	}
}
int main()             // ana kod sat�r�m�z� a�t�k
{
	
	satir_sutun();     // fonksiyonda tan�mlad���m�z kod sat�r�n� buraya getiriyoruz

	while (sutunSayisi != satirSayisi * 2)           // sutun sayisi sat�r say�s�n�n iki kat� olmal� bu yuzden bir d�ng� a��yoruz
	{
		if (sutunSayisi != satirSayisi * 2)          // if ile sutun say�s�n�n sat�r say�s�n�n iki kat� olup olmad��� kontrol ediliyor
		{
			cout << "sutun sayisi satir sayisini iki kati olmalidir...Tekrar Deneyin..." << endl;

			satir_sutun();                           // tekrardan sutun ve sat�r girilmesi i�in sat�r_sutun fonksiyonumuzu �a��r�yoruz

		}
	}

	for (int j = 0; j < satirSayisi; j++)           // for d�ng�s�yle sat�r say�s� girildi�inde klavyeden girdi�imiz kadar �ekil ��k�yor ekrana
	{
		for (int i = 0; i < sutunSayisi; i++)       // for d�ng�s�yle bu sefer sutun say�s�n� ekrana ��kar�yoruz satir say�s� i�ine koyarak sat�r say�s� kadar da sutun say�s� oluyor
		{

			if (i < sutunSayisi - 1 && i != 0 && j != 0 && j < satirSayisi - 1 && i != satirSayisi - 1 - j && (i - sutunSayisi / 2) != j)
				//(if ko�uluyla ekrana hangi y�ld�zlar�n ��k�p ��kmamas� gereken ko�ullar girildi)
			{

				cout << " ";

			}

			else {
				Sleep(30);   
				cout << "*";

			}

		}

		cout << endl;

	}
	cout << endl;

	for (int j = 0; j < satirSayisi; j++)     // for d�ng�s�yle sat�r say�s� girildi�inde klavyeden girdi�imiz kadar �ekil ��k�yor ekrana
	{
		for (int i = 0; i < sutunSayisi; i++)   // for d�ng�s�yle bu sefer sutun say�s�n� ekrana ��kar�yoruz satir say�s� i�ine koyarak sat�r say�s� kadar da sutun say�s� oluyor
		{

			if (i < sutunSayisi - 1 && i != 0 && j != 0 && j < satirSayisi - 1 && i != j && i != sutunSayisi - 1 - j)
				//(if ko�uluyla ekrana hangi y�ld�zlar�n ��k�p ��kmamas� gereken ko�ullar girildi)
			{
				cout << " ";

			}
			else {
				Sleep(30);
				cout << "*";
			}

		}
		cout << endl;

	}

	system("pause");

	return 0;
}

