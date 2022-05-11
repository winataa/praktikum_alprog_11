#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void selesai();
void zodiak();

void selesai(){ // fungsi untuk menampilkan tampilan jika sudah exit atau keluar
printf (">>>>>>>>>>>>>>>>>>>>>> TERIMAKASIH <<<<<<<<<<<<<<<<<<<<<<\n");
}

void zodiak(){ //fungsi untuk menampilkan menu zodiak
  char cekenter; // berfungsi untuk mengecek enter
  char input; // berfungsi untuk menginputkan menu
  int tgl; // berfugsi sebagai tipe data dari variabel tanggal
  int bln; // berfugsi sebagai tipe data dari variabel bulan

printf (">>>>>>>>>>>>>>    Masukkan Data di Bawah Ini    <<<<<<<<<<<<<<<<\n");
printf ("Masukkan tanggal lahir Anda        : ");
scanf  ("%d", &tgl);
printf ("Masukkan angka bulan lahir Anda    : ");
scanf  ("%d", &bln);



if (tgl >= 21 && tgl <= 31 && bln == 3 || tgl >= 1 && tgl <= 19 && bln == 4){
  printf ("----------------------------------------------------------------\n");
  printf ("                            ZODIAK ARIES                        \n");
  printf (">>>>>>>>>>>>>>>>>>>>>>> 21 MARET - 19 APRIL <<<<<<<<<<<<<<<<<<<<\n");
  printf ("----------------------------------------------------------------\n");
}
else if (tgl >= 20 && tgl <= 30 && bln == 4 || tgl >= 1 && tgl <= 20 && bln == 5){
  printf ("----------------------------------------------------------------\n");
  printf ("                           ZODIAK TAURUS                        \n");
  printf (">>>>>>>>>>>>>>>>>>>>>>>> 20 APRIL - 20 MEI <<<<<<<<<<<<<<<<<<<<<\n");
  printf ("----------------------------------------------------------------\n");
}
else if (tgl >= 21 && tgl <= 31 && bln == 5 || tgl >= 1 && tgl <= 20 && bln == 6){
  printf ("----------------------------------------------------------------\n");
  printf ("                            ZODIAK GEMINI                       \n");
  printf (">>>>>>>>>>>>>>>>>>>>>>>> 21 MEI - 20 JUNI <<<<<<<<<<<<<<<<<<<<<<\n");
  printf ("----------------------------------------------------------------\n");
}
else if (tgl >= 21 && tgl <= 30 && bln == 6 || tgl >= 1 && tgl <= 22 && bln == 7){
  printf ("----------------------------------------------------------------\n");
  printf ("                            ZODIAK CANCER                       \n");
  printf (">>>>>>>>>>>>>>>>>>>>>>>> 21 JUNI - 22 JULI <<<<<<<<<<<<<<<<<<<<<\n");
  printf ("----------------------------------------------------------------\n");
}
else if (tgl >= 23 && tgl <= 31 && bln == 7 || tgl >= 1 && tgl <= 22 && bln == 8){
  printf ("----------------------------------------------------------------\n");
  printf ("                              ZODIAK LEO                        \n");
  printf (">>>>>>>>>>>>>>>>>>>>>>> 23 JULI - 22 AGUSTUS <<<<<<<<<<<<<<<<<<<\n");
  printf ("----------------------------------------------------------------\n");
}
else if (tgl >= 23 && tgl <= 31 && bln == 8 || tgl >= 1 && tgl <= 22 && bln == 9){
  printf ("----------------------------------------------------------------\n");
  printf ("                            ZODIAK VIRGO                        \n");
  printf (">>>>>>>>>>>>>>>>>>>>> 23 AGUSTUS - 22 SEPTEMBER <<<<<<<<<<<<<<<<\n");
  printf ("----------------------------------------------------------------\n");
}
else if (tgl >= 23 && tgl <= 30 && bln == 9 || tgl >= 1 && tgl <= 22 && bln == 10){
  printf ("----------------------------------------------------------------\n");
  printf ("                            ZODIAK LIBRA                        \n");
  printf (">>>>>>>>>>>>>>>>>>>> 23 SEPTEMBER - 22 OKTOBER <<<<<<<<<<<<<<<<<\n");
  printf ("----------------------------------------------------------------\n");
}
else if (tgl >= 23 && tgl <= 31 && bln == 10 || tgl >= 1 && tgl <= 21 && bln == 11){
  printf ("----------------------------------------------------------------\n");
  printf ("                          ZODIAK SCORPIO                        \n");
  printf (">>>>>>>>>>>>>>>>>>>>> 23 OKTOBER - 21 NOVEMBER <<<<<<<<<<<<<<<<<\n");
  printf ("----------------------------------------------------------------\n");
}
else if (tgl >= 22 && tgl <= 30 && bln == 11 || tgl >= 1 && tgl <= 21 && bln == 12){
  printf ("----------------------------------------------------------------\n");
  printf ("                          ZODIAK SAGITARIUS                     \n");
  printf (">>>>>>>>>>>>>>>>>>>> 22 NOVEMBER - 21 DESEMBER <<<<<<<<<<<<<<<<<\n");
  printf ("----------------------------------------------------------------\n");
}
else if (tgl >= 22 && tgl <= 31 && bln == 12 || tgl >= 1 && tgl <= 19 && bln == 1){
  printf ("----------------------------------------------------------------\n");
  printf ("                          ZODIAK CAPRICORN                      \n");
  printf (">>>>>>>>>>>>>>>>>>>>> 22 DESEMBER - 19 JANUARI <<<<<<<<<<<<<<<<<\n");
  printf ("----------------------------------------------------------------\n");
}
else if (tgl >= 20 && tgl <= 31 && bln == 1 || tgl >= 1 && tgl <= 18 && bln == 2) {
  printf ("----------------------------------------------------------------\n");
  printf ("                           ZODIAK AQUARIUS                      \n");
  printf (">>>>>>>>>>>>>>>>>>>>> 21 JANUARI - 18 FEBRUARI <<<<<<<<<<<<<<<<<\n");
  printf ("----------------------------------------------------------------\n");
}
else if (tgl >= 19 && tgl <= 29 && bln == 2 || tgl >= 1 && tgl <= 20 && bln == 3){
  printf ("----------------------------------------------------------------\n");
  printf ("                           ZODIAK PISCES                        \n");
  printf (">>>>>>>>>>>>>>>>>>>>> 19 FEBRUARI - 20 MARET <<<<<<<<<<<<<<<<<<<\n");
  printf ("----------------------------------------------------------------\n");
}
else {
  printf ("----------------------------------------------------------------\n");
  printf (">>>>>>>>>>>>>>>>>>>> Salah Menginputkan Data <<<<<<<<<<<<<<<<<<<\n");
  printf ("----------------------------------------------------------------\n");
}

  do{
  printf (">>>>>>>>>>>>>>>>>>>>>>>>>>>>>> MENU <<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
  printf ("\t1. Menu Zodiak\n");
  printf ("\t2. Exit\n");
  printf ("                              Input:                              ");
  if(((scanf(" %c%c", &input, &cekenter)) != 2 || cekenter != '\n') && clean()){
    printf (">>>>>>>>>>>>> silahkan input angka 1 atau 2 <<<<<<<<<<<<<\n");
    }
  else {
    if (input == '1'){
    zodiak();
    break;
  }
    else if (input == '2'){
    selesai();
    break;
  }
    else {
    printf (">>>>>>>>>>>>> silahkan input angka 1 atau 2 <<<<<<<<<<<<<\n");
    }
  }
}while(1);

  }

int clean(){
  // berfungsi untuk mengosongkan karakter-karakter yang tersimpan di dalam buffer hingga bertemu karakter newline
	while(getchar() != '\n');
	return 1;
}

int main (){ // menu utama
printf ("----------------------------------------------------------------\n");
printf (">>>>>>>>>>>>>>>>>>>>>>>>>>>> ZODIAK  <<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
printf ("----------------------------------------------------------------\n");
printf ("                           KELOMPOK 11                          \n");
printf ("----------------------------------------------------------------\n");
printf ("                          tap 'Enter'...                        \n");
printf ("----------------------------------------------------------------\n");
getchar ();
system ("pause");
system ("cls");
zodiak();
}
