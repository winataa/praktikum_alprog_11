#include<stdio.h>
#include <stdlib.h>
#include <string.h>
int konversi(char s[]){
    int i, p, tanda, ns;
    int hasil=0;
    if (s[0] == '-'){
        tanda = -1;
    }
    if(tanda == -1){
        p = 1;
    }else{
        p = 0;
    }

    for (i=p; s[i] != '\0'; i++){
        ns = s[i] - 48;
        hasil = hasil * 10 + ns;
    }
    if (tanda == -1){
        hasil = hasil - (hasil*2);
    }
    return hasil;
}
int validsasi(char s[],int pjg){
    int i=0;
    if(s[0] == '-'){
        i=1;
    }
    for (;i<pjg;i++){
        if (s[i]!='0'&&s[i]!='1'&&s[i]!='2'&&s[i]!='3'&&s[i]!='4'&&s[i]!='5'&&s[i]!='6'&&s[i]!='7'&&s[i]!='8'&&s[i]!='9'){
            printf("!Masukkan Input berupa Bilangan Bulat!\n");
            printf(" Mohon masukkan inputan pengganti : ");
            return 0;

        }
    }
    return 1;
}

int cek(){
    char sint[50];
    int panjang, n=0, cek=0;

    while(n<=0){
        while (cek!=1){
            scanf("%s", sint);
            panjang = strlen(sint);
            cek = validsasi(sint,panjang);
        }
        n = konversi(sint);
        while (n<=0){
            return n;
        }
    }
    return n;
}
void menuu(){
	printf("---------------------------------------------------\n");
	printf("-\t\tPROGRAM KALKULATOR \t\t  -\n");
	printf("---------------------------------------------------\n");
	printf("-\t\t1. Pertambahan \t\t\t  -\n");
	printf("-\t\t2. Pengurangan \t\t\t  -\n");
	printf("-\t\t3. Perkalian \t\t\t  -\n");
	printf("-\t\t4. Pembagian \t\t\t  -\n");
	printf("-\t\t5. Modulus \t\t\t  -\n");
	printf("-\t\t6. Keluar\t\t\t  -\n");
	printf("---------------------------------------------------\n");
	printf("---------------------------------------------------\n");
}
void tambah(){
	int bilpertama, bilkedua;
	int hasil;	
		printf("_______________________________________\n");
		printf("_______________________________________\n");
		printf(" SELAMAT DATANG DI MENU PERTAMBAHAN\n");
		printf("_______________________________________\n");
		printf("_______________________________________\n");
		printf("Input bilangan pertama : ");
		bilpertama= cek();
		printf("Input bilangan kedua : ");
		bilkedua= cek();
		hasil= bilpertama + bilkedua;
		printf("_______________________________________\n");
		printf("_______________________________________\n");
		printf("Hasil dari kalkulasi adalah %d\n", hasil);
		printf("_______________________________________\n");
		printf("_______________________________________\n");
}
void kurang(){
	int bilpertama, bilkedua;
	int hasil;
	printf("_______________________________________\n");
	printf("_______________________________________\n");
	printf(" SELAMAT DATANG DI MENU PENGURANGAN\n");
	printf("Input bilangan pertama : ");
	bilpertama= cek();
	printf("Input bilangan kedua : ");
	bilkedua= cek();
	hasil= bilpertama - bilkedua;
	printf("_______________________________________\n");
	printf("_______________________________________\n");
	printf(" Hasil dari kalkulasi adalah %d\n", hasil);
	printf("_______________________________________\n");
	printf("_______________________________________\n");	
}
void kali(){
	float bilpertama, bilkedua;
	float hasil;
	printf("_______________________________________\n");
	printf("_______________________________________\n");
	printf("SELAMAT DATANG DI MENU PERKALIAN\n");
	printf("Input bilangan pertama : ");
	bilpertama= cek();
	printf("Input bilangan kedua : ");
	bilkedua= cek();
	hasil= bilpertama * bilkedua;
	printf("_______________________________________\n");
	printf("_______________________________________\n");
	printf(" Hasil dari kalkulasi adalah %.2f\n", hasil);
	printf("_______________________________________\n");
	printf("_______________________________________\n");	
}
void bagi(){
	float bilpertama, bilkedua;
	float hasil;
	printf("_______________________________________\n");
	printf("_______________________________________\n");
	printf("SELAMAT DATANG DI MENU PEMBAGIAN\n");
	printf("_______________________________________\n");
	printf("_______________________________________\n");
	printf("Input bilangan pertama : ");
	bilpertama= cek();
	printf("Input bilangan kedua : ");
	bilkedua= cek();
	hasil= bilpertama/bilkedua;
	printf("_______________________________________\n");
	printf("_______________________________________\n");
	printf(" Hasil dari kalkulasi adalah %.2f\n", hasil);
	printf("_______________________________________\n");
	printf("_______________________________________\n");	
}

void modulus(){
	int bilpertama, bilkedua;
	float hasil;
	printf("_______________________________________\n");
	printf("_______________________________________\n");
	printf("SELAMAT DATANG DI MENU MODULUS\n");
	printf("Input bilangan pertama : ");
	bilpertama= cek();
	printf("Input bilangan kedua : ");
	bilkedua= cek();
	hasil= bilpertama % bilkedua;
	printf("_______________________________________\n");
	printf("_______________________________________\n");
	printf(" Hasil dari kalkulasi adalah %.2f\n", hasil);
	printf("_______________________________________\n");
	printf("_______________________________________\n");
}
void salah(){
	printf("=======================================\n");
	printf("!!!!!!!!!!Pilihan anda salah!!!!!!!!!!!\n");
	printf("=======================================\n");	
}
void kembali(){
	printf("---------------------------------------\n");
	printf("       Apakah anda ingin mengulang \n");
	printf("---------------------------------------\n");
	printf("1. Ya      2. Tidak\n");
}
int main(){
	int ulang=1;
	int menu;
	while(ulang==1){	
		menuu();
		printf(" Silahkan pilih menu, tulis angka saja \n");
		printf(" Pilihan menu : ");
		menu= cek();
		system("cls");
		if (menu==1){
			tambah();
		}else if(menu==2){
			kurang();
		}else if (menu==3){
			kali();
		}else if (menu==4){
			bagi();
		}else if (menu==5){
			modulus();
		}else if (menu==6){
			return 0;
		}else{
			salah();
		}
		if(menu!=6){
			kembali();
			printf;("Pilihan anda : ");
			ulang= cek();}
			system("cls");
	}
		
	return 0;
	
}