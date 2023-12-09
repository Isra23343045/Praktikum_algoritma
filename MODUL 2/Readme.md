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
