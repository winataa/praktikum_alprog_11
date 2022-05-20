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
            printf(" Masukkan Input berupa Bilangan Bulat\n");
            printf(" Mohon masukkan inputan pengganti : ");
            return 0;

        }
    }
    return 1;
}
void judul(int menu){
	char nama [20];
	if (menu==1){
		strcpy(nama, "Tabung");
	}else if(menu==2){
		strcpy(nama, "Bola");
	}else if (menu==3){
		strcpy(nama, "Limas Segiempat");
	}else if (menu==4){
		strcpy(nama, "Prisma Segitiga");
	}else if (menu==5){
		strcpy(nama, "Kerucut");
	}
	printf("_______________________________________\n");
	printf("_______________________________________\n");
	printf("SELAMAT DATANG DI MENU VOLUME\n LUAS PERMUKAAN %s\n", nama);
	printf("_______________________________________\n");
	printf("_______________________________________\n");
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

float voltabung(int jari, int tinggi){
	float tabung = 3.14 * jari*jari *tinggi;
	return tabung;
}
float volbola(int jari){
	float bola = 4/3 * (jari*jari*jari)* 3.14;
	return bola;
}
float volumelimas(int sisialas, int tinggi){
	float limas = 0.33*sisialas*sisialas*tinggi;
	return limas;
}
float volprismasegitiga(int alassegitiga, int tinggisegitiga, int tinggi){
	float prismasegitiga = (0.5* alassegitiga* tinggisegitiga)*tinggi;
	return prismasegitiga;
}
float volkerucut(int jari, int tinggi){
	float kerucut = (3.14 * jari*jari *tinggi)*1/3;
	return kerucut;}
float lptabung(int jari, int tinggi){
	float lp = 2*3.14*jari*tinggi+(2*jari*jari*3.14);
    return lp;
}
float lpbola(int jari){
	float lp = 4*3.14*jari*jari;
    return lp;
}
float lplimas(int sisialas, int luassisitegak){
	float lp= (sisialas*sisialas)+luassisitegak;
	return lp;
}

float lpprisma(int tinggisegitiga, int alassegitiga, int segitiga1, int segitiga2, int tinggi){
	float lp= 2*(tinggisegitiga*alassegitiga)+((alassegitiga+segitiga1+segitiga2)*tinggi);
	return lp;
}
float lpkerucut(int jari, int pelukis){
	float lp= 3.14*jari*(jari+pelukis);
	return lp;
}
void menuu(){
	printf("---------------------------------------------------\n");
	printf("---------------------------------------------------\n");	
	printf("-\t\t PROGRAM PENGHITUNGAN VOLUME\t -\n");
	printf("---------------------------------------------------\n");
	printf("---------------------------------------------------\n");		
	printf("-\t\t 1. TABUNG\t\t\t - \n");
	printf("-\t\t 2. BOLA\t\t\t - \n");
	printf("-\t\t 3. LIMAS SEGIEMPAT\t\t -  \n");
	printf("-\t\t 4. PRISMA SEGITIGA\t\t -  \n");
	printf("-\t\t 5. KERUCUT\t\t\t -  \n");
	printf("-\t\t 6. Keluar\t\t\t - \n");
	printf("---------------------------------------------------\n");
	printf("---------------------------------------------------\n");	
}

void keluar(){
	printf("_______________________________________\n");
	printf("_______________________________________\n");
	printf("\t\t\t TERIMAKASIH\n");
	printf("_______________________________________\n");
	printf("_______________________________________\n");
}
void minus(){
		printf("=======================================\n");
		printf("Tidak bisa dihitiung\nInput Harus lebih dari 0\n");
		printf("Silahkan mengulang memasukkan input\n");
		printf("=======================================\n");	
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
	printf("1. Ya      2. Tidak\n");}
	
int hasil(int menu, float lp, float volume){
	char nama[20];
	if (menu==1){
			strcpy(nama, "Tabung");
		}else if(menu==2){
			strcpy(nama, "Bola");
		}else if (menu==3){
			strcpy(nama, "Limas Segiempat");
		}else if (menu==4){
			strcpy(nama, "Prisma Segitiga");
		}else if (menu==5){
			strcpy(nama, "Kerucut");}
	printf("_______________________________________\n");
	printf("_______________________________________\n");
	printf("Volume dari %s adalah %.2f\n", nama, volume);
	printf("Luas permukaan dari %s adalah %.2f\n", nama, lp);
	printf("_______________________________________\n");
	printf("_______________________________________\n");
	
}

int main(){
	
	int tinggi, bilpertama, bilkedua, jari, sisialas, alassegitiga, tinggisegitiga, segitiga1, segitiga2, luassisitegak, pelukis; 
	float volume, lp;
	int menu;
	char nama[20];
	int ulang=1;
	
	while(ulang==1){
		menuu();
		printf(" silahkan pilih menu, tulis angka saja \n");
		printf(" Pilihan menu : ");
		menu=cek();
		system("cls");
		tinggi=-1, bilpertama=-1, bilkedua=-1, jari=-1, sisialas=-1, alassegitiga=-1, tinggisegitiga=-1, segitiga1=-1, segitiga2=-1, luassisitegak=-1, pelukis=-1;
		if (menu==1){
			judul (menu);
			while(jari <= 0 || tinggi <=0){
				printf("Input jari-jari : ");
				jari= cek();
				printf("Input tinggi : ");
				tinggi= cek();
				if(jari>0&&tinggi>0){
					volume= voltabung(jari, tinggi);
					lp= lptabung(jari, tinggi);
				}else{
				minus();}
					}
		}else if(menu==2){
			judul (menu);
			while(jari<=0){
				printf("Input Jari-jari: ");
				jari= cek();
				if(jari>0){
					volume= volbola(jari);
					lp= lpbola(jari);
				}else{
					minus();}}
		}else if (menu==3){
			judul (menu);
			while (sisialas<=0 || luassisitegak<0 || tinggi<=0){
				printf("Input sisi dari alas: ");
				sisialas= cek();
				printf("Input tinggi  : ");
				tinggi= cek();
				printf("Input luas sisi tegak  : ");
				luassisitegak= cek();
				if(sisialas>0&&luassisitegak>0&&tinggi>0){
					volume= volumelimas(sisialas, tinggi);
					lp= lplimas( sisialas, luassisitegak);
				}else{
					minus();}}			
		}else if (menu==4){
			judul (menu);
			while (alassegitiga<=0 || tinggisegitiga <=0 || segitiga1<=0 || segitiga1<=0 || tinggi<=0){
				printf("Input alas segitiga : ");
				alassegitiga= cek();
				printf("Input tinggi alas : ");
				tinggisegitiga= cek();
				printf("Input tinggi sisi 1 segitiga  : ");
				segitiga1= cek();
				printf("Input tinggi sisi 2 segitiga  : ");
				segitiga2= cek();
				printf("Input tinggi prisma : ");
				tinggi= cek();
				if(alassegitiga>0 && tinggisegitiga>0 && segitiga1>0 && segitiga2>0 && tinggi>0){
				volume= volprismasegitiga(alassegitiga, tinggisegitiga, tinggi);
					lp= lpprisma(tinggisegitiga, alassegitiga, segitiga1, segitiga2, tinggi);
				}else{
						minus();	}}
		}else if (menu==5){
			judul (menu);
			while(jari<=0 || tinggi<=0 || pelukis<=0){
			printf("Input jari-jari : ");
			jari=cek();
			printf("Input tinggi : ");
			tinggi= cek();
			printf("Input garis pelukis : ");
			pelukis= cek();
			if(jari>0 && tinggi>0 && pelukis>0){
				volume= volkerucut(jari, tinggi);
				lp= lpkerucut(jari, pelukis);
			}else{
					minus();
			}}
		}else if (menu==6){
			keluar();
			return 0;
		}else{
			salah();
		}
		//bagian hasil
		if(lp >=0 && volume >=0){
			hasil(menu, lp, volume);
			lp=0;
			volume=0;
		}

		if(menu!=6){
			kembali();
			printf("Pilihan anda : ");
			ulang= cek();}
			system("cls");
		}
	
		return 0;	
			}
			
	
		
	
	
	
	
	
	
