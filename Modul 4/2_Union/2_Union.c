#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Bagian Struct
struct kubus_struct {
    int sisi;
    int luas;
    int volume;
};

// Bagian Union
union kubus_union{
    int sisi;
    int luas;
    int volume;
};

int hitung_luas (int s){
    return 6 * s * s;
};

int hitung_volume(int s){
    return s * s * s;
};

// Main Program
int main(){

    struct kubus_struct st;
    union kubus_union un;
    char loop[50];
	char val;

    do{
    	int in = -1;												// In = -1 agar memenuhi syarat perulangan while (atau biar while bisa dijalanin harus kurang dari 0)
    	while(in < 0){												// While atau perulangan dibuat untuk validasi input hanya berupa bilangan positif
			printf("===================================================\n");
			printf("|                PROGRAM HITUNG KUBUS             |\n");
			printf("|                    KELOMPOK 11                  |\n");
			printf("===================================================\n\n");
        	printf("Sisi Kubus: ");
			scanf("%d%c", &in, &val); 								// Test berfungsi untuk menampung jumlah input yang sukses, scanf kalau berhasil input maka nilainya jadi 1
	   		if(val != '\n'){
				while(1){											// For;; digunakan looping secara permanen pada bagian getchar
					if(getchar() == '\n'){ 							// Getchar digunakan untuk antisipasi saat inputan mengandung huruf/buffer inputan yang tidak diminta
						break;
					}
				}
			}
			if(in < 0){												// If bagian ini digunakan untuk cek apakah angka inputan negatif/positif
        		in = -1;
        		printf("Input berupa bilangan positif!");
    			sleep(3);
        		system("cls");
			}
			else if(val != '\n'){									// If bagian ini digunakan agar user hanya dapat input berupa angka dan enter
        		in = -1;											// Sehingga, inputan berupa huruf/karakter lainnya tidak akan diproses
        		printf("Input berupa bilangan positif!");
    			sleep(3);
        		system("cls");
			}
    	}

    	st.sisi = un.sisi = in;										// Oper nilai in ke st.sisi dan un.sisi

    	printf("\nKubus dengan Struct\n");
    	printf("Sisi\t\t: %d\n", st.sisi);
    	st.luas = hitung_luas(st.sisi);
    	printf("Luas Permukaan\t: %d\n", st.luas);
    	st.volume = hitung_volume(st.sisi);
    	printf("Volume\t\t: %d\n", st.volume);

    	printf("\nKubus dengan Union");
    	printf("\nSisi\t\t: %d\n", un.sisi);
    	un.luas = hitung_luas(un.sisi);
    	printf("Luas Permukaan\t: %d\n", un.luas);
    	un.sisi = in;												// un.sisi dideklarasikan agar nilai luas un.sisi sebelumnya tidak digunakan lagi pada perhitungan un.volume
    	un.volume = hitung_volume(un.sisi);
    	printf("Volume\t\t: %d\n\n", un.volume);

		printf("Ukuran Memory yang Digunakan oleh Struct: %d\n", sizeof (st));
		printf("Ukuran Memory yang Digunakan oleh Union\t: %d\n\n", sizeof (un));

		do{
			printf("Ingin mengulang?(y/n)\n");
			scanf("%s", &loop);

	   		if(strlen(loop) > 1 || (loop[0] != 'y' && loop[0] != 'n')){
	   			loop[0] = 'x';												// Ketika input selain y&n, dibuat salah agar loop berjalan
				printf("Input y atau n saja!");
				sleep(3);
				system("cls");
			}
      	  	if(loop[0] == 'n'){
        		return(0);
			}
    		if(loop[0] != 'y'){
				printf("===================================================\n");
				printf("|                PROGRAM HITUNG KUBUS             |\n");
				printf("|                    KELOMPOK 11                  |\n");
				printf("===================================================\n\n");

				printf("Sisi Kubus: %d", in);

    			printf("\n\nKubus dengan Struct\n");
    			printf("Sisi\t\t: %d\n", st.sisi);
    			printf("Luas Permukaan\t: %d\n", st.luas);
    			printf("Volume\t\t: %d\n", st.volume);

    			printf("\nKubus dengan Union");
    			un.sisi = in;
    			printf("\nSisi\t\t: %d\n", un.sisi);
    			un.luas = hitung_luas(un.sisi);
    			printf("Luas Permukaan\t: %d\n", un.luas);
    			un.sisi = in;
    			un.volume = hitung_volume(un.sisi);
    			printf("Volume\t\t: %d\n\n", un.volume);

    			printf("Ukuran Memory yang Digunakan oleh Struct: %d\n", sizeof (st));
    			printf("Ukuran Memory yang Digunakan oleh Union\t: %d\n\n", sizeof (un));
			}

		}while(loop[0] != 'y');

		printf("Tunggu sebentar...");
		sleep(3);
		system("cls");

	}while (1);										// Loop akan terus berjalan karena bersifat infinite
    return 0;
};
