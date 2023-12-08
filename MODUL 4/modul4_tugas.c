/*Nama      : Muhammad Isra Al fattah
  NIM       : 23343045
  Prodi     : Informatika*/
#include <stdio.h>
#include <stdint.h>

int main() {
    /* 1. Program konversi detik ke jam, menit, dan detik */
    int jam, menit, detik;
    int input_jam = 3700; // Total detik yang akan dikonversi
    printf("Program konversi detik\n========================\n");
    printf("Waktu yang diinput = %i\n", input_jam);
    
    // Menghitung jam, menit, dan detik dari input detik
    jam = input_jam / 3600; // 1 jam = 3600 detik
    menit = (input_jam % 3600) / 60; // Sisa detik setelah diubah menjadi jam, kemudian dibagi untuk menit
    detik = (input_jam % 3600) % 60; // Sisa detik setelah diubah menjadi jam dan menit
    printf("\nHasil = %i jam, %i menit, %i detik\n", jam, menit, detik);

    /* 2. Program kasir barang */
    int harga_barang, jumlah_barang, harga_total;
    char nama_pembeli[20], nama_barang[20];
    printf("\nProgram kasir\n=====================\n");
    
    // Meminta inputan dari pengguna
    printf("Masukkan nama pembeli  : ");
    gets(nama_pembeli);
    printf("Masukkan nama barang   : ");
    gets(nama_barang);
    printf("Masukkan harga barang  : ");
    scanf("%i", &harga_barang);
    printf("Masukkan jumlah barang : ");
    scanf("%i", &jumlah_barang);
    
    // Menghitung harga total dari barang yang dibeli
    harga_total = harga_barang * jumlah_barang;
    printf("Nama            : %s\n", nama_pembeli);
    printf("Nama barang     : %s\n", nama_barang);
    printf("Harga barang    : %i\n", harga_barang);
    printf("Jumlah barang   : %i\n", jumlah_barang);
    printf("Harga total     : %i\n", harga_total);

    /* 3. Program menghitung nilai akhir */
    int nilai_presensi = 85, nilai_praktek = 65, nilai_uts = 80, nilai_uas = 75, nilai_akhir;
    printf("\nProgram menghitung nilai akhir\n==============\n");
    printf("Nilai presensi  : %i\n", nilai_presensi);
    printf("Nilai praktek   : %i\n", nilai_praktek);
    printf("Nilai uts       : %i\n", nilai_uts);
    printf("Nilai uas       : %i\n", nilai_uas);
    printf("======================\n");
    
    // Menghitung nilai akhir berdasarkan bobot tertentu
    nilai_akhir = (nilai_presensi * 0.1) + (nilai_praktek * 0.2) + (nilai_uts * 0.3) + (nilai_uas * 0.4);
    printf("Nilai akhir kamu adalah %i\n", nilai_akhir);

    /* 4. Program rental film */
    int tarif_1jam = 15000;
    int durasi = 3;
    int harga;
    printf("\nProgram rental film\n==========\n");
    printf("Tarif 1 jam       : %i\n", tarif_1jam);
    printf("Total durasi kamu : %i\n", durasi);
    
    // Menghitung total harga untuk waktu yang disewa
    harga = (1 * tarif_1jam) + (1 * tarif_1jam * 0.5) + (tarif_1jam * 0.5);
    printf("Harga total       : %i\n", harga);

    return 0;
}
