#include <stdio.h>
#include <stdlib.h>

void thRekursif();
int hanoiRekursif(int cakram);
void thIteratif();
int pembersih();

void urutantowerhanoi (int jumlahcakram, char asal, char bantu, char menuju){

	if(jumlahcakram>0){
      urutantowerhanoi (jumlahcakram-1, bantu, asal, menuju);
      printf (">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
      printf ("Perpindahkan cakram %d dari %c ke %c\n",jumlahcakram, asal, menuju);
      urutantowerhanoi(jumlahcakram-1, bantu, asal, menuju);
 	}
}

int main(){
	char pilihan;
  char entercheck;
	system("cls");
    printf (">>>>>>>>>>>>>>>>>  TOWER HANOI REKURSIF & ITERATIF <<<<<<<<<<<<<\n");
    printf (">>>>>>>>>>>>>>>>>>>          Kelompok 11          <<<<<<<<<<<<<<\n");
    printf (">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
    printf ("1. Tower Hanoi Rekursif\n");
    printf ("2. Tower Hanoi Iteratif\n");
    printf ("3. Exit\n");
	  printf (">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");

	do{
		printf("Input: ");
		if(((scanf(" %c%c", &pilihan, &entercheck)) != 2 || entercheck != '\n') && pembersih()){
      printf (">>>>>>>>>>>>>>>>> Input angka 1 atau 2 atau 3 saja <<<<<<<<<<<<<\n");
		}
		else{
			if(pilihan == '1'){
				thRekursif();
				break;
			}
			else if(pilihan == '2'){
				thIteratif();
				break;
			}
			else if(pilihan == '3'){
				exit(0);
				break;
			}
			else{
			printf (">>>>>>>>>>>>>>>>> Input angka 1 atau 2 atau 3 saja <<<<<<<<<<<<<\n");
			}
		}
	}while(1);

	return 0;
}

void thRekursif(){
	char asal;
  char bantu;
  char menuju;
	char pilihan;
  char entercheck;
	int jumlahCakram;

	system("cls");

	do{
    printf (">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
		printf ("Jumlah cakram: ");
		if(((scanf("%d%c", &jumlahCakram, &entercheck)) != 2 || entercheck != '\n') && pembersih()){
    printf (">>>>>>>>>>>> SILAHKAN MASUKAN ANGKA LEBIH DARI 0  <<<<<<<<<<<<<<\n");
      }
		else{
			if(jumlahCakram <= 0){
      printf (">>>>>>>>>>>> SILAHKAN MASUKAN ANGKA LEBIH DARI 0  <<<<<<<<<<<<<<\n");
			}
			else {
				break;
			}
		}
	}while(1);

	urutantowerhanoi(jumlahCakram,'X','Y','Z');
  printf (">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
	printf ("Langkah minimum untuk memindahkan %d cakram yaitu: %d \n", jumlahCakram, hanoiRekursif(jumlahCakram));
	printf (">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");

	printf (">>>>>>>>>>>>>>>>>>>>>>>> Ingin Mengulang <<<<<<<<<<<<<<<<<<<<<<\n");
  printf ("1. Mengulang\n");
  printf ("2. Menu Utama\n");
  printf ("3. Exit\n");
  printf (">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
	do{
		printf("Input: ");
		if(((scanf(" %c%c", &pilihan, &entercheck)) != 2 || entercheck != '\n') && pembersih()){
      printf (">>>>>>>>>>>>>>>>>>>>>>>>  Inputan Salah  <<<<<<<<<<<<<<<<<<<<<<\n");
      printf ("1. Mengulang\n");
      printf ("2. Menu Utama\n");
      printf ("3. Exit\n");
      printf (">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
		}
		else{
			if(pilihan == '1'){
				thRekursif();
				break;
			}
			else if(pilihan == '2'){
				main();
				break;
			}
			else if(pilihan == '3'){
				exit(0);
				break;
			}
			else{
			printf (">>>>>>>>>>>>>>>>>>>>>>>>  Inputan Salah  <<<<<<<<<<<<<<<<<<<<<<\n");
      printf ("1. Mengulang\n");
      printf ("2. Menu Utama\n");
      printf ("3. Exit\n");
      printf (">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
			}
		}
	}while(1);
}

int hanoiRekursif(int cakram){
	if(cakram == 1){
		return 1;
	}
	else{
		return 2 * hanoiRekursif(cakram - 1) + 1;
	}
}

void thIteratif(){
	char asal, bantu, menuju, pilihan, entercheck;
	int jumlahCakram, i, hasilcakram=1;
	system("cls");

	do{
    printf (">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
		printf ("Jumlah cakram: ");
		if(((scanf("%d%c", &jumlahCakram, &entercheck)) != 2 || entercheck != '\n') && pembersih()){
			printf (">>>>>>>>>>>> SILAHKAN MASUKAN ANGKA LEBIH DARI 0  <<<<<<<<<<<<<<\n");
		}
		else{
			if(jumlahCakram <= 0){
			printf (">>>>>>>>>>>> SILAHKAN MASUKAN ANGKA LEBIH DARI 0  <<<<<<<<<<<<<<\n");
			}
			else{
				break;
			}
		}
	}while(1);

	for(i=0; i<jumlahCakram; i++){
		hasilcakram = 2 * hasilcakram;
		if(i == jumlahCakram - 1){
			hasilcakram = hasilcakram - 1;
		}
	}
	urutantowerhanoi(jumlahCakram,'X','Y','Z');
  printf (">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
	printf ("Langkah minimum untuk memindahkan %d cakram yaitu: %d \n", jumlahCakram, hasilcakram);
	printf (">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");

	printf (">>>>>>>>>>>>>>>>>>>>>>>> Ingin Mengulang <<<<<<<<<<<<<<<<<<<<<<\n");
  printf ("1. Mengulang\n");
  printf ("2. Menu Utama\n");
  printf ("3. Exit\n");
  printf (">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
	do{
		printf("Input: ");
		if(((scanf(" %c%c", &pilihan, &entercheck)) != 2 || entercheck != '\n') && pembersih()){
      printf (">>>>>>>>>>>>>>>>>>>>>>>>  Inputan Salah  <<<<<<<<<<<<<<<<<<<<<<\n");
      printf ("1. Mengulang\n");
      printf ("2. Menu Utama\n");
      printf ("3. Exit\n");
      printf (">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
		}
		else{
			if(pilihan == '1'){
				thRekursif();
				break;
			}
			else if(pilihan == '2'){
				main();
				break;
			}
			else if(pilihan == '3'){
				exit(0);
				break;
			}
			else{
			printf (">>>>>>>>>>>>>>>>>>>>>>>>  Inputan Salah  <<<<<<<<<<<<<<<<<<<<<<\n");
      printf ("1. Mengulang\n");
      printf ("2. Menu Utama\n");
      printf ("3. Exit\n");
      printf (">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
			}
		}
	}while(1);
}

int pembersih(){
	while(getchar() != '\n');
	return 1;
}
