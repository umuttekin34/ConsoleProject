#include <iostream>
#include <Windows.h>     // Sleep fonksiyonu için

using namespace std;

int satirSayisi, sutunSayisi;              //deðiþkenlerimizi yazdýk

void satir_sutun()                         //satir_sutun fonksiyonu yazarak tekrar kullanmamýz gerektiðinde satir_sutun yazmamýz yeterli olacak
{
	cout << "satir...: ";                  

	cin >> satirSayisi;                    

	while (satirSayisi < 5 || satirSayisi > 15)       // burada koþullarýmýz baþladý while döngüsüne koyduk hata olursa tekrar tekrar sormasý için
	{
		if (satirSayisi < 5 || satirSayisi > 15)      // if ile satýrýn 5 ile 15 arasýnda bir deðer alýp almadýðýna bakýlýyor

		{
			cout << "satir numarasi hatali...Tekrar Deneyin..." << endl;

			cout << "satir...: ";

			cin >> satirSayisi;
		}

	}

	cout << "sutun...: ";                             

	cin >> sutunSayisi;                               

	while (sutunSayisi < 5 || sutunSayisi > 40)       // sutun sayýsýný da bir while döngüsüne koyuyoruz
	{
		if (sutunSayisi < 5 || sutunSayisi > 40)      // if ile sutun sayýsýnýn 5 ile 40 arasýnda olup olmadðý kontrol ediliyor
		{
			cout << "sutun numarasi hatali...Tekrar Deneyin..." << endl;    

			cout << "sutun...: ";

			cin >> sutunSayisi;

		}

	}
}
int main()             // ana kod satýrýmýzý açtýk
{
	
	satir_sutun();     // fonksiyonda tanýmladýðýmýz kod satýrýný buraya getiriyoruz

	while (sutunSayisi != satirSayisi * 2)           // sutun sayisi satýr sayýsýnýn iki katý olmalý bu yuzden bir döngü açýyoruz
	{
		if (sutunSayisi != satirSayisi * 2)          // if ile sutun sayýsýnýn satýr sayýsýnýn iki katý olup olmadýðý kontrol ediliyor
		{
			cout << "sutun sayisi satir sayisini iki kati olmalidir...Tekrar Deneyin..." << endl;

			satir_sutun();                           // tekrardan sutun ve satýr girilmesi için satýr_sutun fonksiyonumuzu çaðýrýyoruz

		}
	}

	for (int j = 0; j < satirSayisi; j++)           // for döngüsüyle satýr sayýsý girildiðinde klavyeden girdiðimiz kadar þekil çýkýyor ekrana
	{
		for (int i = 0; i < sutunSayisi; i++)       // for döngüsüyle bu sefer sutun sayýsýný ekrana çýkarýyoruz satir sayýsý içine koyarak satýr sayýsý kadar da sutun sayýsý oluyor
		{

			if (i < sutunSayisi - 1 && i != 0 && j != 0 && j < satirSayisi - 1 && i != satirSayisi - 1 - j && (i - sutunSayisi / 2) != j)
				//(if koþuluyla ekrana hangi yýldýzlarýn çýkýp çýkmamasý gereken koþullar girildi)
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

	for (int j = 0; j < satirSayisi; j++)     // for döngüsüyle satýr sayýsý girildiðinde klavyeden girdiðimiz kadar þekil çýkýyor ekrana
	{
		for (int i = 0; i < sutunSayisi; i++)   // for döngüsüyle bu sefer sutun sayýsýný ekrana çýkarýyoruz satir sayýsý içine koyarak satýr sayýsý kadar da sutun sayýsý oluyor
		{

			if (i < sutunSayisi - 1 && i != 0 && j != 0 && j < satirSayisi - 1 && i != j && i != sutunSayisi - 1 - j)
				//(if koþuluyla ekrana hangi yýldýzlarýn çýkýp çýkmamasý gereken koþullar girildi)
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

