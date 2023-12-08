#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// NAMA  : Muhammad Isra Al Fattah
// NIM   : 23343045
// PRODI : Informatika

// Mendefinisikan struktur Tanggal untuk menyimpan tanggal, bulan, dan tahun
struct Tanggal {
    int tanggal;
    int bulan;
    int tahun;
};

// Mendefinisikan struktur zodiak dengan rentang tanggal
struct zodiak {
    char nama_zodiak[20];
    struct Tanggal rentang_awal;
    struct Tanggal rentang_akhir;
    int bulan;
};

// Mendefinisikan struktur tanggal untuk digunakan pada data mahasiswa
struct tanggal {
    int tanggal;
    int bulan;
    int tahun;
};

// Mendefinisikan struktur untuk data mahasiswa
struct mahasiswa {
    int npm;
    char nama[20];
    struct tanggal tanggal_lahir;
    char alamat[20];
    char nomor_hp[30];
};

int main() {
    // Bagian 1: Permainan menebak nomor oleh komputer
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

    // Bagian 2: Menentukan zodiak berdasarkan tanggal lahir
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

    // Bagian 3: Memasukkan dan menampilkan data mahasiswa
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
