#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int convert(char s[]){
    int i, p, tanda, ns;
    int hasil=0;

    if (s[0] == '-'){
        tanda = -1;
    }
    if(tanda == -1){
        p = 1;
    }else{
        p = 0;
    }

    for (i=p; s[i] != '\0'; i++){
        ns = s[i] - 48;
        hasil = hasil * 10 + ns;
    }
    if (tanda == -1){
        hasil = hasil - (hasil*2);
    }
    return hasil;
}

int validdes(char s[],int pjg){
    int i=0;
    if(s[0] == '-'){
        i=1;
    }
    for (;i<pjg;i++){
        if (s[i]!='0'&&s[i]!='1'&&s[i]!='2'&&s[i]!='3'&&s[i]!='4'&&s[i]!='5'&&s[i]!='6'&&s[i]!='7'&&s[i]!='8'&&s[i]!='9'){
            printf("\"Mohon masukkan input berupa integer(tanpa tanda minus(-))\"\n");
            printf("Masukan inputan pengganti : ");
            return 0;
        }
    }
    return 1;
}

int inputdes(){
    char sint[50];
    int panjang, n=0, cek=0;

    while(n<=0){
        while (cek!=1){
            scanf("%s", sint);
            panjang = strlen(sint);
            cek = validdes(sint,panjang);
        }
        n = convert(sint);
        if (n<=0){
            printf("\"Mohon masukkan bilangan desimal\"\n");
            printf("Masukan inputan pengganti : ");
            cek=0;
        }
    }
    return n;
}

struct data{
    char nama[100];
    int nilai;
};

int validName(char nama[]){
    int i;
    for (i=0; nama[i]!= '\0'; i++){
        if(nama[i]<='Z' && nama[i]>='A'){
            continue;
        }else if(nama[i]<='z' && nama[i]>='a'){
            continue;
        }else{
            printf("\nInputan Salah\nHanya boleh huruf");
            printf("\nMasukkan inputan ulang: ");
            return -1;
        }
    }
    return 1;
}

int main()
{
    int  menu, j, i=0, n=0, cek=0, nilai;
    struct data siswa[100], temp;
    char nama[100],ulang;


    printf("Modul 4 - No. 5 \n");
    printf("\tFile Nilai\n\n");
    printf("1. Input Nilai ke asistenin.txt\n");
    printf("2. Export Sorting asistenin.txt ke asistenout.txt\n");
    printf("3. Keluar\n");
    printf("\nPilih menu : ");
    menu = inputdes();
    system("cls");

    if (menu==1){
        printf("Menginput nama dan nilai\n");
        printf("Masukkan Nama : ");
        //memanggil validasi nama
        while (cek!=1){
            scanf("%s", nama);
            cek = validName(nama);
            fflush(stdin);
        }
        printf("\nMasukkan Nilai : ");
        nilai = inputdes();

        FILE *ptradd = fopen("asistenin.txt","a");
        fprintf(ptradd, "\n%s\n%d", nama, nilai);
        printf("Nama dan Nilai telah berhasil dimasukkan");
        fclose(ptradd);

    }else if(menu==2){

        FILE *ptr = fopen ("asistenin.txt", "r");
        if (!ptr){
            printf("tidak ada file");
        }else{
            while(!feof(ptr)){
                fscanf(ptr,"%[^\n]\n\n",&siswa[i].nama);
                fscanf(ptr, "\n%d\n\n", &siswa[i].nilai);
                fflush(stdin);
                n++;
                i++;
            }
            fclose(ptr);
        }
        //bubble sort
        for (i=0; i<n-1; i++){
            for (j=0; j<n-1; j++){
                if (siswa[j+1].nilai > siswa[j].nilai){
                    temp = siswa[j];
                    siswa[j] = siswa[j+1];
                    siswa[j+1] = temp;
                }
            }
        }
        FILE *ptrnew = fopen("asistenout.txt", "w");
        for (i=0; i<n; i++){
            fprintf(ptrnew,"%d. %s %d\n",i+1, siswa[i].nama, siswa[i].nilai);
        }
        printf("\nExport file asistenin.txt yang sudah terurut telah berhasil\n");

    }else if(menu==3){
        exit(0);
    }else{
        printf(" \"Menu yang anda pilih tidak terdaftar\"\n");
        printf("Silahkan masukkan input sesuai di menu\n\n");
        main();
    }

    printf("\nAda lagi? (y/t) : ");
    scanf("%s", &ulang);
    if (ulang=='y'){
        system("cls");
        main();

    }else if(ulang=='t'){
        return 0;
    }else{
        printf("error input\n\n");
        main();
    }

    return 0;
}
