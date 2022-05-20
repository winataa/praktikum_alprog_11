#include <stdio.h> 
#include <string.h> 
#include <conio.h> 
#include <windows.h> 
#include <time.h> 
 

int opsi;
void waktuTgl();
void breakBaris();
void enkripsi();
void dekripsi();
void keluar();
char lanjut;
char teks[100];


int main(){ 
    /* system ("color a"); */
    system ("cls"); 
    waktuTgl(); 
    printf ("-------------------------------------------------------\n");
    printf ("|>>>>>>>>>|     ENCRYPTION & DECRYPTION     |<<<<<<<<<|\n");
	  printf ("-------------------------------------------------------\n");
    printf ("|    |         [1] Enkripsi                      |    |\n");
    printf ("|    |         [2] Dekripsi                      |    |\n");
  	printf ("|    |         [3] Keluar                        |    |\n");
  	printf ("|<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>|\n");
    printf ("Angka menu pilihan [1-3] : ");
    scanf  ("%d", &opsi);
    
        if (opsi==1){
            enkripsi();
        }

        else if (opsi==2){
          dekripsi();
          }

        else if (opsi==3){
          keluar();
        }

        else {
          breakBaris();
          printf("      [ERROR] Input HANYA bilangan bulat 1 sampai 3.\n");
          breakBaris();
          getch();
		      main();
        }
}

    void enkripsi(){ //Menu enkripsi
         char teks[100];
         int i, geser; 
         size_t a;

         system ("cls");
         printf ("\n-------------------------------------------------------\n");
         printf ("|>>>>>>>>>>>>>>>|      ENKRIPSI       |<<<<<<<<<<<<<<<|\n");
         printf ("-------------------------------------------------------\n\n");
         fflush(stdin); 
         breakBaris();
         printf ("Masukkan kata yang akan Anda Enkripsi : "); 
         gets(teks); 
         printf ("Masukkan kode enkripsi : "); 
         scanf ("%d", &geser); 
         a = strlen(teks); 
         breakBaris();
         printf ("Kata hasil Enkripsi : %c"); 
          for(i=0; i<a; i++){ 
             printf ("%c", teks[i]+geser); 
          }  
         printf ("\n");
         breakBaris();
         printf ("Mau encrypt/decrypt lagi? (y/t) : ");
         scanf  ("%s", &lanjut);
         printf ("\n");
         if     (lanjut == 'y'|| lanjut =='Y'){
         system ("cls");
         main();
         }
         else{
         system ("cls");
         exit (0);
         }
    } 
    

    void dekripsi(){ //Menu dekripsi
         char teks[100]; 
         int x,gser; 
         size_t y; 
         system ("cls");
         printf ("\n-------------------------------------------------------\n");
         printf ("|>>>>>>>>>>>>>>>|      DEKRIPSI       |<<<<<<<<<<<<<<<|\n");
         printf ("-------------------------------------------------------\n\n");
         fflush(stdin); 
         breakBaris();
         printf ("Masukkan kata yang ingin Anda Dekripsi : "); 
         gets (teks); 
         printf ("Masukkan kode dekripsi : ");
         scanf ("%d", &gser); 
         y = strlen(teks);
         breakBaris(); 
         printf("Kata asli hasil Dekripsi : "); 
            for(x=0; x<y; x++){ 
            printf("%c", (teks[x])-gser); 
         }
         printf ("\n"); 
         breakBaris();
         printf ("Mau encrypt/decrypt lagi? (y/t) : ");
         scanf  ("%s", &lanjut);
         printf ("\n");
         if     (lanjut == 'y'|| lanjut =='Y'){
         system ("cls");
         main();
         }
         else{
         system ("cls");
         exit (0);
         }
    }

    void keluar(){ //Keluar program
       int keluar = 2;
	     while (keluar == 2){
		   system("cls");
		
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
          waktuTgl();
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

    void breakBaris(){ //Hiasan memberi spacing terhadap baris
         printf ("|<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>|\n");
    } 

    void waktuTgl(){ //Hiasan menampilkan waktu tgl hari ini 
       time_t now; 
       time (&now); 
       printf ("%.24s\n", ctime (&now)); 
    } 
