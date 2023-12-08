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
