#include <stdio.h>
/*Nama      : Muhammad Isra Al Fattah
  NIM       : 23343045
  Prodi     : Informatika*/

struct MHS
{
      char nama[30];
      char NIM[20];
      char jurusan[20];
      char prodi[20];
};

	
int main()
{
// nomor 1
      FILE *fptr;
      char text[255];
      struct MHS datamahasiswa[2];
      fptr = fopen("datamahasiswa.txt","w");

      for (int i = 0;i < 2;i++)
      {
            printf("data mahasiswa %i \n ===================== \n",i + 1);
            printf("masukkan nama         : ");
            fgets(datamahasiswa[i].nama,sizeof(text),stdin);
            fputs(datamahasiswa[i].nama, fptr);

            printf("masukkan NIM          : ");
            fgets(datamahasiswa[i].NIM,sizeof(text),stdin);
            fputs(datamahasiswa[i].NIM, fptr);

            printf("masukkan Jurusan      : ");
            fgets(datamahasiswa[i].jurusan,sizeof(text),stdin);
            fputs(datamahasiswa[i].jurusan, fptr);

            printf("masukkan Prodi        : ");
            fgets(datamahasiswa[i].prodi,sizeof(text),stdin);
            fputs(datamahasiswa[i].prodi, fptr);

      }

      printf("data berhasil di entri");

      fclose(fptr);

      getchar();

      return 0;
}
