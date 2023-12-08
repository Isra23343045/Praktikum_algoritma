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
