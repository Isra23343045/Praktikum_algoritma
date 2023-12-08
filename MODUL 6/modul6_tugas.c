/*Nama      :Muhammad Isra Al Fattah
  Nim       :23343045
  Prodi     :Informatika*/
#include <stdio.h>
#include <stdlib.h>

int main() {

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

    printf("\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");

    /*
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
    printf("\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");

    /* 
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

    /*
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
    return 0;
}
