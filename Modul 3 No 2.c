#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

  void breakBaris();
  void waktuTgl();
  void tambah();
  void kali();
  void trans();
  void keluar();
  char term;
  int matriks1[15][15], matriks2[15][15], hasil[15][15];
  int transpose [15][15];
  int i, j, k, m, n, p, q, jumlah = 0;
  int opsi;
  char lanjut;


  int main(){
	waktuTgl();
        printf ("-------------------------------------------------------\n");
        printf ("|>>>>>>>>>|     OPERASI HITUNG MATRIKS      |<<<<<<<<<|\n");
    	printf ("-------------------------------------------------------\n");
        printf ("|    |         [1] Menjumlahkan Matriks          |    |\n");
        printf ("|    |         [2] Mengalikan Matriks            |    |\n");
        printf ("|    |         [3] Mentranspose Matriks          |    |\n");
        printf ("|    |         [4] Keluar                        |    |\n");
        printf ("|<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>|\n");
        printf ("Angka menu pilihan [1-4] : ");
        scanf  ("%d", &opsi);

        if (opsi==1){
            tambah();
        }

        else if (opsi==2){
          kali();
          }

        else if (opsi==3){
          trans();
        }

        else if (opsi==4){
          keluar();
        }

        else {
          breakBaris();
          printf("      [ERROR] Input HANYA bilangan bulat 1 sampai 4.\n");
          breakBaris();
          getch();
			    main();
        }
  }


  void tambah(){ //Penjumlahan matrix
       breakBaris();
       printf ("Masukkan jumlah BARIS matriks: ");
       scanf  ("%d", &m);
       fflush(stdin);
       printf ("Masukkan jumlah KOLOM matriks: ");
       scanf  ("%d", &n);
       fflush(stdin);
       breakBaris();
       printf ("Masukkan elemen matriks PERTAMA: \n");
          for (i = 0; i < m; i++){
           for (j = 0; j < n; j++){
           scanf ("%d", &matriks1[i][j]);
           fflush(stdin);
           }
          }   
       breakBaris();
       printf ("Masukkan elemen matriks KEDUA: \n");
          for (i = 0; i < m; i++){
           for (j = 0; j < n; j++){
           scanf ("%d", &matriks2[i][j]);
           fflush(stdin);
           }
          }
       breakBaris();
       printf("Hasil penjumlahan matriks: \n");
         for (i = 0; i < m; i++){
          for (j = 0; j < n; j++){
           hasil[i][j] = matriks1[i][j] + matriks2[i][j];
           printf("%d ", hasil[i][j]);
            }
            printf("\n");
          }
       breakBaris();
       printf ("Mau ngitung lagi? (y/t) : ");
       scanf  ("%s", &lanjut);
       printf ("\n");
         if   (lanjut == 'y'|| lanjut =='Y'){
              system("cls");
              main();
         }
         else{
              exit (0);
         }
  }

  void kali(){ //Perkalian matrix
       breakBaris();
       printf ("Masukkan JUMLAH BARIS matriks PERTAMA: ");
       scanf  ("%d",&m);
       printf ("Masukkan jumlah KOLOM matriks PERTAMA: ");
       scanf  ("%d",&n);
       breakBaris();
       printf ("Masukkan jumlah BARIS matriks KEDUA: ");
       scanf  ("%d",&p);
       printf ("Masukkan jumlah KOLOM matriks KEDUA: ");
       scanf  ("%d",&q);

       if (n != p){
          breakBaris();
          printf ("      [ERROR] Matriks tidak dapat dikalikan satu sama lain.\n");
          breakBaris();
          }

       else {
          breakBaris();
          printf ("Masukkan elemen matriks PERTAMA: \n");
             for (i = 0; i < m; i++){
              for (j = 0; j < n; j++){
              scanf ("%d", &matriks1[i][j]);
              }
             }
          breakBaris();
          printf ("Masukkan elemen matriks KEDUA: \n");
             for (i = 0; i < p; i++){
              for (j = 0; j < q; j++){
              scanf ("%d", &matriks2[i][j]);
              }
             }
             for (i = 0; i < m; i++){
              for (j = 0; j < q; j++){
               for (k = 0; k < p; k++){
               jumlah = jumlah + matriks1[i][k] * matriks2[k][j];
               }
               hasil[i][j] = jumlah;
               jumlah = 0;
               }
              }
          breakBaris();
          printf ("Hasil perkalian matriks: \n");
             for (i = 0; i < m; i++){
              for (j = 0; j < n; j++){
              printf ("%d\t\n", hasil[i][j]);
              }
             }
          }
          breakBaris();
          printf ("\nMau ngitung lagi? (y/t):  ");
          scanf  ("%s", &lanjut);
            if   (lanjut == 'y'|| lanjut =='Y'){
            system("cls");
            main();
            }
            else {
            exit (0);
            }

  }

  void trans(){ //Transpose matrix
       breakBaris();
       printf ("Masukkan jumlah BARIS matriks: ");
       scanf  ("%d", &m);
       fflush(stdin);
       printf ("Masukkan jumlah KOLOM matriks: ");
       scanf  ("%d", &n);
       fflush(stdin);
       breakBaris();
       printf ("Masukkan ELEMEN matriks: \n");
           for(i = 0; i < m; i++){
            for(j = 0; j < n; j++){
            scanf ("%d", &matriks1[i][j]);
            }
           }
           for (i = 0; i < m; i ++){
            for(j = 0; j < n; j++){
            transpose[j][i] = matriks1[i][j];
            }
          }
       breakBaris();
       printf ("Hasil transpose matriks: \n");
          for (i = 0; i < n; i++){
           for(j = 0; j < m; j++){
           printf ("%d ",transpose[i][j]);
           if (j==2){
           printf ("\n");
           }
          }
         }
       breakBaris();
       printf ("\nMau ngitung lagi? (y/t) : ");
       scanf  ("%s", &lanjut);
         if   (lanjut == 'y'|| lanjut =='Y'){
              system("cls");
              main ();
         }
         else {
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
  
