#include <stdio.h>
#include <string.h>

// Deklarasi struct pertama
typedef struct tanggal_lahir {
  int hari;
  int bulan;
  int tahun;
} TanggalLahir;

// Deklarasi nested struct
typedef struct pasien {
  char nama[50];
  TanggalLahir tanggal_lahir;
  char alamat[100];
  int id_pasien;
} Pasien;

int main() {
  // Deklarasi array of struct
  Pasien pasien[10];

  // Mengisi data pasien pertama
  strcpy(pasien[0].nama, "Doremi Solasido");
  pasien[0].tanggal_lahir.hari = 17;
  pasien[0].tanggal_lahir.bulan = 8;
  pasien[0].tanggal_lahir.tahun = 1990;
  strcpy(pasien[0].alamat, "Jl. Sudirman No. 12");
  pasien[0].id_pasien = 12345;

  // Menampilkan data pasien pertama
  printf("Nama          : %s\n", pasien[0].nama);
  printf("Tanggal Lahir : %d-%d-%d\n", pasien[0].tanggal_lahir.hari, pasien[0].tanggal_lahir.bulan, pasien[0].tanggal_lahir.tahun);
  printf("Alamat        : %s\n", pasien[0].alamat);
  printf("ID Pasien     : %d\n", pasien[0].id_pasien);

  return 0;
}
