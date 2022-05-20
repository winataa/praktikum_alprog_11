#include <stdio.h>
#include <stdlib.h>

void selesei() {
    printf (">>>>>>>>>>>>>>>>>>>>>>>>>> TERIMAKASIH <<<<<<<<<<<<<<<<<<<<<<<<<\n");
  }
  void admin(){
  int kehadiran;
  int tugas;
  int nim;
  int nilaitugas_1;
  int nilaitugas_2;
  int nilaitugas_3;
  int nilai_quis;
  int nilai_uts;
  int nilai_uas;
  int pilihan;
  int nilai_angka;
  int nilai_huruf;
  char looping;
  char input;

  printf (">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
  printf ("|||                        INPUTLAH DATA DI BAWAH INI                       |||\n");
  printf (">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
  printf ("||| Nomer Induk Mahasiswa    :");
  scanf  ("%d", &nim);
  printf ("||| Jumlah Kehadiran         :");
  scanf  ("%d", &kehadiran);
  printf ("||| Nilai Tugas Pertama      :");
  scanf  ("%d", &nilaitugas_1);
  printf ("||| Nilai Tugas Kedua        :");
  scanf  ("%d", &nilaitugas_2);
  printf ("||| Nilai Tugas Ketiga       :");
  scanf  ("%d", &nilaitugas_3);
  printf ("||| Nilai Quiz               :");
  scanf  ("%d", &nilai_quis);
  printf ("||| Nilai UTS                :");
  scanf  ("%d", &nilai_uts);
  printf ("||| Nilai UAS                :");
  scanf  ("%d", &nilai_uas);

  if (kehadiran <= 15) {
    nilai_angka = (kehadiran * 5/100) + ((nilaitugas_1 + nilaitugas_2 + nilaitugas_3)/3 * 20/100) + (nilai_quis * 15/100) + (nilai_uts * 30/100) + (nilai_uas * 30/100);

     if (nilai_angka >= 0 && nilai_angka < 45){
       printf ("Nilai angka    : %d\n", nilai_angka);
       printf ("Nilai huruf    : E\n");
       }
     else if (nilai_angka >= 45 && nilai_angka <50){
       printf ("Nilai angka    : %d\n", nilai_angka);
       printf ("Nilai huruf    : D\n");
     }
     else if (nilai_angka >= 50 && nilai_angka <55){
       printf ("Nilai angka    : %d\n", nilai_angka);
       printf ("Nilai huruf    : D+\n");
       }
    else if (nilai_angka >= 55 && nilai_angka <60){
       printf ("Nilai angka    : %d\n", nilai_angka);
       printf ("Nilai huruf    : C\n");
      }
    else if (nilai_angka >= 60 && nilai_angka <65){
       printf ("Nilai angka    : %d\n", nilai_angka);
       printf ("Nilai huruf    : C+\n");
      }
    else if (nilai_angka >= 65 && nilai_angka <75){
       printf ("Nilai angka    : %d\n", nilai_angka);
       printf ("Nilai huruf    : B\n");
      }
    else if (nilai_angka >= 75 && nilai_angka < 80){
       printf ("Nilai angka    : %d\n", nilai_angka);
       printf ("Nilai huruf    : B+\n");
      }
    else if (nilai_angka >= 80 && nilai_angka <100) {
       printf ("Nilai angka    : %d\n", nilai_angka);
       printf ("Nilai huruf    : A\n");
      }
    else {
      printf (">>>>>>>>>>>>>>>> Terjadi Kesalahan <<<<<<<<<<<<<<< \n");
      printf (">>>>>>>>>>>>>>>>>>>>>>  MENU  <<<<<<<<<<<<<<<<<<<< \n");
      printf ("\t1. Menu Admin\n");
      printf ("\t2. Exit\n");

      do{
      printf ("Input: ");
      scanf ("%s", &input);
      if (input == '1'){
        admin();
      }
      else if (input == '2'){
        selesei();
      }
      else {
        printf ("Silahkan input angka 1 atau 2!!!\n");
      }
      } while (1);
    }
  }
  else {
      printf (">>>>>>> TERJADI KESALAHAN! MAKSIMAL INPUT 15 KARAKTER <<<<<< \n");
      printf (">>>>>>>>>>>>>>>>>>>>>>>>>>  MENU  <<<<<<<<<<<<<<<<<<<<<<<<< \n");
      printf ("\t1. Menu Admin\n");
      printf ("\t2. Exit\n");

      do{
      printf ("Input: ");
      scanf ("%s", &input);
      if (input == '1'){
        admin();
      }
      else if (input == '2'){
        selesei();
      }
      else {
        printf ("Silahkan input angka 1 atau 2!!!\n");
      }
      } while (1);

  }

}
int main (){
  int kehadiran;
  int tugas;
  int nim;
  int nilaitugas_1;
  int nilaitugas_2;
  int nilaitugas_3;
  int nilai_quis;
  int nilai_uts;
  int nilai_uas;
  int pilihan;
  int nilai_angka;
  int nilai_huruf;
  char looping;

  printf (">>>>>>>>>>>>>>>>>>>>>>>>> PROGRAM NILAI AKHIR MAHASISWA <<<<<<<<<<<<<<<<<<<<<<<\n");
  printf ("|||                                KELOMPOK 11                              |||\n");
  printf (">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
  printf ("|||                     Tekan 'Enter' untuk Melanjutkan..                   |||\n");
  printf (">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
  getchar();
  system ("cls");
  admin();
  }
