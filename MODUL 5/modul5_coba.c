#include <stdio.h>

int main() {
    int belanja = 120000;
    char password[] = "rahasia";
    char grade = 'A';


    if (belanja > 100000) {
        printf("Selamat, Anda dapat bonus diskon!\n");
    } else {
        printf("Maaf, Anda tidak dapat bonus diskon.\n");
    }


    if (password == "rahasia") {
        printf("Selamat datang bos!\n");
    } else {
        printf("Password salah, coba lagi!\n");
    }
    printf("Pesan di luar blok if-else\n");


    if (grade >= 'A' && grade <= 'D') {
        printf("Anda lulus.\n");
    } else if (grade == 'E') {
        printf("Anda perlu perbaikan.\n");
    } else {
        printf("Grade tidak valid.\n");
    }


    switch (toupper(grade)) {
        case 'A':
            printf("Excellent!\n");
            break;
        case 'B':
        case 'C':
            printf("Good job!\n");
            break;
        default:
            printf("Invalid grade.\n");
    }

    int nilai = 75;
    printf("Hasil ujian: %s\n", (nilai >= 60) ? "Lulus" : "Gagal");


    int x = 10, y = 20;
    if (x > 5) {
        if (y > 15) {
            printf("x lebih dari 5 dan y lebih dari 15\n");
        } else {
            printf("x lebih dari 5 tapi y tidak lebih dari 15\n");
        }
    } else {
        printf("x tidak lebih dari 5\n");
    }

    return 0;
}