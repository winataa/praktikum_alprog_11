#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void breakBaris(){
     printf ("|<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>|\n");
}

void waktuTgl(){
     time_t now; 
     time (&now); 
     printf ("%.24s\n", ctime (&now)); 
}

void keluar(){
	 int keluar = 2;
	 while (keluar == 2){
		   system ("cls");
		   printf ("-------------------------------------------------------\n");
		   printf ("|>>>>>>>>>>|      YAKIN INGIN KELUAR?      |<<<<<<<<<<|\n");
    	   printf ("-------------------------------------------------------\n");
		   printf ("|    |         [1] Kembali                       |    |\n");
		   printf ("|    |         [2] Keluar                        |    |\n");
		   printf ("|<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>|\n");
		   printf ("Angka menu pilihan [1/2] : ");
		   scanf ("%d", &keluar);
		   fflush (stdin);
		
				if (keluar == 2) { 
					printf ("-------------------------------------------------------\n");
					printf ("|>>>>>>>>>>>>>>|     TERIMA KASIH      |<<<<<<<<<<<<<<|\n");
					printf ("-------------------------------------------------------\n");
					waktuTgl();
					break;	
				}
					
				else if (keluar == 1) {
					system ("cls");
					main();
					}
					
					if (keluar != 1 && keluar != 2){
					keluar = 1;
					
					breakBaris();
					printf ("      [ERROR] Input HANYA bilangan bulat 1 atau 2.\n");
					breakBaris();
					}
		   } 
		
}

void randomNum(int arr[], int n) {
    int i;
    srand(0);
    for (i = 0; i < n; i++) {
        arr[i] = rand();
    }
}

void copyNum(int source[], int target[], int n) {
    int i;
    for (i = 0; i < n; i++)
        target[i] = source[i];
}

void print(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("- Angka ke-%d : %d", i + 1, arr[i]);
        printf("\n");
    }
}

int clear(){
	while(getchar() != '\n');
	return 1;
}

