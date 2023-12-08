/*Nama      :Muhammad Isra Al Fattah
  Nim       :23343045
  Prodi     :Informatika*/
#include <stdio.h>
#include <string.h>

int main() {
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

    // 2. Program untuk menampung input nama mahasiswa dari keyboard menggunakan array dan perulangan.
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

    // 3. Program untuk halaman login dengan username dan password.
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

    return 0;
}
