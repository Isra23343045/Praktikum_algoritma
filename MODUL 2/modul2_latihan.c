/*
Nama : Muhammad Isra Alfattah 
NIM : 23343045
prodi : informatika 
*/

#include <stdio.h>

int main() {
    /* Program untuk meminta nama lengkap dan menyapa pengguna */
    char nama_depan[40], nama_tengah[20], nama_belakang[20];
    printf("hallo, siapa nama lengkapmu? \n");
    printf("masukkan nama depanmu: ");
    scanf("%s", nama_depan);
    printf("masukkan nama tengahmu: ");
    scanf("%s", nama_tengah);
    printf("masukkan nama belakangmu: ");
    scanf("%s", nama_belakang);
    printf("Selamat datang %s %s %s dalam pemrograman C ", nama_depan, nama_tengah, nama_belakang);
    printf("\n----------------------------------------------------------------------------------------\n");

    /* Program untuk menghitung nilai akhir berdasarkan input pengguna */
    char nama[20], prodi[20], fakultas[20];
    int NIM, nilai_praktikum, nilai_UTS, nilai_UAS;

    printf("\nhallo, silahkan masukkan nama anda: ");
    scanf("%s", nama);
    printf("silahkan masukkan nama prodi anda: ");
    scanf("%s", prodi);
    printf("silahkan masukkan nama fakultas anda: ");
    scanf("%s", fakultas);
    printf("silahkan masukkan NIM anda: ");
    scanf("%i", &NIM);
    printf("silahkan masukkan nilai praktikum anda: ");
    scanf("%i", &nilai_praktikum);
    printf("silahkan masukkan nilai UTS anda: ");
    scanf("%i", &nilai_UTS);
    printf("silahkan masukkan nilai UAS anda: ");
    scanf("%i", &nilai_UAS);
   
    printf("nama                :%s\n", nama);
    printf("prodi               :%s\n", prodi);
    printf("fakultas            :%s\n", fakultas);
    printf("NIM                 :%i\n", NIM);
    printf("nilai praktikum     :%i\n", nilai_praktikum);
    printf("nilai UTS           :%i\n", nilai_UTS);
    printf("nilai UAS           :%i\n", nilai_UAS);
    
    /* Menghitung nilai akhir berdasarkan bobot tertentu */
    nilai_praktikum = 0.3 * nilai_praktikum; // Bobot nilai praktikum 30%
    nilai_UTS = 0.3 * nilai_UTS; // Bobot nilai UTS 30%
    nilai_UAS = 0.4 * nilai_UAS; // Bobot nilai UAS 40%
    double nilai_Akhir = nilai_praktikum + nilai_UAS + nilai_UTS;
    printf("nilai akhir         :%2lf\n", nilai_Akhir);
    printf("\n----------------------------------------------------------------------------------------\n");

    /* Program untuk menghitung luas segitiga */
    int alas = 8, tinggi = 5, luas;
    luas =  0.5 * alas * tinggi;
    printf("menghitung luas segitiga jika diketahui panjang alas = 8 cm dan tinggi = 5 cm \n");
    printf("alas = 1/2 X alas X tinggi\n");
    printf("alas = 1/2 X 8 X 5\n");
    printf("alas = %i", luas);
    printf("\n----------------------------------------------------------------------------------------\n");
    
    /* Program untuk menghitung luas persegi panjang */
    int panjang = 10, lebar = 5, Luas;
    Luas =  panjang * lebar;
    printf("menghitung luas persegi panjang jika diketahui panjang panjang = 10 cm dan lebar = 5 cm \n");
    printf("alas = panjang X lebar\n");
    printf("alas = 10 X 5\n");
    printf("alas = %i", Luas);
    printf("\n----------------------------------------------------------------------------------------\n");

    return 0;
}
