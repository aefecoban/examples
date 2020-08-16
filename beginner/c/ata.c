#include <stdio.h>
#include <stdlib.h>

int main() {

	int islem,bakiye=14500,tutar,onay,hesapno,secim;

	do{
		if(islem==1)
		{
			if(onay==1)
			{
				bakiye-=tutar;
			}
		}
		if(islem==2)
		{
			if(onay==1)
			{
				bakiye+=tutar;
			}
		}
		if(islem==3)
		{
			if(onay==1)
			{
				bakiye-=tutar;
			}
		}

		printf("-----------------------------\nKAVUNBANK ATM'ye Hosgeldiniz...\n-----------------------------\n");
		printf("Islemler:\n\n");
		printf("1- Para Cekme Islemleri\n2- Para Yatirma Islemleri\n3- Havale Islemleri\n4- Bakiye Sorgulama\n5- Kart Iade\n");
		printf("\nLutfen Isleminizi Seciniz: ");
		scanf("%d",&islem);
		printf("\n");

		switch(islem)
		{
			case 1:
				do{
					printf("Bakiyeniz: %dTL\n",bakiye);
					printf("Cekmek Istediginiz Tutari Giriniz: ");
					scanf("%d",&tutar);
					printf("\n");
					if(tutar>bakiye)
					{
						printf("Bakiyeniz yetersizdir. Lutfen gecerli bir tutar giriniz..\n\n");
					}
				}
				while(tutar>bakiye);
					if(bakiye>=tutar)
					{
						printf("Cekmek Istediginiz Tutar: %dTL\nKalan Bakiye: %dTL\n",tutar,bakiye-tutar);
						printf("Onayliyor musunuz? (Onaylamak Icin:1 / Reddetmek Icin:0) : ");
						scanf("%d",&onay);
						printf("\n");
						switch(onay)
						{
							case 1:
								printf("Isleminiz Gerceklesmistir.\nKalan Bakiye: %dTL\n\n",bakiye-tutar);
								break;
							case 0:
							 	printf("Isleminiz Reddedilmistir.\n\n");
								break;
						}
					}
				break;
			case 2:
				printf("Bakiyeniz: %dTL\n",bakiye);
				printf("Yatirmak Istediginiz Tutari Giriniz: ");
				scanf("%d",&tutar);
				printf("\n\n");
				printf("Yatirmak Istediginiz Tutar: %dTL\nYeni Bakiye: %dTL\n",tutar,bakiye+tutar);
					printf("Onayliyor musunuz? (Onaylamak Icin:1 / Reddetmek Icin:0) : ");
					scanf("%d",&onay);
					printf("\n");
					switch(onay)
					{
						case 1:
							printf("Isleminiz Gerceklesmistir.\nYeni Bakiye: %dTL\n\n",bakiye+tutar);
							break;
						case 0:
						 	printf("Isleminiz Reddedilmistir.\n\n");
							break;
					}
				break;
			case 3:
				printf("Havale Yapacaginiz Hesap Numarasini Giriniz: ");
				scanf("%d",&hesapno);
				do
				{
					printf("\nBakiyeniz: %dTL\n",bakiye);
					printf("Havale Edeceginiz Tutari Giriniz: ");
					scanf("%d",&tutar);
					printf("\n");

					if(tutar>bakiye)
					{
						printf("Bakiyeniz yetersizdir. Lutfen gecerli bir tutar giriniz..\n");
					}
				}
				while(tutar>bakiye);
					if(bakiye>=tutar)
					{
						printf("Havale Tutari: %dTL\nKalan Bakiye: %dTL\n",tutar,bakiye-tutar);
						printf("Onayliyor musunuz? (Onaylamak Icin:1 / Reddetmek Icin:0) : ");
						scanf("%d",&onay);
						printf("\n");
						switch(onay)
						{
							case 1:
								printf("Isleminiz Gerceklesmistir.\nKalan Bakiye: %dTL\n\n",bakiye-tutar);
								break;
							case 0:
						 		printf("Isleminiz Reddedilmistir.\n\n");
								break;
						}
					}
				break;
			case 4:
				printf("Bakiyeniz: %dTL\n\n",bakiye);
				break;
			case 5:
				printf("Kartiniz Iade Ediliyor.. KAVUNBANK'i Tercih Ettiginiz Icin Tesekkurler :)\n\n");
				printf("Cikis icin herhangi bir tusa basiniz.");
				return 0;
				break;
			default:
				printf("Hatali Giris Yaptiniz. Lutfen Gecerli Bir Islem Giriniz.\n\n");
				break;
		}
		if(islem>0 && islem<=5)
		{
		printf("Ana Sayfa Donmek Icin 1'i, Kart Iadesi Icin 0'i tuslayiniz: ");
		scanf("%d",&secim);
		printf("\n");
		switch(secim)
			{
				case 0:
					printf("Kartiniz Iade Ediliyor.. KAVUNBANK'i Tercih Ettiginiz Icin Tesekkurler :)\n\n");
					printf("Cikis icin herhangi bir tusa basiniz.");
					return 0;
					break;
				case 1:
					;
			}
		}
		else ;
	}
	while(1);
	return 0;
}
