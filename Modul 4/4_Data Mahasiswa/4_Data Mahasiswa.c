#include <stdio.h>
#include <string.h>
#include <windows.h>

int validdes(char s[],int pjg){
    int i=0;
    if(s[0] == '-'){
        i=1;
    }
    for (i=0;i<pjg;i++){
        if (s[i]!='0'&&s[i]!='1'&&s[i]!='2'&&s[i]!='3'&&s[i]!='4'&&s[i]!='5'&&s[i]!='6'&&s[i]!='7'&&s[i]!='8'&&s[i]!='9'){
            printf("\nMohon masukkan bilangan desimal dan tanpa tanda -\n");
            printf("Masukan bilangan pengganti: ");
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
            printf("Mohon masukkan bilangan desimal\n");
            printf("Masukan bilangan pengganti : ");
            cek=0;
        }
    }
    return n;
}

int convert(char s[]){
    int i;
    int ns;
    int hasil=0;
    int p;
    int tanda;

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

struct mahasiswa{
    int nim;
    char nama[100];
};

void resettemp(struct mahasiswa temp[]){
    int i;
    for(i = 0; i < 100; i++){
        temp[i].nim = 0;
    }
}

int readtemp(struct mahasiswa temp[]){
    int jumlah = 0;

    FILE *fp1 = fopen("database.txt","r");
    if(!fp1){
        jumlah = 1;
    }else{
        while(!feof(fp1)){
	   	    fscanf(fp1,"%d#%[^\n]\n", &temp[jumlah].nim, &temp[jumlah].nama);
            jumlah++;
        }
    }
	fclose(fp1);

    return jumlah;
}

void inputfile(struct mahasiswa user){
    FILE *fp2 = fopen("database.txt", "a");
	fprintf(fp2,"%d#%s\n", user.nim, user.nama);
	fclose(fp2);
	printf("\n%d - %s\nData telah dimasukkan\n", user.nim, user.nama);
}

void outputfile(){
    char read;
    FILE *fp2=fopen("database.txt", "r");
    if(!fp2){
        printf("File tidak ditemukan!\n");
    }else{
        read = fgetc(fp2);
        while (read != EOF){
            printf ("%c", read);
            read = fgetc(fp2);
        }
        fclose(fp2);
    }
}

int validasi(struct mahasiswa user, struct mahasiswa temp[], int jarak){
    int i;
    int cek;

    for(i = 0; i < jarak; i++){
        if(user.nim == temp[i].nim){
            cek = 0;
            break;
        }else{
            cek = 1;
        }
    }
    return cek;
}

int main(){
    int menu;
    int cek;
    int jarak;
    char ulang;
    struct mahasiswa user;
    struct mahasiswa temp[100];
    resettemp(temp);

    jarak = readtemp(temp);

    printf("Modul 4 - No. 4 \n");
    printf("Program Sistem Informasi Data Mahasiswa\n\n");
    printf("Menu:\n");
    printf("1. Menambahkan data pada file.\n");
    printf("2. Membaca data pada file.\n");
    printf("Masukkan pilihan: ");
    menu=inputdes();
    system("cls");

    switch(menu){
    case 1:
        printf("Masukkan data di bawah ini!\n");
        printf("NIM\t: ");
        user.nim=inputdes();
        fflush(stdin);
        cek=validasi(user, temp, jarak);
        while(cek==0){
            system("cls");
            printf("Masukkan data di bawah ini!\n");
            printf("NIM sudah terdaftar.\n");
            printf("NIM\t: ");
            user.nim=inputdes();
            fflush(stdin);
            cek=validasi(user, temp, jarak);
        }
        printf("Nama\t: ");
        scanf("%[^\n]s", &user.nama);
        inputfile(user);
        break;
    case 2:
        printf("Membaca file database.txt\n\n");
        outputfile();
        break;
    default:
        printf("Maaf salah input\n");
    }

    printf("\nApakah anda ingin kembali ke menu awal? (y/t)\n");
    scanf("%s", &ulang);
    if(ulang== 'y'){
        system("cls");
        main();
    }else if(ulang== 't'){
        return 0;
    }else{
        printf("Maaf input salah.");
    }

    return 0;
}
