#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int secimfonk(){
	int secim;
	printf("Lutfen bir secim yapin:\n1)Giris yap\n2)Kayit ol\n");
	scanf("%d",&secim);
	return secim;
}
int girisyap(char kullaniciadi[200],char sifre[200]){
	char kullaniciadiVeri[200];
	char sifreVeri[200];
	bool kontrol=false;
	while(kontrol==false){
		printf("\nKullanici adi:");
	    scanf("%s",&kullaniciadiVeri);
	    printf("Sifre:");
	    scanf("%s",&sifreVeri);
	    if(strcmp(kullaniciadi,kullaniciadiVeri)==0 && strcmp(sifre,sifreVeri)==0){
		    printf("Sisteme hosgeldiniz..\n");
		    kontrol=true;
	    }
	    else{
		    printf("Hatali giris yaptiniz!\n");
	    }
	}
}
int kayitol(){
	char kullaniciadi[200];
	char sifre[200];
	printf("Kullanici adi:");
	scanf("%s",&kullaniciadi);
	printf("Sifre:");
	scanf("%s",&sifre);
	printf("\nBasarili bir sekilde kayit oldunuz..\nGiris ekranina yonlendiriliyorsunuz..");
	girisyap(kullaniciadi,sifre);
}
int bilgiyarismasi(){
	char cevap[2];
	int puan=0;
	int can=3;
	printf("Yarisma basladi..");
	while(can!=0){
		if(puan==0){
		printf("Soru 1)Asagidakilerden hangisi Turkiye'nin baskentidir?\na)Istanbul\nb)Ankara\nc)Adana\nd)Izmir\n");
	scanf("%s",&cevap);
	if(strcmp(cevap,"b")==0){
		printf("Dogru cevap!\n");
		puan+=10;
		printf("Puan:%d\n",puan);
	}
	else{
		printf("Yanlis cevap! Dogru cevap b sikkidir.\n");
		printf("Puan:%d\n",puan);
		can--;
		printf("Can sayisi:%d\n",can);
	}
	}
	if(puan==10){
		printf("Soru 2)Asagidakilerden hangisi Fransa'nin baskentidir?\na)Istanbul\nb)Ankara\nc)Paris\nd)Izmir\n");
	scanf("%s",&cevap);
	if(strcmp(cevap,"c")==0){
		printf("Dogru cevap!\n");
		puan+=10;
		printf("Puan:%d\n",puan);
	}
	else{
		printf("Yanlis cevap! Dogru cevap c sikkidir.\n");
		printf("Puan:%d\n",puan);
		can--;
		printf("Can sayisi:%d\n",can);
	}
	}
	if(puan==10){
		printf("Soru 3)Asagidakilerden hangisi Almanya'nin baskentidir?\na)Berlin\nb)Ankara\nc)Paris\nd)Izmir\n");
	scanf("%s",&cevap);
	if(strcmp(cevap,"a")==0){
		printf("Dogru cevap!\n");
		puan+=10;
		printf("Puan:%d\n",puan);
		can=0;
	}
	else{
		printf("Yanlis cevap! Dogru cevap a sikkidir.\n");
		printf("Puan:%d\n",puan);
		can--;
		printf("Can sayisi:%d\n",can);
	}
	}
	}
}
int main(int argc, char *argv[]) {
	char kullaniciadi[200]="Eylem";
	char sifre[200]="1234567";
	int secim=secimfonk();
	if(secim==1){
		girisyap(kullaniciadi,sifre);
	}
	else if(secim==2){
		kayitol(kullaniciadi,sifre);
	}
	bilgiyarismasi();
	return 0;
}
