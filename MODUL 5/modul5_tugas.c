/*Nama      :Muhammad Isra Al Fattah
  Nim       :23343045
  Prodi     :Informatika*/
#include <stdio.h>
#include <ctype.h>

int main() {
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

    return 0;
}
