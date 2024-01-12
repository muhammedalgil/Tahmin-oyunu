#include <stdio.h>
#include <stdlib.h>

int main() {
	
	printf("**** Sayi Tahmin Etme Oyunu ****"); // printf kullanarak başlık koydum.
	printf("\n\n"); // printf kullanarak araya bir satır boşluk bıraktım.
	
	int randomsayi,tahminsayisi,tahminadeti; // integerde kullanacağım değerleri tanımladım.
	srand(time(NULL)); // bilgisayar sürekli farklı sayılar tutsun diye srand içine time NULL girdim.
	
	randomsayi=(rand()%100)+1; // bilgisayarın tuttuğu sayıyı 1 ile 100 arasında olması için rand mod 100 girdim 1'den başlayıp 100'e kadar gitmesi için de 1 arttırdım. 
	
	printf("1 ile 100 arasinda rastgele bir sayi tuttum.\n"); // printf kullanarak kullanıcıya bilgi verdim.
	printf("Tahmin et !\n\n"); // kullanıcıdan sayıyı tahmin etmesini istedim.
	
	while(tahminsayisi!=-1) // tahmin sayısını döngüye soktum.
	{
		printf("Tahmin sayisini girin: "); // tahmin edilen sayıyı sordum.
		scanf("%d",&tahminsayisi); // scanf kullanarak kullanıcıdan tahmin sayısını aldım.
		if(tahminsayisi==-1) // eğer tahmin sayısı -1 değilse
		break; // döngüyü kırmasını istedim.
		if(tahminsayisi<1 || tahminsayisi>100) // tahminsayısını 1'den küçük ya da 100'den büyük  girmesine karşın kullanıcıyı uyarmak için if fonksiyonu kullandım.
		{
			printf("1 ile 100 arasi demistim! :(\n"); // printf kullanarak kullanıcıyı uyardım.
			continue; // continue kullanarak döngünün baştan devam etmesini sağladım.
		}
		tahminadeti++; // kaçıncı tahminde bildiğini bulmak için her yanlış tahmininde tahmin adetini birer birer arttırdım.
		if(tahminsayisi==randomsayi) // eğer tahmin sayısı random sayıya eşit olursa 
		{
			printf("Tebrikler.%d.seferde bildin.:)\n",tahminadeti); // kullanıcının sayıyı doğru tahmin ettiği hakkında bilgi verdim.
			break; // kullanıcı sayıyı bulduğu için döngüyü kırdım.
		}
		else // eğer doğru tahmin edememişse
		{
			if(tahminsayisi>randomsayi) // tahmin ettiği sayı random sayıdan büyükse
			{
				printf("Bilemedin.daha kucuk bir sayi girmeyi dene\n"); // printf kullanarak daha küçük bir sayı girmesini söyledim.
			}
			else  // tahmin ettiği sayı random sayıdan küçükse 
			{
				printf("Bilemedin.daha buyuk bir sayi girmeyi dene\n"); // printf kullanarak daha büyük bir sayı  girmesini söyledim.
			}
		}
	}
	
	
	return 0;
}
