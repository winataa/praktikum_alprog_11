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
	printf("-\tPROGRAM PENGHITUNGAN KELILING DAN LUAS    -\n");
	printf("---------------------------------------------------\n");
	printf("-\t\t 1. SEGITIGA SEMBARANG \t\t  - \n");
	printf("-\t\t 2. BELAH KETUPAT \t\t  - \n");
	printf("-\t\t 3. JAJAR GENJANG \t\t  - \n");
	printf("-\t\t 4. TRAPESIUM \t\t\t  - \n");
	printf("-\t\t 5. LINGAKARAN \t\t\t  - \n");
	printf("-\t\t 6. Keluar\t\t\t  - \n");
	printf("---------------------------------------------------\n");
	printf("---------------------------------------------------\n");
}
void segitigasembarang(){
	int sisi1=-1, sisi2=-1, alas=-1, tinggi=-1, keliling, luas;
	printf("_______________________________________\n");
	printf("_______________________________________\n");
	printf("    SELAMAT DATANG DI MENU KELILING \n");
	printf("      DAN LUAS SEGITIGA SEMBARANG\n");
	printf("_______________________________________\n");
	printf("_______________________________________\n");	
	while(sisi1<=0 || sisi2<=0 || alas<=0 || tinggi <=0){
		printf("Input sisi 1 : ");
		sisi1 =cek();
		printf("Input sisi 2 : ");
		sisi2 =cek();
		printf("Input alas: ");
		alas =cek();
		printf("Input tinggi : ");
		tinggi =cek();
		system("cls");
		if(sisi1>0&&sisi2>0&&alas>0 && tinggi>0){
			keliling= sisi1+sisi2+alas;
			luas= 0.5*alas*tinggi;		
			printf("---------------------------------------\n");
			printf("\t\t HASIL \t\t\n");
			printf("---------------------------------------\n");
			printf("Keliling dari segitiga sembarang : %d\n", keliling);
			printf("Luas dari segitiga sembarang : %d\n", luas);
			printf("---------------------------------------\n");	
		}else{
			printf("----------------------------------------------\n");
			printf("Tidak bisa dihitiung\nInput Harus lebih dari 0\n");
			printf("----------------------------------------------\n");
			printf(" Silahkan mengulang memasukkan input\n");
			printf("----------------------------------------------\n");
		}}
	}
	

void belahketupat(){
	int sisi=-1;
	int d1=-1,d2=-1;
	int keliling;
	int luas;
	printf("_______________________________________\n");
	printf("_______________________________________\n");
	printf("    SELAMAT DATANG DI MENU KELILING \n      DAN LUAS BELAH KETUPAT\n");
	printf("_______________________________________\n");
	printf("_______________________________________\n");
	while(sisi<=0 || d1<=0 || d2<=0){
		printf("Input sisi miring : ");
		sisi=cek();
		printf("Input diagonal 1 : ");
		d1=cek();
		printf("Input diagonal 2 : ");
		d2=cek();
		if(sisi>0&&d1>0&&d2>0){
			keliling = 4*sisi;
			luas= d1*d2*0.5;
			system("cls");
			printf("---------------------------------------\n");
			printf("\t\t HASIL \t\t\n");
			printf("---------------------------------------\n");
			printf("Keliling dari belah ketupat : %d\n", keliling);       
			printf("Luas dari belah ketupat : %d\n", luas);
			printf("---------------------------------------\n");}
		else{
			printf("----------------------------------------------\n");
			printf("Tidak bisa dihitiung\nInput Harus lebih dari 0\n");
			printf("----------------------------------------------\n");
			printf(" Silahkan mengulang memasukkan input\n");
			printf("----------------------------------------------\n");}
		}
	}
		     
