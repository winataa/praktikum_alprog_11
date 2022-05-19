#include <stdio.h>
#include <stdlib.h>

int clean();
void keluar();
void pinjaman();

void keluar(){
  printf ("================================================================\n");
  printf ("|>>>>>>>>>>>>>>            TERIMAKASIH             <<<<<<<<<<<< \n");
  printf ("================================================================\n");
}

void pinjaman(){
	char pilihan;
  char enterCheck;
	float p;
	int i;
	int t;
	float angsuran;
  float total_keseluruhan=0;
	float total;
	float bunga;
	int y;

	system ("cls");
  printf ("================================================================\n");
  printf ("||                  SILAHKAN INPUT DATA BERIKUT               ||\n");
  printf ("================================================================\n");
	printf ("||\t\tPokok pinjaman               :");
	scanf  ("%f", &p); fflush (stdin);
	printf ("||\t\tBesar Bunga [dalam Persen]   :");
	scanf  ("%d", &i); fflush (stdin);
	printf ("||\t\tLama Pinjaman (bulan)        :");
	scanf  ("%d", &t); fflush (stdin);
	printf ("================================================================\n");
  printf ("================================================================\n");
	angsuran = p/t;

	for (y=1;y<=t;y++)
	{
    printf ("================================================================\n");
    printf ("|   BULAN  |  BUNGA  |    ANGSURAN POKOK   |   TOTAL ANGSURAN  |\n");
		bunga = (p-((y-1)*angsuran))*(i*0.01)/12;
		total = bunga+angsuran;
		total_keseluruhan = total_keseluruhan + total;
    printf ("     %d        %.2f           %.2f                  %.2f        \n", y, bunga, angsuran, total);

	}
  printf ("================================================================\n");
	printf  ("| Total Keseluruhan adalah                        : %.2f\n", total_keseluruhan);
	printf  ("===============================================================\n");

	do{
    printf ("================================================================\n");
    printf ("|                     PILIH MENU DI BAWAH INI                  |\n");
    printf ("================================================================\n");
		printf("|\t\t1. KEMBALI KE MENU PEMINJAMAN \n");
    printf("|\t\t2. KELUAR \n");
    printf ("================================================================\n");
		printf ("|\t\t Input Pilihan: ");
		if(((scanf(" %c%c", &pilihan, &enterCheck)) != 3 || enterCheck != '\n') && clean()){ // mengecek kesalahan inputan
			printf ("================================================================\n");
			printf ("|                  SILAHKAN INPUT ANGKA 1 ATAU 2!              |\n");
      printf ("================================================================\n");
		}
		else{
			if(pilihan == '1'){
				pinjaman();
				break;
							}
			else if(pilihan == '2'){
				keluar();
				break;
			}
			else{
			printf ("================================================================\n");
			printf ("|                  SILAHKAN INPUT ANGKA 1 ATAU 2!              |\n");
      printf ("================================================================\n");
			}
		}
	}while(1);

}

int main(){
	char pilihan;
  char enterCheck;
	system("cls");
	printf ("================================================================\n");
  printf ("|          SELAMAT DATANG DI PROGRAM MENGHITUNG ANGSURAN       |\n");
  printf ("================================================================\n");
  printf ("|    Program ini dibuat untuk menghitung angsuran yang harus   |\n");
  printf ("|   dibayar berdasarkan pokok pinjaman, besar bunga, dan lama  |\n");
  printf ("|                            pinjaman                          |\n");
  printf ("================================================================\n");
  printf ("================================================================\n");
  printf ("|                  Tekan enter untuk melanjutkan...            |\n");
  printf ("================================================================\n");
  getchar ();

  system ("cls");
  printf ("================================================================\n");
  printf ("|                  SILAHKAN MASUKAN PILIHAN ANDA               |\n");
  printf ("================================================================\n");
  printf ("|\t\t1. Menu Pinjaman\n");
  printf ("|\t\t2. Keluar\n");
  printf ("================================================================\n");

	do{
		printf("|\t\tMasukkan pilihan anda: ");
		if(((scanf(" %c%c", &pilihan, &enterCheck)) != 2 || enterCheck != '\n') && clean()){
      printf ("================================================================\n");
			printf ("|                  SILAHKAN INPUT ANGKA 1 ATAU 2!              |\n");
      printf ("================================================================\n");
		}
		else{
			if (pilihan == '1'){
				pinjaman();
				break;
							}
			else if(pilihan == '2'){
				keluar();
				break;
			}
			else{
			printf ("================================================================\n");
			printf ("|                  SILAHKAN INPUT ANGKA 1 ATAU 2!              |\n");
      printf ("================================================================\n");
			}
		}
	} while(1);
	return 0;

}

int clean(){
	while(getchar() != '\n');
	return 1;
}

