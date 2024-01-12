#include <stdio.h>
#include <stdlib.h>

int main() {
	
	printf("**** Sayi Tahmin Etme Oyunu ****"); // printf kullanarak ba�l�k koydum.
	printf("\n\n"); // printf kullanarak araya bir sat�r bo�luk b�rakt�m.
	
	int randomsayi,tahminsayisi,tahminadeti; // integerde kullanaca��m de�erleri tan�mlad�m.
	srand(time(NULL)); // bilgisayar s�rekli farkl� say�lar tutsun diye srand i�ine time NULL girdim.
	
	randomsayi=(rand()%100)+1; // bilgisayar�n tuttu�u say�y� 1 ile 100 aras�nda olmas� i�in rand mod 100 girdim 1'den ba�lay�p 100'e kadar gitmesi i�in de 1 artt�rd�m. 
	
	printf("1 ile 100 arasinda rastgele bir sayi tuttum.\n"); // printf kullanarak kullan�c�ya bilgi verdim.
	printf("Tahmin et !\n\n"); // kullan�c�dan say�y� tahmin etmesini istedim.
	
	while(tahminsayisi!=-1) // tahmin say�s�n� d�ng�ye soktum.
	{
		printf("Tahmin sayisini girin: "); // tahmin edilen say�y� sordum.
		scanf("%d",&tahminsayisi); // scanf kullanarak kullan�c�dan tahmin say�s�n� ald�m.
		if(tahminsayisi==-1) // e�er tahmin say�s� -1 de�ilse
		break; // d�ng�y� k�rmas�n� istedim.
		if(tahminsayisi<1 || tahminsayisi>100) // tahminsay�s�n� 1'den k���k ya da 100'den b�y�k  girmesine kar��n kullan�c�y� uyarmak i�in if fonksiyonu kulland�m.
		{
			printf("1 ile 100 arasi demistim! :(\n"); // printf kullanarak kullan�c�y� uyard�m.
			continue; // continue kullanarak d�ng�n�n ba�tan devam etmesini sa�lad�m.
		}
		tahminadeti++; // ka��nc� tahminde bildi�ini bulmak i�in her yanl�� tahmininde tahmin adetini birer birer artt�rd�m.
		if(tahminsayisi==randomsayi) // e�er tahmin say�s� random say�ya e�it olursa 
		{
			printf("Tebrikler.%d.seferde bildin.:)\n",tahminadeti); // kullan�c�n�n say�y� do�ru tahmin etti�i hakk�nda bilgi verdim.
			break; // kullan�c� say�y� buldu�u i�in d�ng�y� k�rd�m.
		}
		else // e�er do�ru tahmin edememi�se
		{
			if(tahminsayisi>randomsayi) // tahmin etti�i say� random say�dan b�y�kse
			{
				printf("Bilemedin.daha kucuk bir sayi girmeyi dene\n"); // printf kullanarak daha k���k bir say� girmesini s�yledim.
			}
			else  // tahmin etti�i say� random say�dan k���kse 
			{
				printf("Bilemedin.daha buyuk bir sayi girmeyi dene\n"); // printf kullanarak daha b�y�k bir say�  girmesini s�yledim.
			}
		}
	}
	
	
	return 0;
}
