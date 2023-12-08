/*Nama      :Muhammad Isra Al Fattah
  Nim       :23343045
  Prodi     :Informatika*/
#include <stdio.h>
#include <string.h>

int main() {
    /* Program untuk menghasilkan pola karakter tertentu, membalik kalimat, dan melakukan operasi pointer */

    // Bagian 1: Mencetak pola karakter dari string "BORLAND"
    char word[10] = "BORLAND";
    char *p_word = word;

    for (int i = strlen(word) - 1; i >= 0; i--) {
        p_word = word + i;
        for (int j = 0; j < strlen(word) - i; j++) {
            printf("%c", *p_word);
            p_word++;
        }
        printf("\n");
    }

    // Bagian 2: Membalik kalimat yang dimasukkan
    char masukan[10];
    printf("masukkan kalimat : ");
    gets(masukan);
    char *p_masukan = masukan;
    for(int i = strlen(masukan); i >= 0; i--) {
        p_masukan = masukan + i;
        printf(" %c",*p_masukan);
        p_masukan++;
    }

    // Bagian 3: Melakukan operasi pada variabel dan pointer
    int lesley = 57082;
    int layla = lesley;
    int balmond = layla + 1;
    printf("\n a) nilai layla adalah %i\n",layla);
    printf("b) nilai balmond adalah %i\n",balmond);
    printf("==============================\n");
      
    lesley = 57082;
    int *Layla = &lesley;
    int Balmond =  *Layla + 1;
    printf("\n a) nilai layla adalah %i\n",*Layla);
    printf("b) nilai balmond adalah %i\n",Balmond);
    getchar();
}
