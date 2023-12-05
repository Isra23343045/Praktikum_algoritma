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
  * [Modul 2 Soal 1](#M2-Soal-1)
  * [Modul 2 Soal 2](#M2-Soal-2)
  * [Modul 2 Soal 3](#M2-Soal-3)
  * [Modul 2 Soal 4](#M2-Soal-4)
* [Penjelasan Tugas Modul 3](#Penjelasan-Tugas-Modul-3)
  * [Modul 3 Soal 1](#M3-Soal-1)
  * [Modul 3 Soal 2](#M3-Soal-2)
  * [Modul 3 Soal 3](#M3-Soal-3)
* [Penjelasan Tugas Modul 4](#Penjelasan-Tugas-Modul-4)
  * [Modul 4 Soal 1](#M4-Soal-1)
  * [Modul 4 Soal 2](#M4-Soal-2)
  * [Modul 4 Soal 3](#M4-Soal-3)
  * [Modul 4 Soal 4](#M4-Soal-4)
* [Penjelasan Tugas Modul 5](#Penjelasan-Tugas-Modul-5)
  * [Modul 5 Soal 1](#M5-Soal-1)
  * [Modul 5 Soal 2](#M5-Soal-2)
  * [Modul 5 Soal 3](#M5-Soal-3)
  * [Modul 5 Soal 4](#M5-Soal-4)
* [Penjelasan Tugas Modul 6](#Penjelasan-Tugas-Modul-6)
  * [Modul 6 Soal 1](#M6-Soal-1)
  * [Modul 6 Soal 2](#M6-Soal-2)
  * [Modul 6 Soal 3](#M6-Soal-3)
  * [Modul 6 Soal 4](#M6-Soal-4)
* [Penjelasan Tugas Modul 7](#Penjelasan-Tugas-Modul-7)
  * [Modul 7 Soal 1](#M7-Soal-1)
  * [Modul 7 Soal 2](#M7-Soal-2)
  * [Modul 7 Soal 3](#M7-Soal-3)
* [Penjelasan Tugas Modul 8](#Penjelasan-Tugas-Modul-8)
  * [Modul 8 Soal 1](#M8-Soal-1)
  * [Modul 8 Soal 2](#M8-Soal-2)
  * [Modul 8 Soal 3](#M8-Soal-3)
  * [Modul 8 Soal 4](#M8-Soal-4)
* [Penjelasan Tugas Modul 9](#Penjelasan-Tugas-Modul-9)
  * [Modul  Soal 1](#M9-Soal-1)
  * [Modul 9 Soal 2](#M9-Soal-2)
  * [Modul 9 Soal 3](#M9-Soal-3)
* [Penjelasan Tugas Modul 10](#Penjelasan-Tugas-Modul-10)
  * [Modul 10 Soal 1](#M10-Soal-1)
  * [Modul 10 Soal 2](#M10-Soal-2)
  * [Modul 10 Soal 3](#M10-Soal-3)
* [Source Code Masing-masing Modul](#Source-Code-Masing-masing-Modul)

## Penjelasan Tugas Modul 2

### M2 Soal 1

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

### M2 Soal 2
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

### M2 Soal 3
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
### M2-Soal 4
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

### M3 Soal 1
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

### M3 Soal 2
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

### M3 Soal 3
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



## Penjelasan Tugas Modul 4

### M4 Soal 1
```c
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
```
* **Deklarasi Variabel**
```c
    int jam, menit, detik;
    int input_jam = 3700; // Total detik yang akan dikonversi
```
Variabel `jam`, `menit`, dan `detik` dideklarasikan sebagai tipe data integer untuk menyimpan hasil konversi waktu.`input_jam` diinisialisasi dengan nilai 3700, mewakili total detik yang akan dikonversi.
* **Output Informasi Awal**
```c
    printf("Program konversi detik\n========================\n");
    printf("Waktu yang diinput = %i\n", input_jam);
```
Program menampilkan informasi awal, judul program dan nilai waktu (dalam detik) yang akan dikonversi.
* **Konversi detik ke Jam,Menit,Detik**
```c
    jam = input_jam / 3600; // 1 jam = 3600 detik
    menit = (input_jam % 3600) / 60; // Sisa detik setelah diubah menjadi jam, kemudian dibagi untuk menit
    detik = (input_jam % 3600) % 60; // Sisa detik setelah diubah menjadi jam dan menit
```
Program mengkonversi total detik `(input_jam)` ke jam, menit, dan detik menggunakan operasi pembagian dan modulo.
Operasi `/` dan `%` digunakan untuk membagi total detik menjadi jam, menit, dan detik yang sesuai.

* **Output Hasil Konversi**
```c
    printf("\nHasil = %i jam, %i menit, %i detik\n", jam, menit, detik);
```
Program menampilkan hasil konversi waktu dari detik ke jam, menit, dan detik menggunakan `printf`.
Jadi, program ini menerima jumlah detik sebagai input dan mengonversinya menjadi jam, menit, dan detik, lalu menampilkan hasil konversi tersebut.

### M4 Soal 2
```c
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
```
* **Deklarasi Variabel**
```c
    int harga_barang, jumlah_barang, harga_total;
    char nama_pembeli[20], nama_barang[20];
```
Variabel `harga_barang`, `jumlah_barang`, dan `harga_total` adalah variabel bertipe integer yang digunakan untuk menyimpan harga per barang, jumlah barang, dan total harga.Variabel `nama_pembeli` dan `nama_barang` adalah array karakter dengan ukuran 20, yang digunakan untuk menyimpan nama pembeli dan nama barang.

* **Input Data Dari User**
```c
    printf("Masukkan nama pembeli  : ");
    gets(nama_pembeli);
    printf("Masukkan nama barang   : ");
    gets(nama_barang);
    printf("Masukkan harga barang  : ");
    scanf("%i", &harga_barang);
    printf("Masukkan jumlah barang : ");
    scanf("%i", &jumlah_barang);
```
Program meminta pengguna untuk memasukkan nama pembeli, nama barang, harga barang, dan jumlah barang menggunakan fungsi `printf`, `gets`, dan `scanf`.

* **Perhitungan Harga Total**
```c
    harga_total = harga_barang * jumlah_barang;
```
Program menghitung total harga `(harga_total)` dari barang yang dibeli dengan mengalikan harga per barang `(harga_barang)` dengan jumlah barang `(jumlah_barang)`.

* **Output Hasil Transaksi**
```c
    printf("Nama            : %s\n", nama_pembeli);
    printf("Nama barang     : %s\n", nama_barang);
    printf("Harga barang    : %i\n", harga_barang);
    printf("Jumlah barang   : %i\n", jumlah_barang);
    printf("Harga total     : %i\n", harga_total);
```
Program menampilkan detail transaksi termasuk nama pembeli, nama barang, harga per barang, jumlah barang, dan total harga menggunakan `printf`.Jadi, kode ini memungkinkan pengguna untuk memasukkan informasi terkait pembelian barang, menghitung total harga berdasarkan harga per barang dan jumlah yang dibeli, lalu menampilkan detail transaksi tersebut.


### M4 Soal 3
```c
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
```

* **Deklarasi Variabel Dan Output Informasi Awal**
```c
    int nilai_presensi = 85, nilai_praktek = 65, nilai_uts = 80, nilai_uas = 75, nilai_akhir;
    printf("\nProgram menghitung nilai akhir\n==============\n");
    printf("Nilai presensi  : %i\n", nilai_presensi);
    printf("Nilai praktek   : %i\n", nilai_praktek);
    printf("Nilai uts       : %i\n", nilai_uts);
    printf("Nilai uas       : %i\n", nilai_uas);
    printf("======================\n");
```
Variabel `nilai_presensi`, `nilai_praktek`, `nilai_uts`, dan `nilai_uas` diinisialisasi dengan nilai-nilai tertentu yang mewakili hasil evaluasi.Program menampilkan informasi awal yang akan dihitung, yaitu nilai-nilai dari presensi, praktek, UTS, dan UAS.

* **Perhitungan Nilai Akhir berdasarkan Bobot**
```c
    nilai_akhir = (nilai_presensi * 0.1) + (nilai_praktek * 0.2) + (nilai_uts * 0.3) + (nilai_uas * 0.4);
    printf("Nilai akhir kamu adalah %i\n", nilai_akhir);
```
Program menghitung nilai akhir berdasarkan bobot yang telah ditentukan (presensi 10%, praktek 20%, UTS 30%, dan UAS 40%).Nilai akhir dihitung dengan menjumlahkan setiap nilai yang telah dikalikan dengan bobotnya.Hasil perhitungan nilai akhir kemudian ditampilkan menggunakan `printf`.Jadi, kode ini menghitung nilai akhir berdasarkan bobot yang telah ditentukan untuk presensi, praktek, UTS, dan UAS, lalu menampilkan nilai akhir tersebut.

### M4 Soal 4
```c
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
```

* **Deklarasi Variabel Dan Output Informasi Awal**
```c
    int tarif_1jam = 15000;
    int durasi = 3;
    int harga;
    printf("\nProgram rental film\n==========\n");
    printf("Tarif 1 jam       : %i\n", tarif_1jam);
    printf("Total durasi kamu : %i\n", durasi);
```
Variabel `tarif_1jam` diinisialisasi dengan nilai 15000, mewakili tarif per jam untuk rental film.Variabel `durasi` diinisialisasi dengan nilai 3, mewakili durasi waktu dalam jam.Variabel `harga` digunakan untuk menyimpan total harga sewa film.Program menampilkan informasi awal, yaitu tarif per jam dan total durasi sewa film.
* **Perhitungan Harga Total untuk Waktu yang Disewa**
```c
    harga = (1 * tarif_1jam) + (1 * tarif_1jam * 0.5) + (tarif_1jam * 0.5);
    printf("Harga total       : %i\n", harga);
```
Program menghitung total harga sewa film berdasarkan durasi waktu yang telah ditentukan.Pertama, terdapat tarif penuh untuk 1 jam `(1 * tarif_1jam)`.Kemudian ada diskon 50% untuk jam kedua `(1 * tarif_1jam * 0.5)`.Terakhir, diskon 50% juga diberikan untuk jam ketiga `(tarif_1jam * 0.5)`.Hasil perhitungan dari total harga disimpan dalam variabel `harga` dan kemudian ditampilkan menggunakan `printf`.Jadi, kode ini menghitung total harga sewa film berdasarkan tarif per jam dan durasi waktu, memberikan diskon setengah harga untuk jam kedua dan ketiga.


## Penjelasan Tugas Modul 5

### M5 Soal 1
```c
// Program kalkulator sederhana dengan operasi penjumlahan, pengurangan, perkalian, pembagian, dan hasil bagi
    char pilihan;
    int angkaA, angkaB;

    printf("Program Aritmatika\n");
    printf(" a) Penjumlahan\n b) Pengurangan\n c) Perkalian\n d) Pembagian\n e) Hasil Bagi\n");
    scanf(" %c", &pilihan);

    switch (toupper(pilihan)) {
        case 'A':
            // Operasi penjumlahan
            printf("Input angka 1: ");
            scanf("%i", &angkaA);
            printf("Input angka 2: ");
            scanf("%i", &angkaB);
            printf("Hasil dari %i + %i = %i\n", angkaA, angkaB, angkaA + angkaB);
            break;
        case 'B':
            // Operasi pengurangan
            printf("Input angka 1: ");
            scanf("%i", &angkaA);
            printf("Input angka 2: ");
            scanf("%i", &angkaB);
            printf("Hasil dari %i - %i = %i\n", angkaA, angkaB, angkaA - angkaB);
            break;
        case 'C':
            // Operasi perkalian
            printf("Input angka 1: ");
            scanf("%i", &angkaA);
            printf("Input angka 2: ");
            scanf("%i", &angkaB);
            printf("Hasil dari %i * %i = %i\n", angkaA, angkaB, angkaA * angkaB);
            break;
        case 'D':
            // Operasi pembagian
            printf("Input angka 1: ");
            scanf("%i", &angkaA);
            printf("Input angka 2: ");
            scanf("%i", &angkaB);
            printf("Hasil dari %i / %i = %i\n", angkaA, angkaB, angkaA / angkaB);
            break;
        case 'E':
            // Operasi hasil bagi
            printf("Input angka 1: ");
            scanf("%i", &angkaA);
            printf("Input angka 2: ");
            scanf("%i", &angkaB);
            printf("Hasil sisa dari %i dan %i = %i\n", angkaA, angkaB, angkaA % angkaB);
            break;
        default:
            printf("Masukkan pilihan yang benar!\n");
            break;
    }
```
* **Deklarasi Variabel dan Menampilkan Pilihan**
```c
    char pilihan;
    int angkaA, angkaB;

    printf("Program Aritmatika\n");
    printf(" a) Penjumlahan\n b) Pengurangan\n c) Perkalian\n d) Pembagian\n e) Hasil Bagi\n");
    scanf(" %c", &pilihan);
```
Variabel `pilihan` untuk menyimpan pilihan operasi aritmatika yang dipilih.Variabel `angkaA` dan `angkaB` untuk menyimpan angka yang akan dioperasikan.Program menampilkan menu pilihan operasi aritmatika menggunakan `printf` dan meminta pengguna untuk memilih dengan `scanf`.

* **Switch Case untuk Menjalankan Operasi**
```c
switch (toupper(pilihan)) {
    case 'A':
        // Operasi penjumlahan
        // ...
        break;
    case 'B':
        // Operasi pengurangan
        // ...
        break;
    case 'C':
        // Operasi perkalian
        // ...
        break;
    case 'D':
        // Operasi pembagian
        // ...
        break;
    case 'E':
        // Operasi hasil bagi
        // ...
        break;
    default:
        printf("Masukkan pilihan yang benar!\n");
        break;
}
```
Switch case menggunakan nilai dari variabel `pilihan` untuk menentukan operasi aritmatika mana yang akan dijalankan berdasarkan pilihan pengguna.Setiap case (A-E) menjalankan operasi sesuai dengan pilihan yang dipilih,

meminta pengguna untuk memasukkan dua angka yang akan dioperasikan, dan menampilkan hasil operasi sesuai dengan jenis operasi aritmatika yang dipilih.
    
* **Penjelasan Operasi Di Setiap Case**
  * Case 'A':Operasi Penjumlahan
  ```c
  case 'A':
            // Operasi penjumlahan
            printf("Input angka 1: ");
            scanf("%i", &angkaA);
            printf("Input angka 2: ");
            scanf("%i", &angkaB);
            printf("Hasil dari %i + %i = %i\n", angkaA, angkaB, angkaA + angkaB);
            break;
  ```
  Program meminta pengguna untuk memasukkan dua angka (`angkaA` dan `angkaB`), lalu menampilkan hasil penjumlahan.
  * Case 'B': Operasi Pengurangan
  ```c
  case 'B':
            // Operasi pengurangan
            printf("Input angka 1: ");
            scanf("%i", &angkaA);
            printf("Input angka 2: ");
            scanf("%i", &angkaB);
            printf("Hasil dari %i - %i = %i\n", angkaA, angkaB, angkaA - angkaB);
            break;
  ```
  Program meminta pengguna untuk memasukkan dua angka (`angkaA` dan `angkaB`), lalu menampilkan hasil pengurangan.
  
  * Case 'C': Operasi Perkalian
  ```c
  case 'C':
            // Operasi perkalian
            printf("Input angka 1: ");
            scanf("%i", &angkaA);
            printf("Input angka 2: ");
            scanf("%i", &angkaB);
            printf("Hasil dari %i * %i = %i\n", angkaA, angkaB, angkaA * angkaB);
            break;
  ```
  Program meminta pengguna untuk memasukkan dua angka (`angkaA` dan `angkaB`), lalu menampilkan hasil Perkalian.
    
  * Case 'D': Operasi Pembagian
  ```c
  case 'D':
            // Operasi pembagian
            printf("Input angka 1: ");
            scanf("%i", &angkaA);
            printf("Input angka 2: ");
            scanf("%i", &angkaB);
            printf("Hasil dari %i / %i = %i\n", angkaA, angkaB, angkaA / angkaB);
            break;
  ```
  Program meminta pengguna untuk memasukkan dua angka (`angkaA` dan `angkaB`), lalu menampilkan hasil Pembagian.

  * Case 'E': Operasi Hasil Bagi(Modulus)
  ```c
  case 'E':
            // Operasi hasil bagi
            printf("Input angka 1: ");
            scanf("%i", &angkaA);
            printf("Input angka 2: ");
            scanf("%i", &angkaB);
            printf("Hasil sisa dari %i dan %i = %i\n", angkaA, angkaB, angkaA % angkaB);
            break;
  ```
  Program meminta pengguna untuk memasukkan dua angka (`angkaA` dan `angkaB`), lalu menampilkan hasil Bagi(Modulus)

  * Default Case: Pilihan Tidak Valid
  ```c
  default:
    printf("Masukkan pilihan yang benar!\n");
    break;
  ```
  Jika pengguna memilih opsi selain A-E, program menampilkan pesan kesalahan.
 
Dengan menggunakan switch case, program ini memungkinkan pengguna untuk memilih operasi aritmatika yang diinginkan dan mengeksekusi operasi tersebut berdasarkan pilihan yang dibuat.
    
### M5 Soal 2
```c

    // Program TOSERBA dengan ketentuan diskon berdasarkan total pembelian
    int total_pembelian;
    double Hasil;

    printf("\nTOSERBA\n================\n");
    printf("Masukkan total belanja Anda: ");
    scanf("%i", &total_pembelian);

    if (total_pembelian <= 75000) {
        printf("Anda mendapat diskon: 5 percent\n");
        printf("Total harga awal: %i\n", total_pembelian);
        Hasil = total_pembelian - (total_pembelian * 0.05);
        printf("Total harga setelah diskon: %.2lf\n", Hasil);
    } else if (total_pembelian > 75000 && total_pembelian <= 125000) {
        printf("Anda mendapat diskon: 15 percent\n");
        printf("Total harga awal: %i\n", total_pembelian);
        Hasil = total_pembelian - (total_pembelian * 0.15);
        printf("Total harga setelah diskon: %.2lf\n", Hasil);
    } else if (total_pembelian > 125000) {
        printf("Anda mendapat diskon: 25 percent\n");
        printf("Total harga awal: %i\n", total_pembelian);
        Hasil = total_pembelian - (total_pembelian * 0.25) + 5000;
        printf("Total harga setelah diskon: %.2lf\n", Hasil);
    } else {
        printf("Anda tidak mendapat diskon!\n");
        printf("Total harga yang perlu dibayar: %i\n", total_pembelian);
    }
```

* **Deklarasi Variabel dan Input Pengguna**
```c
    int total_pembelian;
    double Hasil;

    printf("\nTOSERBA\n================\n");
    printf("Masukkan total belanja Anda: ");
    scanf("%i", &total_pembelian);
```
Variabel `total_pembelian` digunakan untuk menyimpan total belanja pengguna.Variabel `Hasil` digunakan untuk menyimpan hasil perhitungan setelah mendapatkan diskon.Program meminta pengguna memasukkan total belanja menggunakan `printf` dan `scanf`.

* **Pengecekan Diskon Berdasarkan Total Belanja**
```c
    if (total_pembelian <= 75000) {
    // Diskon 5%
    // ...
    } else if (total_pembelian > 75000 && total_pembelian <= 125000) {
    // Diskon 15%
    // ...
    } else if (total_pembelian > 125000) {
    // Diskon 25% + tambahan 5000
    // ...
    } else {
    // Tanpa Diskon
    // ...
    }
```
Program menggunakan struktur `if-else` untuk menentukan diskon berdasarkan total belanja yang dimasukkan pengguna.Jika total belanja kurang dari atau sama dengan 75000, pengguna mendapatkan diskon 5%.Jika total belanja lebih dari 75000 dan kurang dari atau sama dengan 125000, pengguna mendapatkan diskon 15%.Jika total belanja lebih dari 125000, pengguna mendapatkan diskon 25% dan tambahan 5000.Jika tidak memenuhi kondisi di atas, maka tidak ada diskon yang diberikan.
    
* **Output Hasil Diskon**
Setiap bagian dari if-else menampilkan informasi tentang diskon yang diberikan dan total harga setelah diskon atau total harga yang harus dibayar tanpa diskon.Informasi ini ditampilkan menggunakan perintah `printf`.

### M5 Soal 3
```c
// Program rumus luas permukaan untuk beberapa bentuk
    char pilihan_rumus;
    int nilai1, nilai2, nilai3, hasil_rumus;
    const float phi = 3.14;

    printf("\nProgram Rumus\n");
    printf(" a) Luas Permukaan Bola\n b) Luas Permukaan Kubus\n c) Luas Permukaan Balok\n d) Luas Permukaan Tabung\n");
    scanf(" %c", &pilihan_rumus);

    switch (toupper(pilihan_rumus)) {
        case 'A':
            printf("Rumus luas permukaan bola\n");
            printf("Input panjang ruas lingkaran: ");
            scanf("%i", &nilai1);
            hasil_rumus = 4 * phi * nilai1 * nilai1;
            printf("Panjang luas permukaan bola adalah = %i\n", hasil_rumus);
            break;
        case 'B':
            printf("Rumus luas permukaan kubus\n");
            printf("Input panjang sisi kubus: ");
            scanf("%i", &nilai1);
            hasil_rumus = 6 * nilai1 * nilai1;
            printf("Hasil luas permukaan kubus adalah = %i\n", hasil_rumus);
            break;
        case 'C':
            printf("Rumus luas permukaan balok\n");
            printf("Input panjang balok: ");
            scanf("%i", &nilai1);
            printf("Input lebar balok: ");
            scanf("%i", &nilai2);
            printf("Input tinggi balok: ");
            scanf("%i", &nilai3);
            hasil_rumus = 2 * (nilai1 * nilai2) + 2 * (nilai1 * nilai3) + 2 * (nilai2 * nilai3);
            printf("Hasil luas permukaan balok adalah = %i\n", hasil_rumus);
            break;
        case 'D':
            printf("Rumus luas permukaan tabung\n");
            printf("Input panjang ruas tabung: ");
            scanf("%i", &nilai1);
            printf("Input tinggi tabung: ");
            scanf("%i", &nilai2);
            hasil_rumus = 2 * phi * nilai1 * (nilai1 + nilai2);
            printf("Hasil luas permukaan tabung adalah = %i\n", hasil_rumus);
            break;
        default:
            printf("Masukkan pilihan yang benar!\n");
            break;
    }
```
* **Deklarasi Variabel dan Input Pengguna**
```c
    char pilihan_rumus;
    int nilai1, nilai2, nilai3, hasil_rumus;
    const float phi = 3.14;

    printf("\nProgram Rumus\n");
    printf(" a) Luas Permukaan Bola\n b) Luas Permukaan Kubus\n c) Luas Permukaan Balok\n d) Luas Permukaan Tabung\n");
    scanf(" %c", &pilihan_rumus);
```
`pilihan_rumus` untuk menyimpan pilihan rumus yang diinginkan.`nilai1`, `nilai2`, `nilai3` untuk menyimpan input dari pengguna yang berkaitan dengan rumus yang dipilih.`hasil_rumus` untuk menyimpan hasil perhitungan luas permukaan.`phi` untuk menyimpan nilai pi (3.14).Program menampilkan opsi rumus dan meminta pengguna untuk memilih salah satunya menggunakan `printf` dan `scanf`.
    
    
* **Switch Case untuk Menjalankan Rumus Berdasarkan Pilihan**
```c
switch (toupper(pilihan_rumus)) {
    case 'A':
        // Rumus luas permukaan bola
        // ...
        break;
    case 'B':
        // Rumus luas permukaan kubus
        // ...
        break;
    case 'C':
        // Rumus luas permukaan balok
        // ...
        break;
    case 'D':
        // Rumus luas permukaan tabung
        // ...
        break;
    default:
        printf("Masukkan pilihan yang benar!\n");
        break;
}
```
Program menggunakan `switch case` untuk menentukan rumus mana yang akan dijalankan berdasarkan pilihan yang dimasukkan pengguna.

* **Pengecekan Setiap Kasus (Case) dan Perhitungan Luas Permukaan**
Setiap case dijalankan berdasarkan pilihan pengguna dan melakukan perhitungan sesuai rumus yang dipilih.
  * **Case 'A'**: Rumus luas permukaan bola
  * **Case 'B'**: Rumus luas permukaan kubus
  * **Case 'C'**: Rumus luas permukaan kubus
  * **Case 'D'**: Rumus luas permukaan kubus

Setiap rumus melakukan input nilai sesuai dengan yang dibutuhkan, melakukan perhitungan sesuai rumus yang sesuai dengan bentuk, dan menampilkan hasilnya menggunakan `printf`.
* **Default Case untuk Pilihan Tidak Valid**

Jika pengguna memasukkan pilihan yang tidak valid, program akan menampilkan pesan kesalahan menggunakan `printf`.Dengan struktur ini, program memungkinkan pengguna untuk memilih rumus yang ingin dihitung untuk menghitung luas permukaan beberapa bentuk geometri yang berbeda.


### M5 Soal 4    
```c
// Program menentukan nilai akhir mahasiswa dengan rentang nilai dan keterangan kelulusan
    int nilai_kehadiran, nilai_tugas, nilai_uts, nilai_uas, nilai_akhir;

    printf("\nProgram Menentukan Nilai Akhir Mahasiswa\n======================\n");
    printf("Input nilai kehadiran mahasiswa: ");
    scanf("%i", &nilai_kehadiran);
    printf("Input nilai tugas mahasiswa: ");
    scanf("%i", &nilai_tugas);
    printf("Input nilai UTS mahasiswa: ");
    scanf("%i", &nilai_uts);
    printf("Input nilai UAS mahasiswa: ");
    scanf("%i", &nilai_uas);

    nilai_akhir = (nilai_kehadiran * 0.2) + (nilai_tugas * 0.2) + (nilai_uts * 0.25) + (nilai_uas * 0.35);
    printf("Nilai akhir mahasiswa adalah %i / ", nilai_akhir);

    if (nilai_akhir >= 0 && nilai_akhir <= 44) {
        printf("E\n");
        printf("Maaf, anda tidak lulus!\n");
    } else if (nilai_akhir >= 45 && nilai_akhir <= 55) {
        printf("D\n");
        printf("Maaf, anda tidak lulus!\n");
    } else if (nilai_akhir >= 56 && nilai_akhir <= 65) {
        printf("C\n");
        printf("Anda lulus, tingkatkan lagi untuk kedepannya!\n");
    } else if (nilai_akhir >= 66 && nilai_akhir <= 75) {
        printf("B-\n");
        printf("Anda lulus dengan baik, tingkatkan terus belajarnya!\n");
    } else if (nilai_akhir >= 76 && nilai_akhir <= 80) {
        printf("B\n");
        printf("Anda lulus dengan baik, tingkatkan terus belajarnya!\n");
    } else if (nilai_akhir >= 81 && nilai_akhir <= 85) {
        printf("B+\n");
        printf("Anda lulus dengan baik, tingkatkan terus belajarnya!\n");
    } else if (nilai_akhir >= 86 && nilai_akhir <= 90) {
        printf("A-\n");
        printf("Selamat! Anda lulus dengan nilai yang sangat memuaskan!\n");
    } else if (nilai_akhir >= 91 && nilai_akhir <= 100) {
        printf("A\n");
        printf("Selamat! Anda lulus dengan nilai yang sangat memuaskan!\n");
    } else {
        printf("Masukkan nilai yang valid!\n");
    }
```
* **Deklarasi Variabel dan Input Pengguna**
```c
    int nilai_kehadiran, nilai_tugas, nilai_uts, nilai_uas, nilai_akhir;

    printf("\nProgram Menentukan Nilai Akhir Mahasiswa\n======================\n");
    printf("Input nilai kehadiran mahasiswa: ");
    scanf("%i", &nilai_kehadiran);
    printf("Input nilai tugas mahasiswa: ");
    scanf("%i", &nilai_tugas);
    printf("Input nilai UTS mahasiswa: ");
    scanf("%i", &nilai_uts);
    printf("Input nilai UAS mahasiswa: ");
    scanf("%i", &nilai_uas);```
``` 
Variabel `nilai_kehadiran`, `nilai_tugas`, `nilai_uts`, `nilai_uas` digunakan untuk menyimpan nilai-nilai dari komponen evaluasi.Program meminta pengguna untuk memasukkan nilai-nilai tersebut menggunakan `printf` dan `scanf`.
    
* **Perhitungan Nilai Akhir**
```c
    nilai_akhir = (nilai_kehadiran * 0.2) + (nilai_tugas * 0.2) + (nilai_uts * 0.25) + (nilai_uas * 0.35);
    printf("Nilai akhir mahasiswa adalah %i / ", nilai_akhir);
```
Program menghitung nilai akhir mahasiswa berdasarkan bobot yang telah ditentukan untuk setiap komponen evaluasi.

* **Penentuan Rentang Nilai dan Keterangan Kelulusan**

Program menggunakan serangkaian `if-else` untuk menentukan rentang nilai dan memberikan keterangan kelulusan berdasarkan nilai akhir mahasiswa.Setiap `if-else` menentukan rentang nilai dan memberikan keterangan berdasarkan aturan yang ditetapkan.
    
* **Default Case untuk Nilai Tidak Valid**

Jika pengguna memasukkan nilai yang tidak valid (di luar rentang 0-100), program akan menampilkan pesan kesalahan menggunakan `printf`.Dengan ini, program memungkinkan pengguna untuk memasukkan nilai-nilai dari berbagai komponen evaluasi dan memberikan keterangan tentang kelulusan berdasarkan nilai akhir yang dihitung.
    
    
    
## Penjelasan Tugas Modul 6

### M6 Soal 1
```c
// 1.) Buatlah sebuah program untuk menghasilkan deret bilangan genap dan ganjil dari 0 - 50
    int i, j;
    printf("bilangan genap: \n");
    for (i = 0; i <= 50; i += 2) {
        printf("%i ", i);
    }
    printf("\nbilangan ganjil: \n");
    for (i = 1; i <= 50; i += 2) {
        printf("%i ", i);
    }
```

* **Deklarasi Variabel dan Pencetakan Judul**
```c
int i, j;
printf("bilangan genap: \n");
```
Variabel `i` dan `j` digunakan dalam perulangan.Program mencetak judul "bilangan genap" menggunakan `printf`.

* **Perulangan untuk Bilangan Genap**
```c
for (i = 0; i <= 50; i += 2) {
    printf("%i ", i);
}
```
Program menggunakan perulangan `for` untuk membuat deret bilangan genap dari 0 hingga 50 (inklusif).Variabel `i` diinisialisasi dengan 0, dan diincrement sebesar 2 pada setiap iterasi untuk menghasilkan bilangan genap.Selama perulangan, nilai `i` dicetak menggunakan `printf`.

* **Pencetakan Judul dan Perulangan untuk Bilangan Ganjil**
```c
    printf("\nbilangan ganjil: \n");
    for (i = 1; i <= 50; i += 2) {
    printf("%i ", i);
    }
```
Program mencetak judul "bilangan ganjil" menggunakan `printf`.Kemudian, menggunakan perulangan `for` yang serupa, mulai dari 1 hingga 50 (inklusif), dengan increment sebesar 2 pada setiap iterasi untuk menghasilkan bilangan ganjil.Pada setiap iterasi, nilai `i` dicetak menggunakan `printf`.Dengan ini, program menghasilkan dua deret bilangan, satu untuk bilangan genap (dari 0 hingga 50) dan satu untuk bilangan ganjil (dari 1 hingga 50).


### M6 Soal 2
```c
2.) Buatlah sebuah program untuk menghasilkan program dengan keluaran sebagai berikut:
    *
    **
    ***
    ****
    *****
    */
    printf("\n");
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
```
Program menggunakan dua perulangan `for` bersarang untuk mencetak pola bintang.Perulangan pertama (`for` pertama) mengontrol jumlah baris yang akan dicetak (dari 1 hingga 5).Di dalam perulangan pertama, terdapat perulangan kedua (`for` kedua) yang mengontrol jumlah bintang yang dicetak pada setiap baris.Perulangan kedua mencetak jumlah bintang yang sesuai dengan nomor baris saat itu (`i`).Setiap bintang dicetak dengan `printf("* ")`.Setelah mencetak bintang pada setiap baris, `printf("\n")` digunakan untuk berpindah ke baris berikutnya dalam pola.

Dengan ini, program menghasilkan pola segitiga siku-siku yang terdiri dari bintang dengan jumlah baris bertambah satu setiap barisnya.


### M6 Soal 3
```c
3.) Buatlah sebuah program untuk menampilkan keluaran sebagai berikut:
    1
    2 4
    3 6 9
    4 8 12 16
    5 10 15 20 25
    */
    printf("\n");
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", i * j);
        }
        printf("\n");
    }
```

* **Nested Loop untuk Mencetak Pola Angka**
```c
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", i * j);
        }
        printf("\n");
    }
```
Program menggunakan dua perulangan `for` bersarang untuk mencetak pola angka.Perulangan pertama (`for` pertama) mengontrol jumlah baris yang akan dicetak (dari 1 hingga 5).Di dalam perulangan pertama, terdapat perulangan kedua (`for` kedua) yang mengontrol jumlah angka yang dicetak pada setiap baris.Perulangan kedua mencetak angka berdasarkan hasil perkalian dari nilai baris (`i`) dengan nilai kolom saat itu (`j`).Setiap angka dicetak dengan `printf("%d ", i * j)`.Setelah mencetak angka pada setiap baris, `printf("\n")` digunakan untuk berpindah ke baris berikutnya dalam pola.

Dengan ini, program mencetak pola angka segitiga yang dihasilkan dari perkalian nilai baris dengan nilai kolomnya. Setiap baris memiliki jumlah angka yang bertambah sesuai dengan nomor barisnya.



### M6 Soal 4
```c
4.) Buatlah program ATM dimana Hattori dapat melakukan setoran dan penarikan saldo.
    Menu yang ada pada ATM: 
    ATM
    1) Cek Saldo
    2) Setoran
    3) Penarikan Tunai
    4) Exit
    Setiap terdapat transaksi setoran ataupun penarikan maka nilai total saldo akan berubah.
    */

    int pilihan, pilihan1;
    int saldo = 175000;
    int setoran1, setoran2, up1 = 0, up2 = 0; // Initializing counter variables
    while (pilihan != 4) {
        printf("\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
        printf("ATM\n");
        printf("1) cek saldo\n");
        printf("2) setoran\n");
        printf("3) penarikan tunai\n");
        printf("4) exit\n");
        scanf("%i", &pilihan);
        if (pilihan == 1) {
            printf("total saldo Hattori adalah : Rp.%i\n", saldo);
        } else if (pilihan == 2) {
            printf("silahkan masukkan jumlah uang yang ingin disetor : \n");
            scanf("%i", &setoran1);
            saldo += setoran1;
            printf("\npenyetoran uang sebesar Rp.%i berhasil\n", setoran1);
            printf("============================================");
            printf("\njumlah saldo Hattori saat ini adalah Rp.%i\n", saldo);
            up1++; // Incrementing setoran counter
        } else if (pilihan == 3) {
            printf("silahkan masukkan jumlah uang yang ingin diambil : \n");
            scanf("%i", &setoran2);
            if (saldo - setoran2 < 50000) {
                printf("Maaf, saldo minimal harus Rp.50.000. Penarikan tidak dapat dilakukan.\n");
            } else {
                saldo -= setoran2;
                printf("\npengambilan uang sebesar Rp.%i berhasil\n", setoran2);
                printf("============================================");
                printf("\nsisa saldo Hattori saat ini adalah Rp.%i\n", saldo);
                up2++; // Incrementing penarikan counter
            }
        } else if (pilihan == 4) {
            printf("sisa saldo Hattori saat ini adalah : %i\n", saldo);
            printf("Hattori telah melakukan penyetoran sebanyak %i kali dan penarikan sebanyak %i kali\n", up1, up2);
            printf("Skenario a : saldo Hattori saat ini adalah Rp.245000\n");
            printf("Skenario b : sisa saldo Hattori saat ini adalah Rp.150000\n");
            printf("Skenario c : sisa saldo Hattori saat ini adalah Rp.30000\n");
            printf("Terima kasih telah menggunakan ATM :)\n");
        } else {
            printf("Silahkan input berdasarkan nomor urut menu yang ditampilkan\n");
        }
    }
```

* **Deklarasi Variabel**
```c
    int pilihan, pilihan1;
    int saldo = 175000;
    int setoran1, setoran2, up1 = 0, up2 = 0;
```
Variabel-variabel yang digunakan dalam program termasuk variabel untuk menyimpan pilihan pengguna, saldo, nilai setoran atau penarikan, dan variabel untuk menghitung jumlah setoran dan penarikan.

* **Perulangan Menu ATM**
```c
    while (pilihan != 4) {
        // Menu ATM
        // ...
    }
```
Program menggunakan loop `while` untuk menampilkan menu ATM dan melakukan operasi hingga pengguna memilih untuk keluar (pilihan 4).


* **Pilihan Menu Atm**
```c
    if (pilihan == 1) {
        // Cek Saldo
        // ...
    } else if (pilihan == 2) {
        // Setoran
        // ...
    } else if (pilihan == 3) {
        // Penarikan Tunai
        // ...
    } else if (pilihan == 4) {
        // Exit
        // ...
    } else {
       // Pilihan Tidak Valid
       // ...
    }
```
Program memeriksa pilihan pengguna untuk menentukan tindakan yang akan diambil berdasarkan pilihan tersebut.

* **Pilihan 1: Cek Saldo**
Memeriksa saldo Hattori dan mencetaknya.

* **Pilihan 2: Setoran**
Meminta pengguna untuk memasukkan jumlah uang yang ingin disetor.Menambahkan jumlah setoran ke saldo Hattori.Mencetak konfirmasi setoran dan saldo terkini.

* **Pilihan 3: Penarikan Tunai**
Meminta pengguna untuk memasukkan jumlah uang yang ingin ditarik.Memeriksa apakah penarikan uang akan membuat saldo Hattori kurang dari Rp. 50.000.Jika penarikan dapat dilakukan, mengurangkan jumlah penarikan dari saldo Hattori dan mencetak konfirmasi penarikan dan saldo terkini.

* **Pilihan 4: Exit**
Mencetak sisa saldo dan jumlah setoran serta penarikan yang telah dilakukan.Menampilkan skenario saldo yang mungkin.Mengakhiri program dengan pesan terima kasih.

* **Pilihan Tidak Valid**
Menampilkan pesan untuk meminta pengguna untuk memilih nomor menu yang sesuai.

Dengan demikian, program ATM ini memungkinkan Hattori untuk memeriksa saldo, melakukan setoran, dan melakukan penarikan tunai dari saldo yang dimilikinya.



## Penjelasan Tugas Modul 7

### M7 Soal 1
```c
// 1. Program untuk mencari rata-rata nilai 20 mahasiswa menggunakan array.
    int jumlah = 20;
    printf("\nPROGRAM MENENTUKAN RATA RATA DARI NILAI 20 SISWA");
    printf("\n===============================================\n");
    char nama[jumlah][20];
    int nilai[jumlah], sum = 0, rata;

    // Meminta input nama dan nilai dari setiap siswa.
    for (int i = 0; i < jumlah; i++) {
        printf("\nSiswa ke-%i:\n", i + 1);
        printf("masukkan nama : ");
        scanf("%s", &nama[i]);
        printf("masukkan nilai : ");
        scanf("%i", &nilai[i]);
        printf("======================");
        sum += nilai[i];
    }

    // Menampilkan data siswa beserta nama dan nilai.
    printf("\nDATA SISWA : \n");
    for (int i = 0; i < jumlah; i++) {
        printf("%i.Nama:%s\n  Nilai:%i\n", i + 1, nama[i], nilai[i]);
        printf("=========================\n");
    }

    // Menghitung dan menampilkan rata-rata nilai siswa.
    rata = sum / jumlah;
    printf("\nRata rata nilai dari 20 siswa adalah : %i", rata);
```
* **Deklarasi Variabel dan Array**
```c
    int jumlah = 20;
    char nama[jumlah][20];
    int nilai[jumlah], sum = 0, rata;
```
Variabel `jumlah` untuk menentukan jumlah siswa (20 siswa).`nama` merupakan array 2 dimensi untuk menyimpan nama 20 siswa.`nilai` adalah array untuk menyimpan nilai 20 siswa.`sum` untuk menyimpan total nilai yang diinput.`rata` untuk menyimpan nilai rata-rata.
* **Input Nama dan Nilai Siswa**
```c
for (int i = 0; i < jumlah; i++) {
    // Meminta input nama dan nilai setiap siswa.
    // ...
    scanf("%s", &nama[i]);
    scanf("%i", &nilai[i]);
    sum += nilai[i];
}
```
`Loop` for digunakan untuk meminta input nama dan nilai untuk setiap siswa.Data dimasukkan ke dalam array `nama` dan `nilai`.Nilai dari setiap siswa juga ditambahkan ke `sum untuk menghitung total nilai.

* **Menampilkan Data Siswa**
```c
    printf("\nDATA SISWA : \n");
    for (int i = 0; i < jumlah; i++) {
        printf("%i.Nama:%s\n  Nilai:%i\n", i + 1, nama[i], nilai[i]);
        printf("=========================\n");
```
Loop `for` digunakan untuk menampilkan data setiap siswa yang telah diinput.


* **Menghitung dan Menampilkan Rata-rata Nilai**
```c
rata = sum / jumlah;
printf("\nRata rata nilai dari 20 siswa adalah : %i", rata);
```
Nilai rata-rata dihitung dengan membagi total nilai `(sum)` dengan jumlah siswa `(jumlah)`.
Kemudian nilai rata-rata ditampilkan di layar.Program ini meminta nama dan nilai dari 20 siswa, menyimpan data tersebut dalam array, menampilkan data siswa, dan menghitung rata-rata dari nilai-nilai tersebut.


### M7 Soal 2
```c
int jumlah_mahasiswa;
    printf("\n\nmasukkan jumlah mahasiswa : ");
    scanf("%i", &jumlah_mahasiswa);
    char nama_input[jumlah_mahasiswa][20];

    // Meminta input nama mahasiswa dan menampilkannya.
    for (int i = 0; i < jumlah_mahasiswa; i++) {
        printf("\nSiswa ke-%i:\n", i + 1);
        printf("masukkan nama : ");
        scanf("%s", &nama_input[i]);
    }

    printf("\nDATA NAMA SISWA : \n");
    for (int i = 0; i < jumlah_mahasiswa; i++) {
        printf("%i.%s\n", i + 1, nama_input[i]);
    }
```

* **Meminta Input Jumlah Mahasiswa**
```c
int jumlah_mahasiswa;
printf("\n\nmasukkan jumlah mahasiswa : ");
scanf("%i", &jumlah_mahasiswa);
```
Program meminta input dari pengguna untuk jumlah mahasiswa yang akan diinputkan.

* **Deklarasi Array Nama Mahasiswa Berdasarkan Jumlah Input**
```c
char nama_input[jumlah_mahasiswa][20];
```
Array `nama_input` digunakan untuk menyimpan nama mahasiswa. Ukuran array ini tergantung pada jumlah mahasiswa yang diinputkan.

* **Meminta dan Menyimpan Nama Mahasiswa**
```c
for (int i = 0; i < jumlah_mahasiswa; i++) {
    printf("\nSiswa ke-%i:\n", i + 1);
    printf("masukkan nama : ");
    scanf("%s", &nama_input[i]);
}
```
Loop `for` digunakan untuk meminta dan menyimpan nama mahasiswa ke dalam array `nama_input`

* **Menampilkan Data Nama Mahasiswa**
```c
printf("\nDATA NAMA SISWA : \n");
for (int i = 0; i < jumlah_mahasiswa; i++) {
    printf("%i.%s\n", i + 1, nama_input[i]);
}
```
Loop `for` kedua digunakan untuk menampilkan nama-nama mahasiswa yang telah diinput.
Program ini meminta input jumlah mahasiswa, menyimpan nama-nama mahasiswa tersebut dalam array, dan menampilkannya kembali sesuai dengan urutan input.



### M7 Soal 3
```c
int kesempatan = 3;
    char username[20] = "qwerty123";
    char password[20] = "sepuh123";
    char input_user[20], input_pass[20];

    printf("\n\nprogram halaman login\n");
    printf("=======================\n");
    printf("silahkan masukkan username dan password anda \n\n");

    // Meminta input username dan password, memberi notifikasi jika salah.
    while (kesempatan > 0) {
        printf("username : ");
        scanf("%s", &input_user);
        printf("password : ");
        scanf("%s", &input_pass);

        // Memeriksa apakah username dan password sesuai.
        if (strcmp(input_user, username) == 0 && strcmp(input_pass, password) == 0) {
            printf("Berhasil login!");
            break;
        } else if (strcmp(input_user, username) != 0) {
            printf("\nusername yang anda masukkan tidak diketahui\n\n");
        } else if (strcmp(input_pass, password) != 0) {
            kesempatan--;
            if (kesempatan == 0) {
                printf("\npassword yang anda masukkan salah\n\n");
                printf("sisa percobaan login anda %i", kesempatan);
                printf("\ncoba lagi besok!");
            } else {
                printf("\npassword yang anda masukkan salah\n\n");
            }
        }
    }
```

* **Deklarasi Variabel dan Inisialisasi**
```c
    int kesempatan = 3;
    char username[20] = "qwerty123";
    char password[20] = "sepuh123";
    char input_user[20], input_pass[20];
```
`kesempatan` adalah variabel yang menyimpan jumlah kesempatan login.`username` dan `password` adalah nilai default untuk login.`input_user` dan `input_pass` adalah variabel untuk menyimpan input pengguna.


* **Meminta Input Username dan Password**
```c
    printf("\n\nprogram halaman login\n");
    printf("=======================\n");
    printf("silahkan masukkan username dan password anda \n\n");

    while (kesempatan > 0) {
        printf("username : ");
        scanf("%s", &input_user);
        printf("password : ");
        scanf("%s", &input_pass);
```
Program meminta pengguna untuk memasukkan username dan password dalam loop `while` selama masih ada kesempatan login.

* **Memeriksa Kredensial Login**
```c
    if (strcmp(input_user, username) == 0 && strcmp(input_pass, password) == 0) {
        printf("Berhasil login!");
        break;
    } else if (strcmp(input_user, username) != 0) {
        printf("\nusername yang anda masukkan tidak diketahui\n\n");
    } else if (strcmp(input_pass, password) != 0) {
        kesempatan--;
        if (kesempatan == 0) {
            printf("\npassword yang anda masukkan salah\n\n");
            printf("sisa percobaan login anda %i", kesempatan);
            printf("\ncoba lagi besok!");
        } else {
            printf("\npassword yang anda masukkan salah\n\n");
        }
    }
}
```
Program memeriksa apakah input username dan password cocok dengan nilai default.Jika username salah, program memberikan notifikasi.Jika password salah, program mengurangi kesempatan dan memberi notifikasi. Jika kesempatan habis, program memberikan notifikasi bahwa percobaan login telah habis.Program ini meminta pengguna untuk memasukkan username dan password, memeriksa kecocokan dengan nilai default, dan memberikan notifikasi jika terjadi kesalahan atau kegagalan login. Jika login berhasil, program memberikan pesan bahwa login berhasil.


## Penjelasan Tugas Modul 8

### M8 Soal 1
```c
int perkalian(int a,int b);
int main()
{
	int angka1,angka2;
	printf("input angka yang ingin di kali \n");
	printf("angka1 : ");
	scanf("%i",&angka1);
	printf("angka2 : ");
	scanf("%i",&angka2);
	int hasil = perkalian(angka1,angka2);
	printf("\nhasil : %i",hasil);
	
}
int perkalian(int a,int b)
{
	if(b == 1)
	{
		return a;
	}
	else
	{
		return a + perkalian(a,b-1);
	}
}
```

* **Deklarasi Fungsi `perkalian`**
```c
int perkalian(int a, int b);
```
Ini adalah prototipe fungsi perkalian yang mengambil dua argumen bertipe integer dan mengembalikan hasil `perkalian`.

* **Fungsi `main`**
```c
int main() {
    int angka1, angka2;
    printf("input angka yang ingin di kali \n");
    printf("angka1 : ");
    scanf("%i", &angka1);
    printf("angka2 : ");
    scanf("%i", &angka2);
    int hasil = perkalian(angka1, angka2);
    printf("\nhasil : %i", hasil);
}
```
Fungsi `main` meminta pengguna untuk memasukkan dua angka.Kemudian, hasil perkalian dari kedua angka tersebut dihitung menggunakan fungsi `perkalian` dan dicetak.

* **Fungsi `perkalian`**
```c
int perkalian(int a, int b) {
    if (b == 1) {
        return a;
    } else {
        return a + perkalian(a, b - 1);
    }
}
```
Fungsi `perkalian` menerima dua argumen, `a` dan `b`.Fungsi ini mengimplementasikan operasi perkalian secara rekursif menggunakan penjumlahan berulang.
Jika `b` adalah 1, fungsi ini mengembalikan nilai `a`.Jika `b` lebih dari 1, fungsi ini memanggil dirinya sendiri dengan nilai `b - 1` sampai `b` menjadi 1 dan melakukan penjumlahan kembali untuk menghitung hasil perkalian.Jadi, program ini memungkinkan pengguna untuk memasukkan dua angka dan menghitung hasil perkaliannya menggunakan metode rekursif dalam fungsi `perkalian`.

### M8 Soal 2
```c
int penjumlahan(int a,int b)
{
	int hasil = a + b;
	return hasil;
}
int pengurangan(int a,int b)
{
	int hasil = a - b;
	return hasil;
}
int perkalian(int a,int b)
{
	int hasil = a * b;
	return hasil;
}
int pembagian(int a,int b)
{
	int hasil = a / b;
	return hasil;
}


int main()
{
	int angka1,angka2;
	printf("masukkan angka1 : ");
	scanf("%i",&angka1);
	printf("masukkan angka2 : ");
	scanf("%i",&angka2);
	printf("%i + %i = %i \n",angka1,angka2,penjumlahan(angka1,angka2));
	printf("%i - %i = %i \n",angka1,angka2,pengurangan(angka1,angka2));
	printf("%i * %i = %i \n",angka1,angka2,perkalian(angka1,angka2));
	printf("%i / %i = %i \n",angka1,angka2,pembagian(angka1,angka2));



}
```

* **Fungsi `penjumlahan`**
```c
int penjumlahan(int a, int b) {
    int hasil = a + b;
    return hasil;
}
```
Fungsi ini menerima dua argumen `a` dan `b` dan mengembalikan hasil penjumlahan keduanya.

* **Fungsi `pengurangan`**
```c
int pengurangan(int a, int b) {
    int hasil = a - b;
    return hasil;
}
```
Fungsi ini menerima dua argumen a dan b dan mengembalikan hasil pengurangan keduanya.

* **Fungsi `perkalian`**
```c
int perkalian(int a, int b) {
    int hasil = a * b;
    return hasil;
}
```
Fungsi ini menerima dua argumen `a` dan `b` dan mengembalikan hasil perkalian keduanya.

* **Fungsi `pembagian`**
```c
int pembagian(int a, int b) {
    int hasil = a / b;
    return hasil;
}
```
Fungsi ini menerima dua argumen `a` dan `b` dan mengembalikan hasil pembagian keduanya.

* **Fungsi `main`**
```c
int main() {
    int angka1, angka2;
    printf("masukkan angka1 : ");
    scanf("%i", &angka1);
    printf("masukkan angka2 : ");
    scanf("%i", &angka2);
    printf("%i + %i = %i \n", angka1, angka2, penjumlahan(angka1, angka2));
    printf("%i - %i = %i \n", angka1, angka2, pengurangan(angka1, angka2));
    printf("%i * %i = %i \n", angka1, angka2, perkalian(angka1, angka2));
    printf("%i / %i = %i \n", angka1, angka2, pembagian(angka1, angka2));
}
```
Fungsi `main` meminta pengguna untuk memasukkan dua angka.Kemudian, hasil dari operasi penjumlahan, pengurangan, perkalian, dan pembagian kedua angka tersebut dicetak.

### M8 Soal 3
```c
double luas(double a,int b)

{
	double luas_lingkaran = a * b * b;
	return luas_lingkaran;
}
double keliling(double a,int b)
{
	double keliling_lingkaran = 2 * a * b;
	return keliling_lingkaran;
}
int main()
{
	const double phi = 3.14;
	int ruas;
	printf("\nprogram menghitung luas dan keliling lingkaran\n");
	printf("=================================================\n\n");
	printf("masukkan ruas lingkaran : ");
	scanf("%i",&ruas);
	printf("luas dan keliling dari lingkaran tersebut adalah : %.1lf	%.1lf",luas(phi,ruas),keliling(phi,ruas));
	return 0;
}
```

* **Fungsi `penjumlahan`**
```c
int penjumlahan(int a, int b) {
    int hasil = a + b;
    return hasil;
}
```
Fungsi ini menerima dua argumen `a` dan `b` dan mengembalikan hasil penjumlahan keduanya.

* **Fungsi `pengurangan`**
```c
int pengurangan(int a, int b) {
    int hasil = a - b;
    return hasil;
}
```
Fungsi ini menerima dua argumen `a` dan `b` dan mengembalikan hasil pengurangan keduanya.


* **Fungsi `perkalian`**
```c
int perkalian(int a, int b) {
    int hasil = a * b;
    return hasil;
}
```
Fungsi ini menerima dua argumen `a` dan `b` dan mengembalikan hasil perkalian keduanya.

* **Fungsi `pembagian`**
```c
int pembagian(int a, int b) {
    int hasil = a / b;
    return hasil;
}
```
Fungsi ini menerima dua argumen a dan b dan mengembalikan hasil pembagian keduanya.

* **Fungsi `main`**
```c
int main() {
    int angka1, angka2;
    printf("masukkan angka1 : ");
    scanf("%i", &angka1);
    printf("masukkan angka2 : ");
    scanf("%i", &angka2);
    printf("%i + %i = %i \n", angka1, angka2, penjumlahan(angka1, angka2));
    printf("%i - %i = %i \n", angka1, angka2, pengurangan(angka1, angka2));
    printf("%i * %i = %i \n", angka1, angka2, perkalian(angka1, angka2));
    printf("%i / %i = %i \n", angka1, angka2, pembagian(angka1, angka2));
}
```

Fungsi `main` meminta pengguna untuk memasukkan dua angka.Kemudian, hasil dari operasi penjumlahan, pengurangan, perkalian, dan pembagian kedua angka tersebut dicetak.


### M8 Soal 4
```c
int discount(int a)
{
	if(a > 1000000 && a < 3000000)
	{
		return 20;
		
	}
	else if(a > 3000000)
	{
		return 35;
	}
	else
	{
		return 0;
	}
}



double potong(int a)
{
	if(a > 1000000 && a < 3000000)
	{
		double disc = a * 0.2;
		return disc;
	}
	else if(a > 3000000)
	{
		double disc = a * 0.35;
		return disc;
	}
	else
	{
		return a;
	}
}
int main()
{
	printf("GRAND MALL AFRIKA\n");
	printf("====================\n\n");
	int totalbelanja;
	printf("masukkan total belanja anda : ");
	scanf("%i",&totalbelanja);
      double total = totalbelanja - potong(totalbelanja);
	printf("\n\nprogram hitung potongan\n");
	printf("==============================\n");
	printf("total pembelian					: Rp.%i\n",totalbelanja);
	printf("besar diskon					: %i persen / Rp.%.2lf\n",discount(totalbelanja),potong(totalbelanja));
	printf("Besar yang harus di bayar		        : Rp.%.3lf\n",total);
	return 0;
}
```

* **Fungsi `discount`**
```c
int discount(int a) {
    if (a > 1000000 && a < 3000000) {
        return 20;
    } else if (a > 3000000) {
        return 35;
    } else {
        return 0;
    }
}
```
Fungsi ini mengembalikan persentase diskon berdasarkan total belanja (`a`).
Jika total belanja berada di antara 1.000.000 dan 3.000.000, maka diskonnya adalah 20%.
Jika total belanja lebih dari 3.000.000, maka diskonnya adalah 35%.
Jika tidak memenuhi syarat di atas, maka tidak ada diskon (0%).

* **Fungsi `potong`**
```c
double potong(int a) {
    if (a > 1000000 && a < 3000000) {
        double disc = a * 0.2;
        return disc;
    } else if (a > 3000000) {
        double disc = a * 0.35;
        return disc;
    } else {
        return a;
    }
}
```
Fungsi ini mengembalikan nilai potongan (dalam bentuk persentase) berdasarkan total belanja (`a`).
Jika total belanja berada di antara 1.000.000 dan 3.000.000, maka potongan yang diberikan adalah 20% dari total belanja (`a`).
Jika total belanja lebih dari 3.000.000, maka potongan yang diberikan adalah 35% dari total belanja (`a`).
Jika tidak memenuhi syarat di atas, maka tidak ada potongan.

* **Fungsi `main`**
```c
int main() {
    printf("GRAND MALL AFRIKA\n");
    printf("====================\n\n");
    int totalbelanja;
    printf("masukkan total belanja anda : ");
    scanf("%i", &totalbelanja);
    double total = totalbelanja - potong(totalbelanja);
    printf("\n\nprogram hitung potongan\n");
    printf("==============================\n");
    printf("total pembelian                   : Rp.%i\n", totalbelanja);
    printf("besar diskon                     : %i persen / Rp.%.2lf\n", discount(totalbelanja), potong(totalbelanja));
    printf("Besar yang harus di bayar        : Rp.%.3lf\n", total);
    return 0;
}
```
Fungsi `main` meminta pengguna untuk memasukkan total belanja.Kemudian, total pembelian, besar diskon berdasarkan fungsi `discount`, dan jumlah yang harus dibayarkan setelah diskon dihitung dan dicetak.



## Penjelasan Tugas Modul 9

### M9 Soal 1
```c
char word[10] = "BORLAND";
    char *p_word = word;

    for (int i = strlen(word) - 1; i >= 0; i--) {
        p_word = word + i;
        for (int j = 0; j < strlen(word) - i; j++) {
            printf("%c", *p_word);
            p_word++;
        }
        printf("\n");
    }
```
 
```c
    char word[10] = "BORLAND";
    char *p_word = word;
```
`word` adalah array karakter yang menyimpan kata "BORLAND".`p_word` adalah pointer yang menunjuk ke `word`.

```c
for (int i = strlen(word) - 1; i >= 0; i--) {
    p_word = word + i;
    for (int j = 0; j < strlen(word) - i; j++) {
        printf("%c", *p_word);
        p_word++;
    }
    printf("\n");
}
```
Loop pertama dimulai dari `i` yang setara dengan panjang kata dikurangi 1 hingga mencapai 0.Pada setiap iterasi, `p_word` diperbarui untuk menunjuk ke posisi dalam `word`.Loop kedua dimulai dari 0 hingga panjang kata dikurangi `i`.Pada setiap iterasi loop kedua, karakter yang ditunjuk oleh `p_word` dicetak.Setelah setiap baris selesai dicetak, baris baru ditambahkan.

### M9 Soal 2
```c
char masukan[10];
    printf("masukkan kalimat : ");
    gets(masukan);
    char *p_masukan = masukan;
    for(int i = strlen(masukan); i >= 0; i--) {
        p_masukan = masukan + i;
        printf(" %c",*p_masukan);
        p_masukan++;
    }
```

```c
    char masukan[10];
    printf("masukkan kalimat : ");
    gets(masukan);
    char *p_masukan = masukan;
```
`masukan` adalah array karakter dengan kapasitas untuk 10 karakter yang digunakan untuk menyimpan input dari pengguna.`printf("masukkan kalimat : ");` menampilkan pesan ke pengguna untuk memasukkan kalimat.`gets(masukan);` mengambil input dari pengguna dan menyimpannya dalam array `masukan`.`p_masukan` adalah pointer yang menunjuk ke `masukan`.


```c
for(int i = strlen(masukan); i >= 0; i--) {
    p_masukan = masukan + i;
    printf(" %c",*p_masukan);
    p_masukan++;
}
```
Loop dimulai dari `i` yang setara dengan panjang kalimat yang dimasukkan dikurangi 1 hingga mencapai 0.Pada setiap iterasi, `p_masukan` diperbarui untuk menunjuk ke posisi dalam `masukan`.Karakter yang ditunjuk oleh `p_masukan` dicetak dengan menggunakan `printf`.Setelah itu, `p_masukan` diperbarui untuk menunjuk ke karakter berikutnya dalam `masukan`.


Code ini akan mencetak karakter-karakter dari input kalimat secara terbalik, dengan spasi di antara setiap karakter. Misalnya, jika Anda memasukkan kalimat "Hello", outputnya akan seperti ini: `o l l e H`. Namun, perlu dicatat bahwa penggunaan `gets` dalam C memiliki risiko keamanan karena tidak ada pengamanan terhadap overflow buffer. Penggunaan `gets` bisa digantikan dengan fungsi lebih aman seperti `fgets`.

### M9 Soal 3
```c
int lesley = 57082;
    int layla = lesley;
    int balmond = layla + 1;
    printf("\n a) nilai layla adalah %i\n",layla);
    printf("b) nilai balmond adalah %i\n",balmond);
    printf("==============================\n");
      
    lesley = 57082;
    int *Layla = &lesley;
    int Balmond =  *Layla + 1;
    printf("\n a) nilai layla adalah %i\n",*Layla);
    printf("b) nilai balmond adalah %i\n",Balmond);
    getchar();
```

* **Inisialisasi variabel dan pencetakan nilai**
```c
    int lesley = 57082;
    int layla = lesley;
    int balmond = layla + 1;
    printf("\n a) nilai layla adalah %i\n", layla);
    printf("b) nilai balmond adalah %i\n", balmond);
    printf("==============================\n");
```

`lesley` diinisialisasi dengan nilai 57082.Nilai dari `lesley` disalin ke `layla`.`balmond` diinisialisasi dengan nilai `layla + 1`.Nilai `layla` dan `balmond` dicetak.

* **Pemakaian pointer dan pencetakan nilai**
```c
    lesley = 57082;
    int *Layla = &lesley;
    int Balmond = *Layla + 1;
    printf("\n a) nilai layla adalah %i\n", *Layla);
    printf("b) nilai balmond adalah %i\n", Balmond);
    getchar();
```
`lesley` diatur kembali ke nilai 57082.Pointer `Layla` diinisialisasi untuk menunjuk ke alamat memori dari `lesley`.Variabel `Balmond` diinisialisasi dengan nilai yang ditunjuk oleh `Layla` ditambah 1.Nilai dari variabel yang ditunjuk oleh `Layla` dan nilai `Balmond` dicetak.

Dua bagian kode tersebut melakukan hal yang sama dengan cara yang sedikit berbeda. Pertama, menggunakan variabel langsung (`lesley`, `layla`, dan `balmond`), sedangkan yang kedua, menggunakan pointer (`Layla` dan `Balmond`). Hasil akhirnya adalah mencetak nilai `layla` dan nilai `balmond` yang sama pada kedua kasus tersebut.

## Penjelasan Tugas Modul 10

### M10 Soal 1
```c
int tebakan;
    int jumlah_tebakan = 1;
    char pilihan;

    // Mengulang permainan jika user memilih untuk bermain lagi
    do {
        srand(time(NULL)); // Menggunakan waktu saat ini sebagai seed untuk angka acak
        int angka_acak = rand() % 21; // Menghasilkan angka acak antara 0 dan 20

        // Meminta user untuk menebak angka dan memberikan petunjuk
        do {
            printf("Masukkan angka tebakan (antara 0 dan 20): ");
            scanf("%i", &tebakan);

            // Memberikan petunjuk berdasarkan tebakan user
            if (tebakan < angka_acak) {
                printf("Nomor saya lebih besar!\n");
                jumlah_tebakan++;
            } else if (tebakan > angka_acak) {
                printf("Nomor saya lebih kecil!\n");
                jumlah_tebakan++;
            } else {
                printf("Selamat, anda benar!\n");
            }
        } while (tebakan != angka_acak); // Mengulang sampai tebakan benar

        // Menampilkan jumlah tebakan yang dibutuhkan
        printf("Jumlah tebakan anda adalah: %i\n", jumlah_tebakan);
        jumlah_tebakan = 1; // Reset jumlah tebakan

        // Meminta user untuk bermain lagi atau tidak
        printf("Ulang lagi? (y/n): ");
        scanf(" %c", &pilihan);

    } while (pilihan == 'y' || pilihan == 'Y'); // Mengulang jika user memilih 'y'

    printf("\nTerima kasih telah bermain!\n");
```

* **Deklarasi Variabel**
```c
int tebakan;
int jumlah_tebakan = 1;
char pilihan;
```

`tebakan` adalah variabel yang akan menyimpan tebakan pengguna.`jumlah_tebakan` digunakan untuk melacak jumlah tebakan yang dilakukan pengguna.`pilihan` digunakan untuk menyimpan pilihan pengguna apakah ingin bermain lagi atau tidak.

* **Perulangan Game**
```c
do {
    // Generate angka acak antara 0 dan 20
    srand(time(NULL));
    int angka_acak = rand() % 21;

    // Meminta tebakan dari pengguna dan memberikan petunjuk
    do {
        printf("Masukkan angka tebakan (antara 0 dan 20): ");
        scanf("%i", &tebakan);

        // Berikan petunjuk berdasarkan tebakan pengguna
        if (tebakan < angka_acak) {
            printf("Nomor saya lebih besar!\n");
            jumlah_tebakan++;
        } else if (tebakan > angka_acak) {
            printf("Nomor saya lebih kecil!\n");
            jumlah_tebakan++;
        } else {
            printf("Selamat, anda benar!\n");
        }
    } while (tebakan != angka_acak); // Permainan berlangsung sampai tebakan benar

    // Menampilkan jumlah tebakan yang dibutuhkan
    printf("Jumlah tebakan anda adalah: %i\n", jumlah_tebakan);
    jumlah_tebakan = 1; // Reset jumlah tebakan

    // Meminta pengguna apakah ingin bermain lagi
    printf("Ulang lagi? (y/n): ");
    scanf(" %c", &pilihan);

} while (pilihan == 'y' || pilihan == 'Y'); // Permainan diulang jika pengguna memilih 'y'
```
Perulangan `do-while` luar akan mengulang permainan secara keseluruhan jika pengguna memilih untuk bermain lagi.Di dalamnya, ada permainan tebak angka: pengguna diminta untuk menebak angka antara 0 dan 20.Terdapat perulangan `do-while` dalam yang meminta tebakan pengguna dan memberikan petunjuk terkait tebakan tersebut.Jumlah tebakan yang dilakukan oleh pengguna akan terus tercatat hingga tebakan benar.Setelah permainan selesai, jumlah tebakan akan ditampilkan dan pengguna akan ditanya apakah ingin bermain lagi.


### M10 Soal 2
```c
struct Tanggal {
    int tanggal;
    int bulan;
    int tahun;
};
struct zodiak {
    char nama_zodiak[20];
    struct Tanggal rentang_awal;
    struct Tanggal rentang_akhir;
    int bulan;
};

int main()
{
    struct Tanggal tanggal;
    printf("2.)\n");
    printf("program menentukan zodiak \n =================== \n");
    printf("data kelahiran:\n");
    printf("masukkan tanggal kelahiran anda     : ");
    scanf(" %d", &tanggal.tanggal);
    printf("masukkan bulan kelahiran anda       : ");
    scanf(" %d", &tanggal.bulan);
    printf("masukkan tahun kelahiran anda       : ");
    scanf(" %d", &tanggal.tahun);
    struct zodiak zodiac[12] =
    {
        {"ARIES"     ,{21 , 3}, {19 , 4}},
        {"TAURUS"    ,{20 , 4}, {20 , 5}},
        // ... (pola rentang tanggal zodiak lainnya)
    };
    int jumlah_zodiak = sizeof(zodiac) / sizeof(zodiac[0]);

    for (int i = 0; i < jumlah_zodiak; i++) {
        if ((tanggal.bulan == zodiac[i].rentang_awal.bulan && tanggal.tanggal >= zodiac[i].rentang_awal.tanggal) ||
            (tanggal.bulan == zodiac[i].rentang_akhir.bulan && tanggal.tanggal <= zodiac[i].rentang_akhir.tanggal)) {
            printf("\ntanggal lahir anda[tanggal - bulan - tahun] = [%d - %d - %d]\n", tanggal.tanggal, tanggal.bulan, tanggal.tahun);
            printf("Zodiak anda adalah %s\n", zodiac[i].nama_zodiak);
        }
    }




      return 0;
}
```

* **Deklarasi Struktur**
```c
struct Tanggal {
    int tanggal;
    int bulan;
    int tahun;
};

struct zodiak {
    char nama_zodiak[20];
    struct Tanggal rentang_awal;
    struct Tanggal rentang_akhir;
    int bulan;
};
```
Dua struktur dideklarasikan: `Tanggal` dan `zodiak`.
`Tanggal` memiliki tiga variabel: `tanggal`, `bulan`, dan `tahun`.
`zodiak` memiliki beberapa variabel, termasuk `nama_zodiak`, `rentang_awal` (dalam bentuk `Tanggal`), `rentang_akhir` (juga dalam bentuk `Tanggal`), dan `bulan`.

* **Fungsi Utama**
```c
int main() {
    struct Tanggal tanggal;
    // ...
}
```
Fungsi utama dimulai di sini.
Variabel `tanggal` dari struktur `Tanggal` dibuat untuk menyimpan informasi tanggal kelahiran pengguna.

* **Meminta Input Tanggal Kelahiran**
```c
printf("masukkan tanggal kelahiran anda     : ");
scanf(" %d", &tanggal.tanggal);
printf("masukkan bulan kelahiran anda       : ");
scanf(" %d", &tanggal.bulan);
printf("masukkan tahun kelahiran anda       : ");
scanf(" %d", &tanggal.tahun);
```
Pengguna diminta untuk memasukkan tanggal, bulan, dan tahun kelahiran mereka.

* **Inisialisasi Data Zodiak**
```c
struct zodiak zodiac[12] =
{
    {"ARIES"     ,{21 , 3}, {19 , 4}},
    {"TAURUS"    ,{20 , 4}, {20 , 5}},
    // ... (pola rentang tanggal zodiak lainnya)
};
```
Array `zodiac` diinisialisasi dengan 12 objek zodiak.
Setiap objek zodiak memiliki nama zodiak, rentang tanggal awal dan akhir untuk bulan kelahiran tertentu.

* **Perbandingan Tanggal dengan Rentang Zodiak:**
```c
for (int i = 0; i < jumlah_zodiak; i++) {
    if ((tanggal.bulan == zodiac[i].rentang_awal.bulan && tanggal.tanggal >= zodiac[i].rentang_awal.tanggal) ||
        (tanggal.bulan == zodiac[i].rentang_akhir.bulan && tanggal.tanggal <= zodiac[i].rentang_akhir.tanggal)) {
        // ...
    }
}
```
Melalui loop `for`, program memeriksa setiap objek zodiak.
Jika tanggal kelahiran pengguna berada dalam rentang tanggal untuk suatu zodiak tertentu, program akan mencetak zodiak yang sesuai dengan tanggal kelahiran pengguna.


### M10 Soal 3
```c
struct tanggal {
    int tanggal;
    int bulan;
    int tahun;
};
struct mahasiswa {
    int npm;
    char nama[20];
    struct tanggal tanggal_lahir;
    char alamat[20];
    char nomor_hp[30];
};

int main()
{
      struct mahasiswa data[50];
    int total = 0;
    char Pilihan;
    printf("3.)\n");
    getchar();

    do {
        printf("Masukkan data mahasiswa!\n");
        printf("Masukkan nama           : ");
        fgets(data[total].nama, 100, stdin);

        printf("Masukkan npm            : ");
        scanf("%d", &data[total].npm);
        getchar();

        printf("Data tanggal lahir:\n");
        printf("Masukkan tanggal        : ");
        scanf("%d", &data[total].tanggal_lahir.tanggal);
        getchar();

        printf("Masukkan bulan (1 - 12) : ");
        scanf("%d", &data[total].tanggal_lahir.bulan);
        getchar();

        printf("Masukkan tahun          : ");
        scanf("%d", &data[total].tanggal_lahir.tahun);
        getchar();

        printf("Masukkan alamat         : ");
        fgets(data[total].alamat, sizeof(data[total].alamat), stdin);

        printf("Masukkan nomor hp       : ");
        fgets(data[total].nomor_hp, sizeof(data[total].nomor_hp), stdin);

        total++;

        printf("\nInfo data mahasiswa\n===================\n");
        for (int i = 0; i < total; i++) {
            printf("Data mahasiswa ke-%d:\n", i + 1);
            printf("Nama            : %s", data[i].nama);
            printf("NPM             : %d\n", data[i].npm);
            printf("Tanggal lahir   : %d / %d / %d\n", data[i].tanggal_lahir.tanggal, data[i].tanggal_lahir.bulan, data[i].tanggal_lahir.tahun);
            printf("Alamat          : %s", data[i].alamat);
            printf("Nomor HP        : %s\n", data[i].nomor_hp);
        }

        printf("Apakah anda ingin menambah data lagi (y/n)  : ");
        scanf(" %c", &Pilihan);
        getchar(); // Membersihkan newline di stdin
    } while (Pilihan == 'y' || Pilihan == 'Y');

    printf("Terima Kasih");
    getchar();

    return 0;

}
```

* **Deklarasi Struktur**
```c
struct tanggal {
    int tanggal;
    int bulan;
    int tahun;
};

struct mahasiswa {
    int npm;
    char nama[20];
    struct tanggal tanggal_lahir;
    char alamat[20];
    char nomor_hp[30];
};
```
Struktur `tanggal` mendefinisikan variabel `tanggal`, `bulan`, dan `tahun`.
Struktur `mahasiswa` menggabungkan beberapa variabel termasuk `npm`, `nama`, `tanggal_lahir` (dalam bentuk `tanggal`), `alamat`, dan `nomor_hp`.


* **Fungsi Utama (main)**
```c
int main() {
    struct mahasiswa data[50]; // Array data untuk menyimpan informasi mahasiswa
    int total = 0; // Menghitung jumlah mahasiswa yang dimasukkan
    char Pilihan;

    do {
        // Mengambil data dari pengguna
        printf("Masukkan data mahasiswa!\n");
        // ...

        total++; // Menambah total mahasiswa

        // Menampilkan info data mahasiswa yang telah dimasukkan
        printf("\nInfo data mahasiswa\n===================\n");
        for (int i = 0; i < total; i++) {
            // ...
        }

        // Meminta pengguna apakah ingin menambahkan data lagi
        printf("Apakah anda ingin menambah data lagi (y/n)  : ");
        scanf(" %c", &Pilihan);
        getchar(); // Membersihkan newline di stdin
    } while (Pilihan == 'y' || Pilihan == 'Y');

    printf("Terima Kasih");
    getchar();

    return 0;
}
```
Fungsi utama dimulai di sini.Ada array `data` dari struktur `mahasiswa` yang dapat menyimpan data hingga 50 mahasiswa.Variabel `total` digunakan untuk menghitung jumlah mahasiswa yang telah dimasukkan.Loop `do-while` digunakan untuk mengulang proses memasukkan data mahasiswa.Setelah pengguna selesai memasukkan data, program menampilkan info dari data mahasiswa yang dimasukkan.Program meminta pengguna apakah ingin menambahkan data mahasiswa lagi (`y/n`). Jika `y`, loop akan terus berlanjut. Jika `n`, program selesai.


## Source Code Masing-masing Modul
[Modul 1 (Algoritma, Pemrograman & IDE)](https://github.com/Zyxcid/Praktikum_Algoritma/tree/main/Job%20Sheet%201%20(Algoritma%2C%20Pemrograman%20%26%20IDE))  
[Modul 2 (Pemrograman Dasar C)](https://github.com/Zyxcid/Praktikum_Algoritma/tree/main/Job%20Sheet%202%20(Pemrograman%20Dasar%20C))  
[Modul 3 (Variabel, Konstanta & Tipe Data)](https://github.com/Zyxcid/Praktikum_Algoritma/tree/main/Job%20Sheet%203%20(Variabel%2C%20Konstanta%20%26%20Tipe%20Data))  
[Modul 4 (Operator)](https://github.com/Zyxcid/Praktikum_Algoritma/tree/main/Job%20Sheet%204%20(Operator))  
[Modul 5 (Flow Control: Decision Making)](https://github.com/Zyxcid/Praktikum_Algoritma/tree/main/Job%20Sheet%205%20(Flow%20Control%3A%20Decision%20Making))  
[modul 6 (Flow Control: Loop (Perulangan))](https://github.com/Zyxcid/Praktikum_Algoritma/tree/main/Job%20Sheet%206%20(Flow%20Control%3A%20Loop%20(Perulangan)))  
[Modul 7 (Struktur Data: Array)](https://github.com/Zyxcid/Praktikum_Algoritma/tree/main/Job%20Sheet%207%20(Struktur%20Data%3A%20Array))  
[Modul 8 (Fungsi & Prosedur)](https://github.com/Zyxcid/Praktikum_Algoritma/tree/main/Job%20Sheet%208%20(Fungsi%20%26%20Prosedur))  
[Modul 9 (Pointer)](https://github.com/Zyxcid/Praktikum_Algoritma/tree/main/Job%20Sheet%209%20(Pointer))  
[Modul 10 (Enumerasi & Structure)](https://github.com/Zyxcid/Praktikum_Algoritma/tree/main/Job%20Sheet%2010%20(Enumerasi%20%26%20Structure))  
[Job Sheet 11]


















































    
    
    
    
    
    
    
    


























































