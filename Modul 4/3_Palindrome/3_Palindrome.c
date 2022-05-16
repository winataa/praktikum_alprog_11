#include <stdio.h>
#include <string.h>

void judul(){
    printf("\t\xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf\n");
    printf("\t\xb3***********              *********        MODUL  IV  NOMOR 3         *********             ***********\xb3\n");
    printf("\t\xb3*******************          *********       KELOMPOK 11        *********         ********************\xb3\n");
    printf("\t\xb3***********              *********        PROGRAM KAMUS KATA         *********             ***********\xb3\n");
    printf("\t\xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9\n");
}

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

        printf("\n\t\t1. Input kata");
        printf("\n\t\t2. Lihat data kamuskata.txt");
        printf("\n\t\t3. Keluar\n");

        printf("\n\t\tPilih menu : ");
        scanf("%d%c", &input, &validator);  // %c untuk mengambil enter (line feed [ASCII 10] atau '\n') dan disimpan di "validator" setelah menginput bilangan di "input"
                                            // jika mengandung huruf maka "validator" akan tetap mengandung '0'

        if(validasi_bil(input, validator) == 1){
            return input;

        }else{
            input = -1;

            printf("\n\t\t\"Mohon menginput dengan benar (bilangan bulat 1-3)\"\n");

            getch();
        }
    }
}

int cek_palindrom(char huruf[], int panjang_kata){
    int i = 0, hasil = 0, cek = 0, j = panjang_kata - 1; // panjang kata - 1 -> agar sesuai dengan indeks kata

    for(i = 0; i < panjang_kata / 2 ; i++){    // Untuk mengecek huruf di ujung (ujung depan dan belakang)
        // Secara berulang menuju huruf tengah dari setiap ujung
        if(huruf[i] == huruf[j-i]){    // Cek apakah huruf ujung depan saat ini sama dengan huruf ujung belakang saat ini
            cek++;
        }
    }

    if(cek == i){  // Cek jika jumlah kata yang sama (cek) == total kata yang dicek (i)
        hasil = 1;

    }else{
        hasil = 0;
    }

    return hasil;
}

int validasi_kata(char kata[]){
    for(int i = 0; kata[i] != '\0'; i++){
        if(kata[i] > 'Z' || kata[i] < 'A'){ // Cek apakah inputan tidak sesuai
            printf("\n\t\tInputan salah (hanya menerima inputan huruf)");
            printf("\n\t\tMasukkan inputan ulang: ");

            return 0;   // Kembalikaan 0 jika inputan tidak sesuai
        }
    }
    return 1;   // Kembalikaan 1 jika inputan sesuai
}

void masuk_kata(){
    int panjang_kata = 0, x = 0, cek = 0, i = 0, abjad[26] = {0};
    char kata[100], pesan[20];

    printf("\n\t\tMasukkan kata : ");
    while(cek != 1){
        scanf("%s", kata);
        strupr(kata); // merubah kata menjadi huruf kapital

        cek = validasi_kata(kata);
    }

    panjang_kata = strlen(kata);

    //cek palindrom
    cek = cek_palindrom(kata, panjang_kata);
    if (cek == 1){
        strcpy(pesan, "Palindrom");
    }else{
        strcpy(pesan, "Bukan Palindrom");
    }

    FILE *ptr_kamus_kata = fopen("kamuskata.txt","a");

    fprintf(ptr_kamus_kata, "%s(%d) : ", kata, panjang_kata);
    printf("\n\t\t%s(%d) : ", kata, panjang_kata);

    for(i = 0; i < panjang_kata; i++){
        if(kata[i] >= 65 && kata[i] <= 90){ // ASCI A-Z (65-90)
            x = kata[i] - 65; // (65 s/d 90) - 65 (ASCII huruf A) agar sesuai abjad (A-Z) (0-25)
            abjad[x]++; // Menambah abjad (huruf) jika ada huruf (A-Z) yang dipakai (>0)
        }
    }

    for(i = 0; i < 26; i++){
        if(abjad[i] != 0){
           fprintf(ptr_kamus_kata, "%c=%d ", i + 'A', abjad[i]);
           printf("%c=%d ", i + 'A', abjad[i]); // i + 'A' = (0 s/d 25) + 65 -> untuk konversi ASCII menjadi char (A-Z)
        }
    }

    fprintf(ptr_kamus_kata, ": %s\n", pesan);
    printf(": %s", pesan);

    printf("\n\n\t\t\"Kata telah berhasil dimasukkan\"");

    fclose(ptr_kamus_kata);

    getch();
}

void lihat_kamus(){
    char file_kata[100];

    FILE *ptr_kamus_kata = fopen ("kamuskata.txt", "r");

    printf("\n\t\tData file kamuskata.txt\n\n");

    if (!ptr_kamus_kata){
        printf("\n\t\tFile tidak ditemukan");

    }else{
        while(!feof(ptr_kamus_kata)){
            fscanf(ptr_kamus_kata,"%[^\n]\n",&file_kata);
            fflush(stdin);
            printf("\t\t%s\n",file_kata);
        }
    }
    fclose(ptr_kamus_kata);

    getch();
}

int main(){
    int  pilih_menu = 0;

    while(pilih_menu != 3){
        pilih_menu = input_bil();

        system("cls");

        judul();

        if(pilih_menu == 1){
            masuk_kata();

        }else if(pilih_menu == 2){
            lihat_kamus();

        }else if(pilih_menu == 3){
            pilih_menu = 3;

        }else{
            pilih_menu = 0;

            printf("\n\t\t\"Menu yang anda pilih tidak ada\"\n");
            printf("\n\t\tSilahkan menginput sesuai pilihan menu\n\n");

            getch();
        }
    }

    system("cls");

    printf("\t                                   \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf\n");
    printf("\t                                   \xb3          TERIMA KASIH         \xb3\n");
    printf("\t                                   \xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9\n");

    return 0;
}
