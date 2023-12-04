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
  * [Soal 1](#M2-Soal-1)
  * [Soal 2](#M2-Soal-2)
  * [Soal 3](#M2-Soal-3)
  * [Soal 4](#M2-Soal-4)
* [Penjelasan Tugas Modul 3](#Penjelasan-Tugas-Modul-3)
  * [Soal 1](#M3-Soal-1)
  * [Soal 2](#M3-Soal-2)
  * [Soal 3](#M3-Soal-3)
* [Penjelasan Tugas Modul 4](#Penjelasan-Tugas-Modul-4)
  * [Soal 1](#M4-Soal-1)
  * [Soal 2](#M4-Soal-2)
  * [Soal 3](#M4-Soal-3)
  * [Soal 4](#M4-Soal-4)
* [Penjelasan Tugas Modul 5](#Penjelasan-Tugas-Modul-5)
  * [Soal 1](#M5-Soal-1)
  * [Soal 2](#M5-Soal-2)
  * [Soal 3](#M5-Soal-3)
  * [Soal 4](#M5-Soal-4)
* [Tugas Modul 5](#deployment)
* [Tugas Modul 6](#contact)
* [Tugas Modul 7](#copyright)


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
    
    
    
    
    
    
    
    
    
    
    


























































