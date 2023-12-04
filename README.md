# Project Title
Muhammad Isra Al Fattah
23343045
Informatika

Repositori ini berisi penjelasan dari tiap tiap latihan pada modul modul yang telah dipelajari pada semester 1 
[![Build Status](https://travis-ci.org/anfederico/clairvoyant.svg?branch=master)](https://travis-ci.org/anfederico/clairvoyant)
![Dependencies](https://img.shields.io/badge/dependencies-up%20to%20date-brightgreen.svg)
[![License](https://img.shields.io/badge/license-MIT-blue.svg)](https://opensource.org/licenses/MIT)

## Table of contents

* [Penjelasan Tugas Modul 2](#Penjelasan-Tugas-Modul-2)
  * [Soal 1](#Soal-1)
  * [Soal 2](#Soal-2)
  * [Soal 3](#Soal-3)
  * [Soal 4](#Soal-4)
* [Penjelasan Tugas Modul 3](#Penjelasan Tugas Modul-3)
  * [Soal 1](#Soal-1)
  * [Soal 2](#Soal-2)
  * [Soal 3](#Soal-3)
* [Tugas Modul 3](#roadmap)
* [Tugas Modul 4](#development-guide)
* [Tugas Modul 5](#deployment)
* [Tugas Modul 6](#contact)
* [Tugas Modul 7](#copyright)


## Penjelasan Tugas Modul 2

### Soal 1

```c
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

```
* `char nama_depan[40], nama_tengah[20], nama_belakang[20];` :  Ini adalah pendefinisian variabel-variabel bertipe `char` yang digunakan untuk menyimpan nama depan, tengah, dan belakang dari pengguna. Variabel-variabel ini adalah array karakter dengan kapasitas maksimum yang telah ditentukan.
* `printf("masukkan nama depanmu: ");`: Ini adalah perintah untuk mencetak pesan meminta input dari pengguna untuk nama depan.
* `scanf("%s", nama_depan);`: Ini adalah perintah untuk menerima input dari pengguna. `%s` dalam `scanf` digunakan untuk menerima string dari pengguna dan nilai akan disimpan dalam variabel `nama_depan`.Seterusnya, proses yang sama dilakukan untuk nama tengah dan nama belakang dengan `printf` untuk pesan masukan dan `scanf` untuk menerima input.
* `printf("Selamat datang %s %s %s dalam pemrograman C ", nama_depan, nama_tengah, nama_belakang);`: Ini adalah perintah untuk mencetak pesan selamat datang kepada pengguna dengan menggunakan nilai yang telah dimasukkan sebelumnya untuk nama depan, tengah, dan belakang.

### Soal 2
```c
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
```
* **deklarasi** **Variabel**
 ```c
    char nama[20], prodi[20], fakultas[20];
    int NIM, nilai_praktikum, nilai_UTS, nilai_UAS;
```
Ini mendeklarasikan variabel yang akan digunakan program.Variabel `nama` , `prodi` , dan `fakultas` bertipe data `char` dan memiliki panjang maksimal 20 karakter.Variabel `NIM`,`nilai_praktikum` ,`nilai_UTS`, dan `nilai_UAS` bertipe data `int`

* **Input** **Data**
```c
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
   
```

Ini adalah bagian di mana program meminta pengguna untuk memasukkan data. `printf` digunakan untuk menampilkan pesan kepada pengguna, dan `scanf` digunakan untuk menerima input yang diberikan oleh pengguna dari keyboard. `%s` digunakan untuk string, sedangkan `%i` digunakan untuk input integer.

* **Output** **Data**
```c
    printf("nama                :%s\n", nama);
    printf("prodi               :%s\n", prodi);
    printf("fakultas            :%s\n", fakultas);
    printf("NIM                 :%i\n", NIM);
    printf("nilai praktikum     :%i\n", nilai_praktikum);
    printf("nilai UTS           :%i\n", nilai_UTS);
    printf("nilai UAS           :%i\n", nilai_UAS);
```

Bagian ini mencetak kembali data yang dimasukkan pengguna menggunakan `printf`. `%s` digunakan untuk mencetak string, sedangkan `%i` digunakan untuk mencetak nilai integer.
* **Menghitung** **Nilai**
```c
    // Menghitung nilai akhir dengan bobot tertentu
    nilai_praktikum = 0.3 * nilai_praktikum; // Bobot nilai praktikum 30%
    nilai_UTS = 0.3 * nilai_UTS; // Bobot nilai UTS 30%
    nilai_UAS = 0.4 * nilai_UAS; // Bobot nilai UAS 40%
    double nilai_Akhir = nilai_praktikum + nilai_UAS + nilai_UTS;
    printf("nilai akhir         :%2lf\n", nilai_Akhir);

```
Bagian ini menghitung nilai akhir berdasarkan bobot yang telah ditentukan (30% nilai praktikum, 30% nilai UTS, dan 40% nilai UAS).Nilai akhir dihitung dengan menggunakan persamaan tertentu dan kemudian ditampilkan menggunakan `printf`.

### Soal 3
```c
    int alas = 8, tinggi = 5, luas;
    luas =  0.5 * alas * tinggi;
    printf("menghitung luas segitiga jika diketahui panjang alas = 8 cm dan tinggi = 5 cm \n");
    printf("alas = 1/2 X alas X tinggi\n");
    printf("alas = 1/2 X 8 X 5\n");
    printf("alas = %i", luas);

```

* **Deklarasi Variabel dan Perhitungan Luas**
```c
    int alas = 8, tinggi = 5, luas;
    luas = 0.5 * alas * tinggi;
```
`alas` dan `tinggi` diinisialisasi masing-masing dengan nilai 8 dan 5.Variabel luas akan menyimpan hasil perhitungan luas segitiga yang dihitung dengan rumus luas segitiga: `0.5 * alas * tinggi`.
* **Output Hasil Perhitungan**
```c
   printf("menghitung luas segitiga jika diketahui panjang alas = 8 cm dan tinggi = 5 cm \n");
    printf("alas = 1/2 X alas X tinggi\n");
    printf("alas = 1/2 X 8 X 5\n");
    printf("alas = %i", luas);
```
Program menampilkan informasi terkait perhitungan luas segitiga dengan panjang alas dan tinggi yang telah diberikan.Baris terakhir `(printf("alas = %i", luas);)` akan mencetak hasil perhitungan luas segitiga yang telah disimpan di dalam variabel luas.

Ini adalah kode yang melakukan perhitungan luas segitiga dengan panjang alas 8 dan tinggi 5, lalu menampilkan langkah-langkah perhitungannya serta hasilnya dalam bentuk teks melalui fungsi `printf`.
### Soal 4
```c
    int panjang = 10, lebar = 5, Luas;
    Luas =  panjang * lebar;
    printf("menghitung luas persegi panjang jika diketahui panjang panjang = 10 cm dan lebar = 5 cm \n");
    printf("alas = panjang X lebar\n");
    printf("alas = 10 X 5\n");
    printf("alas = %i", Luas);
```
* **Deklarasi Variabel dan Perhitungan Luas**
```c
    int panjang = 10, lebar = 5, Luas;
    Luas = panjang * lebar;
```

`panjang` dan `lebar` diinisialisasi masing-masing dengan nilai 10 dan 5.Variabel `Luas` akan menyimpan hasil perhitungan luas persegi panjang yang dihitung dengan rumus `panjang * lebar`.
* **Output Hasil Perhitungan**
```c
   printf("menghitung luas persegi panjang jika diketahui panjang panjang = 10 cm dan lebar = 5 cm \n");
    printf("alas = panjang X lebar\n");
    printf("alas = 10 X 5\n");
    printf("alas = %i", Luas);
```
Program menampilkan informasi terkait perhitungan luas persegi panjang dengan panjang dan lebar yang telah diberikan.
Baris terakhir `(printf("alas = %i", Luas);)` akan mencetak hasil perhitungan luas persegi panjang yang telah disimpan di dalam variabel `Luas`.
Jadi, kode ini menghitung luas persegi panjang dengan panjang 10 dan lebar 5, lalu menampilkan langkah-langkah perhitungannya serta hasilnya dalam bentuk teks melalui fungsi `printf`.

## Penjelasan Tugas Modul 3

### Soal 1
```c
#include <stdio.h>

int main() {
    /* Program untuk konversi mata uang Rupiah ke Dollar */
    int rupiah = 2500000;
    const double dollar = 14.250;
    printf("Dollar yang harus anda berikan kepada si penukar untuk Rp. 2.500.000 \n");
    int hasil_konversi = rupiah / dollar; // Menghitung konversi ke dollar
    printf("Dollar yang harus anda berikan adalah : %i dollar\n", hasil_konversi);
```
* **Deklarasi Variabel**
```c
    int rupiah = 2500000;
    const double dollar = 14.250;
```
Variabel `rupiah` diinisialisasi dengan nilai 2500000, yang merupakan jumlah mata uang dalam Rupiah yang akan dikonversi ke Dollar.Konstanta `dollar` dideklarasikan sebagai `double` dan diinisialisasi dengan nilai 14.250, merupakan nilai tukar dari Rupiah ke Dollar.
* **Output informasi Konversi**
```c
printf("Dollar yang harus anda berikan kepada si penukar untuk Rp. 2.500.000 \n");
```
Program menampilkan informasi tentang konversi mata uang dari Rupiah ke Dollar dengan nilai awal 2.500.000 Rupiah.
* **Perhitungan Konversi Mata Uang**
```c
int hasil_konversi = rupiah / dollar; // Menghitung konversi ke dollar
```
Dilakukan operasi pembagian `rupiah` dengan `dollar` untuk menghitung jumlah Dollar yang setara dengan jumlah Rupiah yang diberikan.
* **Output Hasil Konversi**
```c
printf("Dollar yang harus anda berikan adalah : %i dollar\n", hasil_konversi);
```
Program menampilkan hasil konversi dalam Dollar yang harus diberikan kepada penukar dengan menggunakan `%i` untuk mencetak variabel `hasil_konversi`.Jadi, program ini menghitung dan menampilkan jumlah Dollar yang setara dengan 2.500.000 Rupiah berdasarkan nilai tukar yang telah ditentukan.

### Soal 2
```c
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
```
* **Deklarasi Variabel**
```c
float k, f, r, c;
```
Variabel `k`, `f`, `r`, dan `c` dideklarasikan sebagai variabel bertipe float untuk menyimpan nilai suhu dalam Kelvin, Fahrenheit, Reamur, dan Celsius secara berturut-turut.
* **Input Suhu dari pengguna**
```c
printf("Silahkan masukkan suhu (Celcius) yang akan dikonversi: \n");
scanf("%f", &c);
```
Program meminta pengguna untuk memasukkan suhu dalam Celsius menggunakan `printf`, lalu menyimpan nilai tersebut dalam variabel `c` menggunakan `scanf`.

* **Konversi ke Suhu Lainnya**
```c
k = c + 273.15; // Konversi ke Kelvin
f = (c * 1.8) + 32; // Konversi ke Fahrenheit
r = c * 0.8; // Konversi ke Reamur
```
Dilakukan konversi suhu dari Celsius ke Kelvin, Fahrenheit, dan Reamur dengan rumus konversi yang sesuai.

* **Output Hasil Konversi**
```c
printf("Input Suhu (Celcius)    = %f\n", c);
printf("Suhu dalam Kelvin       = %.2f \n", k);
printf("Suhu dalam Fahrenheit   = %.2f\n", f);
printf("Suhu dalam Reamur       = %.2f\n", r);
```
Program menampilkan nilai suhu yang diinputkan dalam Celsius, serta nilai konversinya dalam Kelvin, Fahrenheit, dan Reamur menggunakan `printf`.Jadi, program ini memungkinkan pengguna untuk memasukkan suhu dalam Celsius, lalu mengkonversinya ke suhu dalam skala Kelvin, Fahrenheit, dan Reamur, dan menampilkan hasilnya.

### Soal 3
```c
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
```
* **Deklarasi Variabel dan Konstanta**
```c
    int diameter = 12, R;
    R = diameter / 2;
    const float phi = 3.14;
    float volume, luas;
```
Variabel `diameter` diinisialisasi dengan nilai 12, merepresentasikan diameter bola.
Variabel `R` digunakan untuk menyimpan nilai jari-jari bola yang dihitung sebagai setengah dari diameter `(diameter / 2)`.
Konstanta `phi` dideklarasikan dengan nilai 3.14 sebagai representasi dari pi (π).
Variabel `volume` dan `luas` dideklarasikan untuk menyimpan hasil perhitungan volume dan luas permukaan bola.

* **Perhitungan Volume Bola**
```c
    printf("Menghitung volume permukaan bola \n");
    printf("Volume = 4/3 X Phi X r X r X r\n");
    printf("Volume = 4/3 X 3.14 X 6 X 6 X 6\n");
    volume = 4 / 3 * phi * R * R * R; // Menghitung volume bola
    printf("Volume = %.2f\n", volume);
```
Program menampilkan informasi tentang perhitungan volume bola.Rumus volume bola dituliskan tetapi perhitungan tidak benar karena ekspresi `4 / 3` akan dievaluasi sebagai `1` dalam operasi integer. Perlu pembenahan dalam rumus ini.

* **Perhitungan Luas Permukaan Bola**
```c
    printf("Menghitung luas permukaan bola \n");
    printf("Luas = 4 X Phi X r X r \n");
    printf("Luas = 4 X 3.14 X 6 X 6 \n");
    luas = 4 * phi * R * R; // Menghitung luas permukaan bola
    printf("Luas = %.2f\n", luas);
```
Program menampilkan informasi tentang perhitungan luas permukaan bola.Perhitungan luas permukaan bola dilakukan dengan menggunakan rumus yang sesuai.Meskipun tujuannya adalah menghitung volume dan luas permukaan bola, perhitungan volume bola perlu diperbaiki karena penggunaan bilangan bulat `(4 / 3)` yang menghasilkan nilai bulat. Idealnya, pemakaian nilai pecahan atau penerapan tipe data yang sesuai perlu diperhatikan untuk perhitungan yang akurat.
