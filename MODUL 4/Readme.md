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