void jajargenjang(){
	int tinggi=-1;
	int sisimiring=-1;
	int alas=-1;
	int keliling;
	int luas;
	printf("_______________________________________\n");
	printf("_______________________________________\n");
	printf("    SELAMAT DATANG DI MENU KELILING\n      DAN LUAS JAJAR GENJANG\n");
	printf("_______________________________________\n");
	printf("_______________________________________\n");
	while(sisimiring<=0 || tinggi<=0 || alas<=0){
		printf("Input alas : ");
		alas= cek();
		printf("Input tinggi : ");
		tinggi= cek();
		printf("Input sisi miring : ");
		sisimiring= cek();
		system("cls");
		if(sisimiring>0&&tinggi>0&&alas>0){
			keliling= (2*sisimiring)+ (2*alas);
			luas= alas*tinggi;
			printf("---------------------------------------\n");
			printf("\t\t HASIL \t\t\n");
			printf("---------------------------------------\n");
			printf("Keliling dari jajar genjang adalah : %d\n", keliling);
			printf("Luas dari jajar genjang adalah : %d\n", luas);
			printf("---------------------------------------\n");}
		else{
			printf("----------------------------------------------\n");	
			printf("Tidak bisa dihitiung\nInput Harus lebih dari 0\n");
			printf("----------------------------------------------\n");
			printf(" Silahkan mengulang memasukkan input\n");
			printf("----------------------------------------------\n");
		}
	}}
	
	void trapesium(){
	int jenis;
	int sisiatas=-1, sisibawah=-1;
	int sisisamping1=-1;
	int sisisamping2=-1;
	int keliling;
	int luas;
	int tinggi=-1;
	printf("_______________________________________\n");
	printf("_______________________________________\n");
	printf("    SELAMAT DATANG DI MENU KELILING\n      DAN LUAS TRAPESIUM\n");
	printf("_______________________________________\n");
	printf("_______________________________________\n");
	printf("1. Trapesium siku siku\n");
	printf("2. Trapesium sembarang\n");
	printf("3. Trapesium sama kaki\n");
	printf("Pilih jenis trapesium :");
	jenis= cek();
	system("cls");
	while(sisiatas<=0 || sisibawah<=0 || tinggi<=0 || sisisamping1<=0 || sisisamping2<=0){
		printf("Input sisi atas : ");
		sisiatas= cek();
		printf("Input sisi bawah : ");
		sisibawah= cek();
		printf("Input tinggi : ");
		tinggi= cek();
		printf("Input Sisi samping 1 : ");
		sisisamping1= cek();
		if(sisiatas>0&&sisibawah>0&&tinggi>0&&sisisamping1>0){
			keliling= sisiatas+sisibawah+tinggi+sisisamping1;
			if(jenis==2|| jenis==3){
				printf("Input Sisi samping 2");
				sisisamping2= cek();			
				keliling=sisiatas+sisibawah+sisisamping2+sisisamping1;
			}
			luas=(sisiatas+sisibawah)*tinggi/2;
			system("cls");
			printf("---------------------------------------\n");
			printf("\t\t HASIL \t\t\n");
			printf("---------------------------------------\n");
			printf("Keliling dari trapesium : %d\n", keliling);
			printf("Luas dari trapesium : %d\n", luas);
			printf("---------------------------------------\n");
			}else{
				printf("----------------------------------------------\n");
				printf("Tidak bisa dihitiung\nInput Harus lebih dari 0\n");
				printf("----------------------------------------------\n");
				printf(" Silahkan mengulang memasukkan input\n");
				printf("----------------------------------------------\n");
		}
		sisisamping2=1;}
	}
	void lingkaran(){
		int jari2=-1;
		int keliling;
		int luas;
		printf("_______________________________________\n");
		printf("_______________________________________\n");
		printf("    \tSELAMAT DATANG DI MENU KELILING\n      DAN LUAS LINGKARAN \n");
		printf("_______________________________________\n");
		printf("_______________________________________\n");
		while(jari2<=0){
			printf("Input jari-jari : ");
			jari2= cek();
			if(jari2>0){
				keliling= 3.14*2*jari2;
				luas= 3.14*jari2*jari2;
				system("cls");
				printf("---------------------------------------\n");
				printf("\t\t HASIL \t\t\n");
				printf("---------------------------------------\n");
				printf("Keliling dari lingkaran : %d\n", keliling);
				printf("Luas dari lingkaran : %d\n", luas);
				printf("---------------------------------------\n");
			}else{
			printf("----------------------------------------------\n");
			printf("Tidak bisa dihitiung\nInput Harus lebih dari 0\n");
			printf("----------------------------------------------\n");
			printf(" Silahkan mengulang memasukkan input\n");
			printf("----------------------------------------------\n");
		}}
	}
	void keluar(){
		printf("_______________________________________\n");
		printf("_______________________________________\n");
		printf("\t\t TERIMAKASIH\n");
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
	int menu;
	int ulang=1;
	
	while(ulang==1){
		menuu();
		printf(" silahkan pilih menu, tulis angka saja \n");
		printf(" Pilihan menu : ");
		menu = cek();
		system("cls");
		if (menu==1){
			segitigasembarang();
		}else if(menu==2){
			belahketupat();
		}else if (menu==3){
			jajargenjang();
		}else if (menu==4){
			trapesium();
		}else if (menu==5){
			lingkaran();
		}else if (menu==6){
			keluar();
			return 0;
		}else{
			salah();
		}
		if(menu!=6){
			kembali();
			printf;("Pilihan anda : ");
			ulang= cek();}
			system("cls");}
		return 0;}
