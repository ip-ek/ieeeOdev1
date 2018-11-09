// Program: Çalýþtýrýldýðýnda toplama, çýkarma, çarpma, bölme, mod alma iþlemlerinden birini seçip yapabilen program(for YTU ÝEEE CS 1st Homework

#include<stdio.h>

float sonuc, a, b;

void toplama();
void cikarma();
void carpma();
void bolme();
void modAlma();

int main(){
	char islem='0';
	
	do{
		system("cls");
		
		printf("Program hakkinda:\nLutfen ondalikli sayi girerken \".\"(nokta) kullaniniz.\n");
	
		printf("\n1)Toplama\n2)Cikarma\n3)Carpma\n4)Bolme\n5)Mod Alma\n");
		printf("\nLutfen yapmak istediginiz islemin numarasini giriniz: ");
		do{
			if('1'>islem || islem>'5') printf("\nSadece belirtilen sayilari giriniz. ");
			scanf(" %c", &islem);
		}while('1'>islem || islem>'5');
		
		
		if(islem=='1') toplama();
		else{
			if(islem=='2') cikarma();
			else{
				if(islem=='3') carpma();
				else{
					if(islem=='4') bolme();
					else modAlma();
				}
			}
		}
	
		printf("\n\nCikmak icin <0>a, yeni bir islem icin herhangi bir tusa basiniz. ");
		scanf(" %c", &islem);

	}while(islem!='0');
	
	printf("\nProgram sonu.");
	
	return 0;
}

void toplama(){
	system("cls");
	printf("Toplama islemi\n\n");
	printf("Lutfen sayilari giriniz: \n\n");
	scanf("%f", &a);
	printf("+\n");;
	scanf("%f", &b);
	
	printf("= %2.2f", a+b);
}

void cikarma(){
	system("cls");
	printf("Cikarma islemi\n\n");
	printf("Lutfen sayilari giriniz: \n\n");
	scanf("%f", &a);
	printf("-\n");
	scanf("%f", &b);
	
	printf("= %2.2f", a-b);
}

void carpma(){
	system("cls");
	printf("Carpma islemi\n\n");
	printf("Lutfen sayilari giriniz: \n\n");
	scanf("%f", &a);
	printf("*\n");
	scanf("%f", &b);
	
	printf("= %2.2f", a*b);
}

void bolme(){
	system("cls");
	printf("Bolme islemi\n\n");
	printf("Lutfen sayilari giriniz: \n\n");
	scanf("%f", &a);
	printf("/\n");
	scanf("%f", &b);
	
	printf("= %2.2f", a/b);
}

void modAlma(){
	system("cls");
	printf("Mod alma islemi\n\n");
	printf("Lutfen sayilari giriniz: \n\n");
	scanf("%f", &a);
	printf("mod\n");
	scanf("%f", &b);
	
	printf("= %d", (int)a%(int)b);
}
