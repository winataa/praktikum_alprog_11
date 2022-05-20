#include <stdio.h>
#include <stdlib.h>
#define Nmaks 8 //define ;suatu konstanta yang mampu menyimpan nilai array dg nilai maksimal atau var nmaks 8

int pembersih();
int binKeDes (int input);
void pilihanmenu();
void ulang();
int desKeBin(int des);
int inputan;
int sisabagi;

int main (){
  printf (">>>>>>>>>>>>>>>>>>>> KONVERSI BINER DAN DESIMAL <<<<<<<<<<<<<<<<\n");
  printf ("                            KELOMPOK 11                         \n");
  printf (">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
  printf ("                           'Klik Enter'                         \n");
  printf (">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
  getchar ();
  system ("pause");
  system ("cls");
  pilihanmenu();
}

int pembersih(){
	while(getchar() != '\n');
	return 1;
}

void selesai(){
  printf (">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
  printf (">>>>>>>>>>>>>>>>>>         Terimakasih        <<<<<<<<<<<<<<<<<<\n");
  printf (">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
}

int desKeBin (int desimal){ //fungsi merubah desimal ke biner

      int biner[10];
      int j;
      int b = desimal;

      for (j=0; desimal>0; j++){
        biner[j]= desimal % 2;
        desimal = desimal /2;
      }
    printf ("Bilangan binernya adalah: ");
    for (j=j-1; j>=0; j--){
    printf ("%d", biner[j]);

        }
  printf ("\n");
  ulang();
  }

int binKeDes (int input) {
	int des = 0;
 	int bobot = 1;
 	while (inputan != 0)
	{
	sisabagi = inputan % 10;
	des = des + sisabagi * bobot;
  inputan = inputan / 10;
	bobot = bobot * 2;
	 }
	printf("Bilangan desimalnya adalah : ");
  printf ("%d", des);

  printf ("\n");
  ulang();
}

void pilihanmenu(){
  char input;
  char entercheck;
  printf (">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
  printf ("                               MENU                             \n");
  printf (">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
  printf ("\t\t\t1. Desimal ke Biner\n");
  printf ("\t\t\t2. Biner ke Desimal\n");
  printf ("\t\t\t3. Exit\n");
  printf (">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");

  do{
  printf ("Input:");
  if(((scanf(" %c%c", &input, &entercheck)) !=2 || entercheck != '\n') && pembersih()){
      printf (">>>>>>>>>>>>>>>>> Input angka 1 atau 2 atau 3 saja <<<<<<<<<<<<<\n");
		}
  else{
    if (input== '1') {
      int des;
      printf (">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
      do{
      printf ("Bilangan desimal: ");

      if(((scanf(" %d%c", &des, &entercheck)) != 2 || entercheck != '\n') && pembersih()){
        printf (">>>>>>>>>>>>>>>>> Input angka 1 atau 2 atau 3 saja <<<<<<<<<<<<<\n");
        }
      else {
      desKeBin(des);
      break;
        }
    } while(1);
        }
    else if (input== '2') {
      printf (">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
      do{
      printf("Bilangan biner :");
      if(((scanf(" %d%c", &inputan, &entercheck)) != 2 || entercheck != '\n') && pembersih()){
        printf (">>>>>>>>>>>>>>>>>          Input angka saja        <<<<<<<<<<<<<\n");
        }
      else {
      binKeDes(inputan);
      break;
        }
      } while (1);
      }
  else if (input== '3'){
      selesai();
      break;
    }
  else {
      printf (">>>>>>>>>>>>>>>>> Input angka 1 atau 2 atau 3 saja <<<<<<<<<<<<<\n");
      pilihanmenu();
      break;
  }
}
    } while(1);
}

void ulang() {
  char pilihan;
  char entercheck;
  printf (">>>>>>>>>>>>>>>>>>>>>>>>>>>>>> MENU <<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
  printf ("\t1. Menu Utama\n");
  printf ("\t2. Keluar\n");
  printf (">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");

  do{
  printf ("Input:");
  if(((scanf(" %c%c", &pilihan, &entercheck)) != 2 || entercheck != '\n') && pembersih()){
      printf ("================================================================\n");
			printf ("|                  SILAHKAN INPUT ANGKA 1 ATAU 2!              |\n");
      printf ("================================================================\n");
		}
  else{
    if (pilihan == '1'){
      pilihanmenu();
      break;
  }
    else if (pilihan == '2'){
      selesai();
      break;
  }
    else {
      printf (">>>>>>>>>>>>>>>>> Input angka 1 atau 2 saja <<<<<<<<<<<<<\n");
      ulang();
  }
    }
  } while (1);
  }


