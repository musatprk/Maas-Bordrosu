#include <stdio.h>
float brut; //brut maas
float topbrut;// ek odeme toplam brut maas
float ssk; //SSK primi iþçinin payý
float issizlik;//Ýþsizlik sigortasý iþçinin payý
float matrah;//Gelir vergisinin matrahý
float gelirv;//Gelir vergisi miktarý
float agi;//Asgari geçim indirimi (AGÝ)
float odenecekv;//Ödenecek gelir vergisi miktarý
float damgav;//Damga vergisi miktarý
float top;//Kesinti toplamý
float net;//Net Ücret
float ek;//Ek ödeme mesai vs.
int yil;//bordro yili
int ay;// bordro ayi;
char kurum[40];//Kurum Adý 
char vno[50];//Kurum vergi dairesi ve  nosu
char ksgk[50];//Kurum SGK Ýþyeri Nosu
char tsn[20]; // Kurum Ticaret Sicil Nosu
char tc[11];//tc kimlik numarasý
char adsoy[40];// adi sayadi
char psig[40];//Personel Sigorta No

void main(){  //Kullanýcýda Ýstelinen Bilgiler Alýnýr
	printf("Lutfen Firma Adi Giriniz: \n");
	scanf("%s",&kurum);
	printf("-------------------------------------------------------------------\n");
	printf("Lutfen Vergi Dairesi / Vergi No Giriniz Vergi Dairesi VE NO Girerken Ornekteki Gibi / Atin: \n");
	scanf("%s",&vno);
	printf("-------------------------------------------------------------------\n");
	printf("Lutfen Firma SGK Isyeri No Giriniz: \n");
	scanf("%s",&ksgk);
	printf("-------------------------------------------------------------------\n");
	printf("Lutfen Firma Ticaret Sicil No Giriniz: \n");
	scanf("%s",&tsn);
	printf("-------------------------------------------------------------------\n");
	printf("Lutfen Bordro Yilini Giriniz: \n");
	scanf("%d",&yil);
	printf("-------------------------------------------------------------------\n");
	printf("Lutfen Bordro Ayini Giriniz: \n");
	scanf("%d",&ay);
	printf("-------------------------------------------------------------------\n");
	printf("Lutfen Personel Sigorta No Giriniz: \n");
	scanf("%s",&psig);
	printf("-------------------------------------------------------------------\n");
	printf("Lutfen TC Kimlik No Giriniz: \n");
	scanf("%s",&tc);
	printf("-------------------------------------------------------------------\n");
	printf("Lutfen Ad ve Soyad Giriniz Adiniz Ve Soyadiniz Arasina - Atiniz: \n");
	scanf("%s",&adsoy);
	printf("-------------------------------------------------------------------\n");
	printf("Lutfen Brut Maasi Giriniz: \n");
	scanf("%f",&brut);
	printf("-------------------------------------------------------------------\n");
	printf("Lutfen Ek Odeme Varsa  Giriniz Yoksa 0 Basiniz: \n");
	scanf("%f",&ek);
	printf("-------------------------------------------------------------------\n");


	topbrut=brut+ek; //SSK primi iþçinin payý hesaplanýr
	ssk=(topbrut*14)/100;
	issizlik=(topbrut*1)/100; //Ýþsizlik sigortasý iþçinin payý hesaplanýr
	matrah=topbrut-(ssk+issizlik); //Gelir vergisinin matrahý hesaplanýr
	gelirv=(matrah*15)/100;//Gelir vergisi miktarý hesaplanýr
	int sec;//Asgari geçim indirimi (AGÝ) hesaplanýr
	printf("Lutfen Size Uygun Olani Seciniz \n");
	printf("-------------------------------------------------------------------\n");
	printf("Bekar icin:1 basiniz \n");
	printf("Evli esi calismayan icin:2 basiniz \n");
	printf("Evli esi calismayan 1 cocuklu icin:3 basiniz \n");
	printf("Evli esi calismayan 2 cocuklu icin:4 basiniz\n");
	printf("Evli esi calismayan 3 cocuklu icin:5 basiniz\n");
	printf("Evli esi calismayan 4 cocuklu icin:6 basiniz\n");
	printf("Evli esi calismayan 5 cocuklu ve daha fazlasi icin:7 basiniz\n");
	printf("Evli esi calisan icin:8 basiniz\n");
	printf("Evli esi calisan 1 cocuklu icin:9 basiniz\n");
	printf("Evli esi calisan 2 cocuklu icin:10 basiniz\n");
	printf("Evli esi calisan 3 cocuklu icin:11 basiniz\n");
	printf("Evli esi calisan 4 cocuklu icin:12 basiniz\n");
	printf("Evli esi calisan 5 cocuklu ve daha fazlasi icin:13 basiniz\n");
	scanf("%d",&sec);
	switch (sec) {
     case 1:
       agi=268.31;
      
       break;
       
    	case 2:
       agi=321.98;
      
       break;
       
       case 3:
       agi=362.22;
       
       break;
       
       case 4:
       agi=402.47;
      
       break;
       
       	case 5:
       agi=456.13;
       
       break;
       
       case 6:
       agi=456.13;
       
       break;
       
       case 7:
       agi=456.13;
       
       break;
       
       	case 8:
       agi=268.31;
       
       break;
       
       case 9:
       agi=308.55;
     
       break;
       
       case 10:
       agi=348.80;
   
       break;
       
       	case 11:
       agi=402.47;
     
       break;
       
       case 12:
       agi=429.30;
 
       break;
       
       case 13:
       agi=456.13;
       break;
     default :
       printf("Istenen seceneklerden birini girmediniz! Lutfen Tekrar Deneyiniz \n");
       scanf("%d",&sec);
  }

	odenecekv=gelirv-agi;//Ödenecek gelir vergisi miktarý hesaplanýr
	damgav=topbrut*0.00759;//Damga vergisi miktarý hesaplanýr
	top=ssk+issizlik+odenecekv+damgav;//Kesinti toplamý hesaplanýr
	net=topbrut-top;//Net Ücret hesaplanýr
	printf("-------------------------------------------------------------------\n");
	printf("-------------------------------------------------------------------\n");
 // Bilgiler Ekrana basýlýr
	printf("Maas Bordrosu \n");
	printf("-------------------------------------------------------------------\n");
	printf("Bordro Yili: %d \n",yil);
	printf("-------------------------------------------------------------------\n");
	printf("Bordro Ayi: %d \n",ay);
	printf("-------------------------------------------------------------------\n");
	printf("Firma Unvani: %s \n",kurum);
	printf("-------------------------------------------------------------------\n");
	printf("Vergi Dairesi / Vergi No: %s \n",vno);
	printf("-------------------------------------------------------------------\n");
	printf("Firma SGK Isyeri No: %s \n",ksgk);
	printf("-------------------------------------------------------------------\n");
	printf("Firma Ticaret Sicil No: %s \n",tsn);
	printf("-------------------------------------------------------------------\n");
	printf("Personel Sigorta  No: %s \n",psig);
	printf("-------------------------------------------------------------------\n");
	printf("Adi ve Soyadi: %s \n",adsoy);
	printf("-------------------------------------------------------------------\n");
	printf("TC Kimlik No: %s \n",tc);
	printf("-------------------------------------------------------------------\n");
	printf("Brut Maas: %f \n",brut);
	printf("-------------------------------------------------------------------\n");
	printf("Ek Odeme: %f \n",ek);
	printf("-------------------------------------------------------------------\n");
	printf("Toplam Brut Maas: %f \n",topbrut);
	printf("-------------------------------------------------------------------\n");
	printf("SGK primi iscinin payi: %f \n",ssk);
	printf("-------------------------------------------------------------------\n");
	printf("Issizlik sigortasi iscinin payi: %f \n",issizlik);
	printf("-------------------------------------------------------------------\n");
	printf("Gelir vergisinin matrahi: %f \n",matrah);
	printf("-------------------------------------------------------------------\n");
	printf("Gelir vergisi miktari: %f \n",gelirv);
	printf("-------------------------------------------------------------------\n");
	printf("Asgari gecim indirimi: %f \n",agi);
	printf("-------------------------------------------------------------------\n");
	printf("Damga vergisi miktari: %f \n",damgav);
	printf("-------------------------------------------------------------------\n");
	printf("Kesinti toplami: %f \n",top);
	printf("-------------------------------------------------------------------\n");
	printf("Net Ucret: %f \n",net);
	printf("-------------------------------------------------------------------\n");
}


