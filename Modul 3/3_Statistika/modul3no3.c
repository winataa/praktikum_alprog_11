#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void header(){

    printf("\t\t================================================\n");
    printf("\t\t=                 Statistika                   =\n");
    printf("\t\t=                 Penghitung                   =\n");
    printf("\t\t=            Mean, Median, dan Modus           =\n");
    printf("\t\t================================================\n");
}

void headervalid(){

    printf("\t\t================================================\n");
    printf("\t\t=          INPUTAN HANYA BERUPA ANGKA          =\n");
    printf("\t\t================================================\n");


}

void separator(){

    printf("\t\t================================================\n");
}

void sort_array(int inputnilai[], int banyakdata){
    int i;
    int key;
    int j;

    for(i = 1 ; i < banyakdata ; i++){
        key = inputnilai[i];
        j = i-1;

        while(j >= 0 && inputnilai[j] > key){
            inputnilai[j+1] = inputnilai[j];
            j = j-1;
        }
        inputnilai[j+1] = key;
    }
}

void print_array(int banyakdata, int inputnilai[]){
    int i;

    printf("\t\t[ ");

    for (i = 0; i < banyakdata; i++){
        printf("%d ", inputnilai[i]);
    }

    printf("]\n");
}

void rumusmean(int banyakdata, int inputnilai[]){
    float nilaimean;

    for(int i = 0 ; i < banyakdata ; i++){
        nilaimean = nilaimean + inputnilai[i];
    }

    nilaimean = nilaimean / banyakdata;

    printf("\t\tNilai Mean   : %.2f\n", nilaimean);
}

void rumusmedian(int banyakdata, int inputnilai[]){
    int i;
    float nilaimedian;

    i = ((banyakdata + 1) / 2);

    if(banyakdata % 2 == 0){
        nilaimedian = (inputnilai[i-1] + inputnilai[i]);
        nilaimedian = nilaimedian / 2;

    }else{
        nilaimedian = inputnilai[i-1];
    }

    printf("\t\tNilai Median : %.2f", nilaimedian);
}

void rumusmodus(int banyakdata, int inputnilai[]){
    int nilaibilangan;
    int temp;
    int modus;
    int i;
    int j;
    int totalbilangan = 0;

    for(i=0 ; i < banyakdata ; i++){
        nilaibilangan = inputnilai[i];
        temp = 0;

        for(j = 0 ; j < banyakdata ; j++){
            if(nilaibilangan == inputnilai[j]){
                temp = temp + 1;
            }
        }

            if(temp > totalbilangan){
                totalbilangan = temp;
                modus = inputnilai[i];
            }
    }
    
    printf("\n\t\tNilai Modus  : %d sebanyak %d kali\n", modus, totalbilangan);
}

void menukembali(){

    char kembali;

    printf("\t\tApakah anda ingin menghitung ulang? (y/t)?\n\t\t=");
    scanf("%s", &kembali);

    switch (kembali)
    {
    case 'y': 
        fflush(stdin);
        main();
        break;
    case 't':
        system("cls");
        printf("\t\t================================================\n");
        printf("\t\t=         PERHITUNGAN TELAH SELESAI            =\n");
        printf("\t\t================================================\n");
        break;
    default:
        system("cls");
        printf("\t\t================================================\n");
        printf("\t\t=          INPUTAN HANYA t / y !!              =\n");
        printf("\t\t================================================\n");
        printf("\t\tTekan apa saja yang ada di keyboard untuk kembali\n");
        getch();
        menukembali();
        break;
    }

}

int main(){
    int i;
    int banyakdata;
    int nol = 0;
    int nilaimean;
    int status;
    

        system("cls");
        header();

        printf("\t\tMasukan Jumlah Bilangan yang akan diinput: ");
        status = scanf("%d", &banyakdata);

        if (status == 0)
        {
            fflush(stdin);
            headervalid();
            printf("\t\tTekan apa saja yang ada di keyboard");
            getch();
            main();
        }
        else
        {
            separator();
            int inputnilai[banyakdata];

            for(i = 0 ; i < banyakdata ; i++){
            
                printf("\t\tMasukkan Bilangan Ke-%d : ", nol+1);
                scanf("%d", &inputnilai[i]);
                nol++;
            } 
                separator();

                printf("\t\tBilangan Berurut\n");
                sort_array(inputnilai, banyakdata);
                print_array(banyakdata, inputnilai);

                separator();

                rumusmean(banyakdata, inputnilai);

                rumusmedian(banyakdata, inputnilai);

                rumusmodus(banyakdata, inputnilai);

                separator();

            menukembali();
        }

    return 0;
    }