int pvt(int arr[], int low, int high) {
    int pivot = arr[high];
    int temp;
    int i = (low - 1);
    int j;
    for (j = low; j <= high - 1; j++) {
        if (arr[j] <= pivot) {
            i++;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return (i + 1);
}

void quickSort(int arr[], int low, int high) {
    int pivot = pvt(arr, low, high);
    if (low < high) {
        pivot = pvt(arr, low, high);
        quickSort(arr, low, pivot - 1);
        quickSort(arr, pivot + 1, high);
    }
}

void insertionSort(int arr[], int n) {
    int i, j, key;

    for (i = 1; i < n; i++) {
        key = arr[i];

        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++){
        for (j = 0; j < n - i - 1; j++){
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void sort(){
    clock_t start, end;
    double durasiSort1, durasiSort2, durasiSort3;
    char opsiSort, karakterSort;
    int n;

    system("cls");
	printf ("------------------------------------------------------\n");
    printf ("|>>>>>>>>>|        PILIH BANYAK DATA       |<<<<<<<<<|\n");
	printf ("------------------------------------------------------\n");
    printf ("|         |        [1] 1000 Data           |         |\n");
	printf ("|         |        [2] 16000 Data          |         |\n");
	printf ("|         |        [3] 64000 Data          |         |\n");
	printf ("|         |        [4] Kembali             |         |\n");
	printf ("|<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>|\n");
    while(1){
        printf ("Angka menu pilihan [1-4] : ");
        if (scanf("%c%c", & opsiSort, & karakterSort) != 2 || karakterSort != '\n'){
            breakBaris();
            printf ("      [ERROR] Masukkan pilihan dengan benar.\n");
            breakBaris();
            fflush(stdin);
        } 
		else {
            if (opsiSort == '1') {
                n = 1000;
                break;
            } else if (opsiSort == '2') {
                n = 16000;
                break;
            } else if (opsiSort == '3') {
                n = 64000;
                break;
            } else if (opsiSort == '4') {
                main();
                break;
            } else {
                breakBaris();
                printf ("      [ERROR] Input HANYA bilangan bulat 1 sampai 4.\n");
                breakBaris();
            }
        }
    }
    int arr[n];
    int arr2[n];
    int arr3[n];
    randomNum(arr, n);
    printf("Array %d random sebelum SORTING :\n", n);
    print(arr, n);
    copyNum(arr, arr2, n);
    copyNum(arr, arr3, n);

    //Insertion Sort
    start = clock();
    insertionSort(arr, n);
    end = clock();
    durasiSort1 = (double)(end - start) / CLOCKS_PER_SEC;

    //Bubble Sort
    start = clock();
    bubbleSort(arr2, n);
    end = clock();
    durasiSort2 = (double)(end - start) / CLOCKS_PER_SEC;

    //Quick Sort
    start = clock();
    quickSort(arr3, 0, n - 1);
    end = clock();
    durasiSort3 = (double)(end - start) / CLOCKS_PER_SEC;

    breakBaris();
    printf("\nHasil SORTING array %d data random sesudah di SORTING :\n", n);
    print(arr, n);
    printf ("-------------------------------------------------------\n");
	printf ("|>>>>>>>>>>>>>|     INSERTION SORT      |<<<<<<<<<<<<<<|\n");
	printf ("-------------------------------------------------------\n");
	printf("Insertion Sort membutuhkan	: %f detik untuk SORTING\n", durasiSort1);
    printf ("-------------------------------------------------------\n");
	printf ("|>>>>>>>>>>>>>>|     BUBBLE SORT      |<<<<<<<<<<<<<<<|\n");
	printf ("-------------------------------------------------------\n");
	printf("Bubble Sort membutuhkan		: %f detik untuk SORTING\n", durasiSort2);
    printf ("-------------------------------------------------------\n");
	printf ("|>>>>>>>>>>>>>>|     QUICK SORT      |<<<<<<<<<<<<<<<|\n");
	printf ("-------------------------------------------------------\n");
	printf("Quick Sort membutuhkan		: %f detik untuk SORTING\n", durasiSort3);
	breakBaris();
	if(durasiSort1 == durasiSort2 && durasiSort1 <= durasiSort3){
		printf("Hasil : Insertion Sort dan Bubble Sort LEBIH CEPAT dibandingkan Quick Sort\n");
        breakBaris();
	}
	else if(durasiSort1 == durasiSort3 && durasiSort1 <= durasiSort2){
		printf("Hasil : Insertion Sort dan Quick Sort LEBIH CEPAT dibandingkan Bubble Sort\n");
        breakBaris();
	}
	else if(durasiSort2 == durasiSort3 && durasiSort2 <= durasiSort1){
		printf("Hasil : Bubble Sort dan Quick Sort LEBIH CEPAT dibandingkan Insertion Sort\n");
        breakBaris();
	}
	else if(durasiSort1 <= durasiSort2 && durasiSort1 <= durasiSort3){
		printf("Hasil : Insertion Sort LEBIH CEPAT dibandingkan Bubble Sort dan Quick Sort\n");
        breakBaris();
	}
	else if(durasiSort2 <= durasiSort1 && durasiSort2 <= durasiSort3){
		printf("Hasil : Bubble Sort LEBIH CEPAT dibandingkan Insertion Sort dan Quick Sort\n");
        breakBaris();
	}
	else if(durasiSort3 <= durasiSort1 && durasiSort3 <= durasiSort2){
		printf("Hasil : Quick Sort LEBIH CEPAT dibandingkan Insertion Sort dan Bubble Sort\n");
        breakBaris();
	}
	else{
		printf("\nHasil : Total waktu yang dibutuhkan SAMA CEPAT.\n");
        breakBaris();
	}
	printf("[R] Ulang		[M] Menu		[K] Keluar\n");
	breakBaris();
	
	while(1){
		printf ("Abjad menu pilihan [R/M/K] : ");
		if(((scanf(" %c%c", &opsiSort, &karakterSort)) != 2 || karakterSort != '\n') && clear()){
			system("cls");
            breakBaris();
            printf ("[ERROR] Masukkan HANYA berupa abjad R atau M atau K.\n");
            breakBaris();
			printf("\n[R] Ulang		[M] Menu		[K] Keluar\n\n");
 		}
		else{
			if(opsiSort == 'R' || opsiSort == 'r'){
			sort();
			}
			else if(opsiSort == 'M' || opsiSort == 'm'){
				main();
			}
			else if(opsiSort == 'K' || opsiSort == 'k'){
				keluar();
				exit(0);
			}
			else{
                breakBaris();
				printf ("[ERROR] Masukkan HANYA berupa abjad R atau M atau K.\n");
                breakBaris();
			}
		}	
	}
}

double sequentialSearch(int arr[], int n, int angkaDicari) {
    clock_t start, end;
    double durasiSearch;
    int i, counter = 0;

    start = clock();
    for (i = 0; i < n; i++) {
        if (arr[i] == angkaDicari) {
            counter++;
        }
        printf("- Angka ke-%d : %d", i+1, arr[i]);
        printf("\n");
    }
    end = clock();
    durasiSearch = (double)(end - start) / CLOCKS_PER_SEC;

    if (counter == 0) {
        breakBaris();
        printf ("      [ERROR] Tidak terdapat angka yang sesuai.\n");
        breakBaris();
    } 
	else {
        int indexAngkaDicari[counter];
        counter = 0;

        for (i = 0; i < n; i++) {
            if (arr[i] == angkaDicari) {
                indexAngkaDicari[counter] = i;
                counter++;
            }
        }

        
        printf ("-----------------------------------------------------------------------------\n");
	    printf ("|>>>>>>>>>>>>>>>>>|           SEQUENTIAL SEARCH          |<<<<<<<<<<<<<<<<<<|\n");
	    printf ("-----------------------------------------------------------------------------\n");
		printf("Angka ditemukan pada index : ");
        for (i = 0; i < counter; i++) {
            if (i == 0 && i == counter - 1) {
                printf(" %d.", indexAngkaDicari[i]);
            }
			else {
                if (i == counter - 1) {
                    printf(" dan %d.", indexAngkaDicari[i]);
                } else {
                    printf(" %d,", indexAngkaDicari[i]);
                }
            }
        }
    }
    return durasiSearch;
}

double binarySearch(int arr[], int low, int high, int angkaDicari) {
    clock_t start, end;
    double durasiSearch;
    int i, counter = 0;

    start = clock();
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == angkaDicari) {
            counter++;
            for (i = mid + 1; i < high + 1 && arr[i] == angkaDicari; i++) {
                counter++;
            }
            for (i = mid - 1; i < high + 1 && arr[i] == angkaDicari; i++) {
                counter++;
            }
            break;
        } 
		else if (arr[mid] > angkaDicari) {
            high = mid - 1;
        } 
		else {
            low = mid + 1;
        }
    }
    end = clock();
    durasiSearch = (double)(end - start) / CLOCKS_PER_SEC;

    if (counter == 0) {
        breakBaris();
        printf ("      [ERROR] Tidak terdapat angka yang sesuai.\n");
        breakBaris();
    } 
	else {
        int indexAngkaDicari[counter];
        counter = 0;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] == angkaDicari) {
                indexAngkaDicari[counter] = mid;
                counter++;
                for (i = mid + 1; i < high + 1 && arr[i] == angkaDicari; i++) {
                    indexAngkaDicari[counter] = i;
                    counter++;
                }
                for (i = mid - 1; i > 0 && arr[i] == angkaDicari; i--) {
                    indexAngkaDicari[counter] = i;
                    counter++;
                }
                break;
            } else if (arr[mid] > angkaDicari) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        printf("\n");
        printf ("-----------------------------------------------------------------------------\n");
	    printf ("|>>>>>>>>>>>>>>>>>>>|           BINARY SEARCH          |<<<<<<<<<<<<<<<<<<<<|\n");
	    printf ("-----------------------------------------------------------------------------\n");
		printf("Angka ditemukan pada index : ");
        insertionSort(indexAngkaDicari, counter);
        for (i = 0; i < counter; i++) {
            if (i == 0 && i == counter - 1) {
                printf(" %d.", indexAngkaDicari[i]);
            } else {
                if (i == counter - 1) {
                    printf(" dan %d.", indexAngkaDicari[i]);
                } else {
                    printf("%d, ", indexAngkaDicari[i]);
                }
            }
        }
    }
    return durasiSearch;
}

int search() {
    clock_t start, end;
    double durasiSearch1, durasiSearch2;
    int i;
    int n;
    int menu;
    int angkaDicari;
    char opsiSearch, karakterSearch;

    system("cls");
    printf ("------------------------------------------------------\n");
    printf ("|>>>>>>>>>|        PILIH BANYAK DATA       |<<<<<<<<<|\n");
	printf ("------------------------------------------------------\n");
    printf ("|         |        [1] 1000 Data           |         |\n");
	printf ("|         |        [2] 16000 Data          |         |\n");
	printf ("|         |        [3] 64000 Data          |         |\n");
	printf ("|         |        [4] Kembali             |         |\n");
	printf ("|<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>|\n");
	
    while(1){
        printf ("Angka menu pilihan [1-4] : ");
        if(((scanf(" %c%c", &opsiSearch, &karakterSearch)) != 2 || karakterSearch != '\n') && clear()){
            system("cls");
            breakBaris();
            printf ("[ERROR] Masukkan HANYA berupa abjad R atau M atau K.\n");
            breakBaris();
			printf("\n[R] Ulang		[M] Menu		[K] Keluar\n\n");
            fflush(stdin);
        } 
		else {
            if (opsiSearch == '1') {
                n = 1000;
                break;
            } 
			else if (opsiSearch == '2') {
                n = 16000;
                break;
            } 
			else if (opsiSearch == '3') {
                n = 64000;
                break;
            } 
			else if (opsiSearch == '4') {
                main();
                break;
            } 
			else {
                breakBaris();
                printf ("      [ERROR] Input HANYA bilangan bulat 1 sampai 4.\n");
                breakBaris();
            }
        }
    }
    int arr[n];
    int arr2[n];
    randomNum(arr, n);
    print(arr, n);
    
    while(1){
        breakBaris();
        printf("Masukkan angka yang ingin dicari: ");
        if(((scanf("%d%c", &angkaDicari, &karakterSearch)) != 2 || karakterSearch != '\n') && clear()){
            breakBaris();
            printf ("      [ERROR] Masukkan yang benar HANYA berupa angka.\n");
            breakBaris();
            fflush(stdin);
        }
		else {
            if (angkaDicari < 0) {
                breakBaris();
                printf ("      [ERROR] Masukkan pilihan selain 0.\n");
                breakBaris();
            } 
			else {
                break;
            }
        }
    }

    insertionSort(arr, n);
    durasiSearch1 = sequentialSearch(arr, n, angkaDicari);
    durasiSearch2 = binarySearch(arr, 0, n - 1, angkaDicari);

    printf("\n");
    breakBaris();
	printf("Sequential Search membutuhkan	: %f detik untuk Searching\n", durasiSearch1);

	printf("Binary Search membutuhkan	: %f detik untuk Searching\n", durasiSearch2);
	breakBaris();
	if(durasiSearch1 <= durasiSearch2){
		printf("Hasil	: Sequential Search LEBIH CEPAT dibandingkan Binary Search\n");
	}
	else if(durasiSearch1 >= durasiSearch2){
		printf("Hasil	: Binary Search LEBIH CEPAT dibandingkan Sequential Search\n");
	}
	else{
		printf("Hasil	: Sequential Search SAMA CEPAT dengan Binary Search\n");
	}
    breakBaris();
	printf("[R] Ulang		[M] Menu		[K] Keluar\n");
	breakBaris();
	
	while(1){
		printf ("Abjad menu pilihan [R/M/K] : ");
		if(((scanf(" %c%c", &opsiSearch, &karakterSearch)) != 2 || karakterSearch != '\n') && clear()){
			breakBaris();
            printf ("[ERROR] Masukkan HANYA berupa abjad R atau M atau K.\n");
            breakBaris();
			printf("[R] Ulang		[M] Menu		[K] Keluar\n");
		}
		else{
			if(opsiSearch == 'R' || opsiSearch == 'r'){
				search();
			}
			else if(opsiSearch == 'M' || opsiSearch == 'm'){
				main();
			}
			else if(opsiSearch == 'K' || opsiSearch == 'k'){
				keluar();
                exit(0);
			}
			else{
				breakBaris();
				printf ("[ERROR] Masukkan HANYA berupa abjad R atau M atau K.\n");
                breakBaris();
			}
		}
	}
}

int main() {
    char opsi, karakter;
    system("cls");
    waktuTgl();
	printf ("------------------------------------------------------\n");
    printf ("|>>>>>>>>>|             PROGRAM             |<<<<<<<<|\n");
    printf ("|>>>>>>>>>|     PENGURUTAN & PENCARIAN      |<<<<<<<<|\n");
	printf ("------------------------------------------------------\n");
    printf ("|         |    [1] Pengurutan (Sorting)     |        |\n");
	printf ("|         |    [2] Pencarian (Searching)    |        |\n");
	printf ("|         |    [3] Keluar                   |        |\n");
	printf ("|<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>|\n"); 
    while(1){
    printf ("Angka menu opsi [1-3] : ");
        if (scanf("%c%c", & opsi, & karakter) != 2 || karakter != '\n') {
            breakBaris();
            printf ("      [ERROR] Masukkan pilihan dengan benar.\n");
            breakBaris();
            fflush(stdin);
        } else {
            if (opsi == '1') {
                sort();
                break;
            } else if (opsi == '2') {
                search();
                break;
            } else if (opsi == '3') {
                keluar();
                break;
            } else {
                breakBaris();
                printf ("      [ERROR] Input HANYA bilangan bulat 1 sampai 3.\n");
                breakBaris();
            }
        }
    }
}
