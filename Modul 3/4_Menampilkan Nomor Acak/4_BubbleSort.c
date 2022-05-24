#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int clean(){
	while(getchar() != '\n');
	return 1;
}

void swap(int *i1, int *i2){
	int temp = *i1;
	*i1 = *i2;
	8;
}

void bubbleSortPointer(int arr[], int size){
	int i,a;

	for(i=0;i<size-1;i++){
		int flag = 0;
		for(a=0;a<size-i-1;a++){
			if(arr[a]>arr[a+1]){
				swap(&arr[a], &arr[a+1]);
				flag = 1;
			}
		}
		if(flag == 0){

			break;
		}
	}
		
}

void bubbleSort(int angka[], int size){
	int i,j,temp;

	for(i=0; i<size-1; i++){
		for(j=0; j<size-1-i; j++){
			if(angka[j] > angka[j+1]){
				temp = angka[j];
				angka[j] = angka[j+1];
				angka[j+1] = temp;
			}
		}
	}
}

void Sorting(){
	clock_t waktu;
	double waktu_dibutuhkan[3];
	int i;
	int size;
	int menu;
	char enterCheck;
	int exit = 1;
	do{
		
		system("cls");
		printf("================================================\n");
    	printf("=                 MENU SORTING                 =\n");
    	printf("================================================\n");
		printf("               1. 1000 Angka        			\n");
		printf("               2. 16000 Angka       			\n");
		printf("               3. 64000 Angka               	\n");
		printf("               4. Exit            	            \n");
		printf("================================================\n");
		printf(" Masukkan pilihan menu : ");
		while(((scanf(" %d%c", &menu, &enterCheck) != 2 || enterCheck != '\n') && clean() || menu<0 || menu > 4)){
	        system("cls");
			printf(" Tekan 0 UNTUK MENGULANGI ! \n ");
			printf(" Masukkan Bilangan yang Valid\n ");
	        printf(" Masukkan Menu : ");
    	}
		switch(menu){
			case 1:{
				int angka[1000], temp[1000];
				
				system("cls");
				size = sizeof(angka) / sizeof(angka[0]);
				srand((unsigned) time(NULL));
				
				for(i=0; i<size; i++){
					angka[i] = rand();
					temp[i] = angka[i];
				}
				
				//Biasa
				waktu = clock();
				bubbleSort(temp, size);
				waktu = clock() - waktu;
				
				waktu_dibutuhkan[0] = (double)(waktu) / CLOCKS_PER_SEC;
	
				for(i=0; i<size; i++){
					if(i == size - 1){
						printf(" dan %d.", temp[i]);
					}
					else{
						printf(" %d,", temp[i]);
					}
					temp[i] = angka[i];
				}
				//Pointer
				waktu = clock();
				bubbleSortPointer(temp, size);
				waktu = clock() - waktu;
				waktu_dibutuhkan[1] = (double)(waktu) / CLOCKS_PER_SEC;
				
				for(i=0; i<size; i++){
					if(i == size - 1){
						printf(" dan %d.", temp[i]);
					}
					else{
						printf(" %d,", temp[i]);
					}
					temp[i] = angka[i];
				}

				printf("\n\nRESULT");
				printf("\n\nTotal Waktu : \n");
				printf("Bubble Sort Biasa = %f detik\n", waktu_dibutuhkan[0]);
				printf("Bubble Sort Pointer = %f detik \n", waktu_dibutuhkan[1]);
				
				break;
			}
			case 2:{
				int angka[16000], temp[16000];
				
				system("cls");
				size = sizeof(angka) / sizeof(angka[0]);
				srand((unsigned) time(NULL));
				
				for(i=0; i<size; i++){
					angka[i] = rand();
					temp[i] = angka[i];
				}
				
				//Biasa
				waktu = clock();
				bubbleSort(temp, size);
				waktu = clock() - waktu;
				
				waktu_dibutuhkan[0] = (double)(waktu) / CLOCKS_PER_SEC;
	
				for(i=0; i<size; i++){
					if(i == size - 1){
						printf(" dan %d.", temp[i]);
					}
					else{
						printf(" %d,", temp[i]);
					}
					temp[i] = angka[i];
				}
				//Pointer
				waktu = clock();
				bubbleSortPointer(temp, size);
				waktu = clock() - waktu;
				waktu_dibutuhkan[1] = (double)(waktu) / CLOCKS_PER_SEC;
				
				for(i=0; i<size; i++){
					if(i == size - 1){
						printf(" dan %d.", temp[i]);
					}
					else{
						printf(" %d,", temp[i]);
					}
					temp[i] = angka[i];
				}

				printf("\n\nRESULT");
				printf("\n\nTotal Waktu : \n");
				printf("Bubble Sort Biasa = %f detik\n", waktu_dibutuhkan[0]);
				printf("Bubble Sort Pointer = %f detik \n", waktu_dibutuhkan[1]);	

				break;
			}
			case 3:{
				int angka[64000], temp[64000];
				
				system("cls");
				size = sizeof(angka) / sizeof(angka[0]);
				srand((unsigned) time(NULL));
				
				for(i=0; i<size; i++){
					angka[i] = rand();
					temp[i] = angka[i];
				}
				
				//Biasa
				waktu = clock();
				bubbleSort(temp, size);
				waktu = clock() - waktu;
				
				waktu_dibutuhkan[0] = (double)(waktu) / CLOCKS_PER_SEC;
	
				for(i=0; i<size; i++){
					if(i == size - 1){
						printf(" dan %d.", temp[i]);
					}
					else{
						printf(" %d,", temp[i]);
					}
					temp[i] = angka[i];
				}

				//Pointer
				waktu = clock();
				bubbleSortPointer(temp, size);
				waktu = clock() - waktu;
				waktu_dibutuhkan[1] = (double)(waktu) / CLOCKS_PER_SEC;
				
				for(i=0; i<size; i++){
					if(i == size - 1){
						printf(" dan %d.", temp[i]);
					}
					else{
						printf(" %d,", temp[i]);
					}
					temp[i] = angka[i];
				}

				printf("\n\nRESULT");
				printf("\n\nTotal Waktu : \n");
				printf("Bubble Sort Biasa = %f detik\n", waktu_dibutuhkan[0]);
				printf("Bubble Sort Pointer = %f detik \n", waktu_dibutuhkan[1]);
				
				break;
			}

			case 4:{
				system("exit");

				break;
			}
		}
		printf("\nTekan '1' untuk ke menu, tekan '0' untuk keluar");
		printf("\nMasukkan pilihan anda : ");
		scanf("%d", &exit);
	
}while(exit == 1);

}

int main(){
	int menu;
	int enterCheck;
		system("cls");
		Sorting();

}
