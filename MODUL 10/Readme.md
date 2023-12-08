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

