# Project Title
Muhammad Isra Al Fattah
23343045
Informatika

Repositori ini berisi penjelasan dari tiap tiap latihan pada modul modul yang telah dipelajari pada semester 1 
[![Build Status](https://travis-ci.org/anfederico/clairvoyant.svg?branch=master)](https://travis-ci.org/anfederico/clairvoyant)
![Dependencies](https://img.shields.io/badge/dependencies-up%20to%20date-brightgreen.svg)
[![License](https://img.shields.io/badge/license-MIT-blue.svg)](https://opensource.org/licenses/MIT)

## Table of contents

* [ Penjelasan Tugas Modul 1](#links)
  * [ Soal 1](#links)
  * [ Soal 2](#links)
  * [ Soal 3](#links)
  * [ Soal 4](#links)
* [Tugas Modul 2](#versions)
* [Tugas Modul 3](#roadmap)
* [Tugas Modul 4](#development-guide)
* [Tugas Modul 5](#deployment)
* [Tugas Modul 6](#contact)
* [Tugas Modul 7](#copyright)


## Penjelasan Tugas Modul 1

### Soal 1 : Meminta Nama Lengkap User dan Menyapanya

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
* **char nama_depan[40], nama_tengah[20], nama_belakang[20];** :  Ini adalah pendefinisian variabel-variabel bertipe `char` yang digunakan untuk menyimpan nama depan, tengah, dan belakang dari pengguna. Variabel-variabel ini adalah array karakter dengan kapasitas maksimum yang telah ditentukan.
* **printf("masukkan nama depanmu: ");**: Ini adalah perintah untuk mencetak pesan meminta input dari pengguna untuk nama depan.
* **scanf("%s", nama_depan);**: Ini adalah perintah untuk menerima input dari pengguna. `%s` dalam `scanf` digunakan untuk menerima string dari pengguna dan nilai akan disimpan dalam variabel `nama_depan`.Seterusnya, proses yang sama dilakukan untuk nama tengah dan nama belakang dengan `printf` untuk pesan masukan dan `scanf` untuk menerima input.
* **printf("Selamat datang %s %s %s dalam pemrograman C ", nama_depan, nama_tengah, nama_belakang);**: Ini adalah perintah untuk mencetak pesan selamat datang kepada pengguna dengan menggunakan nilai yang telah dimasukkan sebelumnya untuk nama depan, tengah, dan belakang.

