#include <stdio.h>
#include <stdlib.h>

int clean();
int fibRekursif(int angka);
int fibIteratif(int bilangan);
void selesai();
void menu();
void ulang();

int main(){
	printf(">>>>>>>>>>>>>>>>>> Fibonacci Rekursif & Iteratif <<<<<<<<<<<<<<\n");
  printf (">>>>>>>>>>>>>>>>>>>>        Kelompok 10        <<<<<<<<<<<<<<<\n");
  printf (">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
  printf ("                           tekan enter...                      \n");
  printf (">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
  getchar();
  system("pause");
  system("cls");
  menu();
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

int fibRekursif(int angka) {
    if ((angka == 0) || (angka == 1)){
        return 1;
    }
    else {
        return fibRekursif (angka-1) + fibRekursif(angka-2);
    }
}

int fibIteratif(int bilangan){
  int j;
  int fbil;
  int f1=0;
  int f2=1;

  if(bilangan == 0){
    return 0;
  }
  for(j = 1; j <= bilangan; j++){
      fbil  = f1 + f2;
      f2 = f1;
      f1 = fbil;
  }
  return fbil;
}

void menu(){
  char input;
  int j;
  int hasil;
  char entercheck;

  printf (">>>>>>>>>>>>>>>>>>>>>>>>>>>>>> MENU <<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
	printf ("1. Fibonacci Rekursif\n");
	printf ("2. Fibonacci Iteratif\n");
	printf ("3. Keluar\n");
	printf (">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");

  do{
	printf ("Masukkan pilihan anda : ");
  if(((scanf(" %c%c", &input, &entercheck)) != 2 || entercheck != '\n') && pembersih()){
      printf (">>>>>>>>>>>>>>>>>     Input angka 1 atau 2  saja      <<<<<<<<<<<<<\n");
		}
  else{
    if (input== '1') {
      int i;
      int bil;
      printf (">>>>>>>>>>>>>>>>>>>      FIBONACCI REKURSIF    <<<<<<<<<<<<<<<<\n");

      do{
      printf ("Jumlah Bilangan : ");

      if(((scanf(" %d%c", &bil, &entercheck)) !=2 || entercheck != '\n') && pembersih()){
        printf (">>>>>>>>>>>>>>>>>          Input angka saja        <<<<<<<<<<<<<\n");
        }
      else {
        printf ("Hasilnya adalah sebagai berikut:");
        for (i = 0; i < bil; i++)    {
        printf("%d ", fibRekursif(i));
        }
        ulang();
        break;
        }
      } while(1);
        }

   else if (input== '2'){
      int count;
      printf (">>>>>>>>>>>>>>>>>>>      FIBONACCI ITERATIF    <<<<<<<<<<<<<<<<\n");

     do{
       printf ("Jumlah Bilangan : ");

      if(((scanf(" %d%c", &count, &entercheck)) != 2 || entercheck != '\n') && pembersih()){
        printf (">>>>>>>>>>>>>>>>>          Input angka saja        <<<<<<<<<<<<<\n");
        }
      else {
        printf ("|Hasil : ");
        for(j=0; j<= count; j++){
            hasil = fibIteratif(j);
            printf ("%d ", hasil);
        }
        ulang();
        break;
      }
      } while (1);
  }
  else if (input == '3'){
      selesai();
      break;
      }
   else {
      printf (">>>>>>>>>>>>>>>>>     Input angka 1 atau 2  saja      <<<<<<<<<<<<<\n");
    }
}
  }while(1);
 }

void ulang() {
  char input;
  char entercheck;
  printf ("\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>   MENU   <<<<<<<<<<<<<<<<<<<<<<<<<<\n");
  printf ("1. Menu Utama\n");
  printf ("2. Keluar\n");
  printf (">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");

  do{
  printf ("Input:");
  if(((scanf(" %c%c", &input, &entercheck)) != 2 || entercheck != '\n') && pembersih()){
      printf (">>>>>>>>>>>>>>>>>     Input angka 1 atau 2  saja      <<<<<<<<<<<<<\n");
		}
  else{
    if (input == '1'){
      menu();
      break;
  }
    else if (input == '2'){
      selesai();
      break;
  }
    else {
      printf (">>>>>>>>>>>>>>>>>     Input angka 1 atau 2  saja      <<<<<<<<<<<<<\n");
      ulang();
  }
    }
  } while (1);
  }

