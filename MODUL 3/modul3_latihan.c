/*Nama      : Muhammad Isra Al fattah
  NIM       : 23343045
  Prodi     : Informatika*/
#include <stdio.h>

int main() {
    /*1.)Buatlah sebuah program konversi mata uang Rupiah (Rp) ke mata uang
    Dollar ($)! jika, 1$ = Rp. 14.250.
    Kasus:
    Anda mempunyai jasa money changer, kemudian ada yang meminta
    penukaran uang rupiah ke dolar, berapa dollar yang harus anda berikan
    kepada si penukar untuk Rp. 2.500.000?
    Hitung menggunakan program yang anda buat!*/
    
    
    /* Program untuk konversi mata uang Rupiah ke Dollar */
    int rupiah = 2500000;
    const double dollar = 14.250;
    printf("Dollar yang harus anda berikan kepada si penukar untuk Rp. 2.500.000 \n");
    int hasil_konversi = rupiah / dollar; // Menghitung konversi ke dollar
    printf("Dollar yang harus anda berikan adalah : %i dollar\n", hasil_konversi);
    printf("-----------------------------------------------------------------------------\n");

 /* 2.)Buatlah sebuah program konversi suhu dengan inputan data dari
    keyboard. Dengan ketentuan Rumus sebagai Berikut:
    Kelvin k = c + 273.15
    Fahrenheit f = (c x 1.8) + 32
    Reamur r = c x 0.8
    Hasil keluaran output adalah sebagai berikut:
    Input Suhu (Celcius) =
    Suhu dalam Kelvin =
    Suhu dalam Fahrenheit =
    Suhu dalam Reamur = */


    /* Program untuk konversi suhu dari Celcius ke Kelvin, Fahrenheit, dan Reamur */
    float k, f, r, c;
    
    printf("Silahkan masukkan suhu (Celcius) yang akan dikonversi: \n");
    scanf("%f", &c);
    k = c + 273.15; // Konversi ke Kelvin
    f = (c * 1.8) + 32; // Konversi ke Fahrenheit
    r = c * 0.8; // Konversi ke Reamur

    printf("Input Suhu (Celcius)    = %f\n", c);
    printf("Suhu dalam Kelvin       = %.2f \n", k);
    printf("Suhu dalam Fahrenheit   = %.2f\n", f);
    printf("Suhu dalam Reamur       = %.2f\n", r);
    printf("-----------------------------------------------------------------------------\n");


    /*3.)Diketahui sebuah bola basket memiliki diameter 12 cm. Buatlah
    program dalam bahasa C untuk menghitung dan menampilkan volume
    dan luas permukaan dari bola tersebut. Gunakan konstanta untuk nilai
    Phi!*/
    /* Program untuk menghitung volume dan luas permukaan dari sebuah bola basket */
    
    
    int diameter = 12, R;
    R = diameter / 2;
    const float phi = 3.14;
    float volume, luas;

    printf("Menghitung volume permukaan bola \n");
    printf("Volume = 4/3 X Phi X r X r X r\n");
    printf("Volume = 4/3 X 3.14 X 6 X 6 X 6\n");
    volume = 4 / 3 * phi * R * R * R; // Menghitung volume bola
    printf("Volume = %.2f\n", volume);

    printf("Menghitung luas permukaan bola \n");
    printf("Luas = 4 X Phi X r X r \n");
    printf("Luas = 4 X 3.14 X 6 X 6 \n");
    luas = 4 * phi * R * R; // Menghitung luas permukaan bola
    printf("Luas = %.2f\n", luas);
    printf("-----------------------------------------------------------------------------\n");

    return 0;
}