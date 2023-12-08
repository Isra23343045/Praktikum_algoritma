#include <stdio.h>
void add_number(int *number)
{
      *number = *number + 5;
      printf("number ditambah 5\n");
}
int main()
{
      int nomor = 3;
      char nama[20] = "putri";
      printf("alamat memori dari variabel nama adalah %x\n", &nama);
      printf("alamat memori dari variabel nomor adalah %x\n", &nomor);
      printf("===============================\n\n");

      int umur = 19;
      float tinggi = 175.6;
      int *pointer_umur = &umur;
      int *pointer2 = &umur;
      float *p_tinggi = &tinggi;

      printf("alamat memori dari variabel 'umur' adalah : %d\n",&umur);
      printf("alamat memori dari variabel 'tinggi' adalah : %d\n",&tinggi);
      printf("preferensi dari alamat memori '*pointer_umur' adalah : %d\n", pointer_umur);
      printf("preferensi dari alamat memori '*pointer2' adalah : %d\n", pointer2);
      printf("preferensi dari alamat memori '*p_tinggi' adalah : %d\n", p_tinggi);

      printf(" alamat memori '*pointer_umur' adalah : %d\n", &pointer_umur);
      printf(" alamat memori '*pointer2' adalah : %d\n", &pointer2);
      printf(" alamat memori '*p_tinggi' adalah : %d\n", &p_tinggi);

      int Umur = 0;
      int *p_umur = &Umur;
      printf("\nisi *p_umur adalah : %d\n",*p_umur);
      printf("isi umur awal adalah : %d\n",Umur);
      *p_umur = 10;
      printf("isi umur setelah di mod adalah : %d\n",Umur);

      int number = 1;
      printf("nilai variabel number sebelum di ubah : %d\n",number);
      add_number(&number);
      printf("nilai variabel number setelah di ubah : %d\n",number);
      add_number(&number);
      add_number(&number);
      add_number(&number);
      add_number(&number);
      add_number(&number);
      add_number(&number);
      printf("nilai variabel number setelah diubah sekian kali : %d\n",number);

      char antrian[5] = {'a','b','c','d','e'};
      char *p_current = &antrian;
      for(int i = 0;i < 5; i++)
      {
            printf("nomor urut %c agar dapat menemui cs\n", *p_current);
            printf("saat ini cs sedang melayani %c\n",*p_current);
            printf("tekan enter untuk next......");
            getchar();
            p_current++;
      }
      printf("selesai!\n");
      char word[] = "BORLAND";
    int length = strlen(word);

    for (int i = 0; i < length; i++) {
        char *p_word = word + i;
        for (int j = 0; j < i + 1; j++) {
            printf("%c", *p_word);
            p_word++;
        }
        printf("\n");
    }
    getchar();



      return 0;    
}