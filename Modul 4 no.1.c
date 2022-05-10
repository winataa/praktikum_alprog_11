#include <stdio.h>

void judul(){
    printf("\t\xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf\n");
    printf("\t\xb3***********              *********        MODUL  IV  NOMOR 1         *********             ***********\xb3\n");
    printf("\t\xb3*******************          *********       KELOMPOK 11        *********         ********************\xb3\n");
    printf("\t\xb3***********              *********      PROGRAM PENGHITUNG GAJI      *********             ***********\xb3\n");
    printf("\t\xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9\n");

}

struct data_penghasilan{
	int jam;
	int gaji_pokok;
	int total_gaji;
	int gaji_lembur;

};

int validasi_bil(int input[], char validator){  // input[] untuk menerima input huruf dan mencegah loop terus menerus
    if(validator != '\n'){  // Cek apakah inputan tidak sesuai (validator hanya mengandung '\n' jika inputan berupa integer)
        while(1){   // While digunakan looping secara permanen pada bagian getchar
            if(getchar() == '\n'){  // Getchar mengantisipasi saat inputan mengandung huruf/inputan selain integer
                return 0;   // Kembalikaan 0 jika inputan tidak sesuai (mengandung huruf)
            }
        }
        return 0;   // Kembalikaan 0 jika inputan tidak sesuai

    }else if(input < 0){    // Cek apakah angka inputan negatif/positif
        return 0;   // Kembalikaan 0 jika inputan tidak sesuai

    }else{
        return 1;   // Kembalikaan 1 jika inputan sesuai
    }
}

int input_bil(){
    char validator = '0'; // Inisialisasi "validator" dengan char '0' (ASCII 48)
    int input = -1; // input = -1 agar memenuhi syarat while (<0)

    while(input < 0){   // While untuk validasi input hanya berupa integer positif
        system("cls");

        judul();

        printf("\n\t\tMasukan Jam Kerja (1 sampai 24) : ");
        scanf("%d%c", &input, &validator);  // %c untuk mengambil enter (line feed [ASCII 10] atau '\n') dan disimpan di "validator" setelah menginput bilangan di "input"
                                            // jika mengandung huruf maka "validator" akan tetap mengandung '0'

        if(validasi_bil(input, validator) == 1){
            return input;

        }else{
            input = -1;

            printf("\n\t\t\"Mohon menginput dengan benar (bilangan bulat positif 1-24)\"\n");

            getch();
        }
    }
}

void hitung_gaji(struct data_penghasilan p1){
    int gaji_perjam = 10625;

    printf("\n\t\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4");

    printf("\n\t\tJam Kerja \t\t: %d jam", p1.jam);

    if(p1.jam >= 1 && p1.jam <= 8){
        p1.gaji_pokok = p1.jam * gaji_perjam;

        printf("\n\t\tGaji (per jam) \t\t: %d", p1.gaji_pokok);

    }else{
        p1.gaji_pokok = 8 * gaji_perjam;
        p1.gaji_lembur = (p1.jam - 8) * (8 * gaji_perjam);
        p1.total_gaji = p1.gaji_pokok + p1.gaji_lembur;

        printf("\n\t\tGaji Pokok \t\t: %d", p1.gaji_pokok);
        printf("\n\t\tGaji Lembur \t\t: %d", p1.gaji_lembur);
        printf("\n\t\tGaji Total (per jam) \t: %d", p1.total_gaji);
    }

    printf("\n\t\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4");
}

int main(){
	struct data_penghasilan p1;
	char ulang = '0';

	p1.gaji_pokok = p1.gaji_lembur = p1.total_gaji = p1.jam = 0;

	p1.jam = input_bil();

	if(p1.jam < 1 || p1.jam > 24){
        printf("\n\t\t\"Mohon menginput dengan benar (bilangan bulat positif 1-24)\"\n");
        getch();

		system ("cls");
		main();

	}else{
        hitung_gaji(p1);

        getch();
	}

	while(ulang == '0'){
        system("cls");

        judul();

        printf("\n\t\tApakah anda ingin kembali ke menu utama(y/t)? ");
        scanf("%s", &ulang);

        if(ulang == 'y' || ulang == 'Y'){
            main();

        }else if (ulang == 't' || ulang == 'T'){
            system("cls");

            printf("\t                                   \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf\n");
            printf("\t                                   \xb3          TERIMA KASIH         \xb3\n");
            printf("\t                                   \xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9\n");

        }else{
            ulang = '0';

            printf("\n\t\t\"Mohon menginput dengan benar (bilangan bulat positif)\"\n");

            getch();
        }
	}

	return 0;
}
