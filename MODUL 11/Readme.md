## Penjelasan Tugas Modul 11


```c
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

```

* **Deklarasi Struktukr**
```c
struct MHS {
    char nama[30];
    char NIM[20];
    char jurusan[20];
    char prodi[20];
};

```

Ada definisi struktur `MHS` (Mahasiswa) dengan beberapa atribut seperti `nama`, `NIM`, `jurusan`, dan `prodi`.

* **Fungsi Utama `(main)`**
```c
int main() {
    FILE *fptr; // Pointer untuk file
    char text[255]; // Array untuk teks yang diinput

    struct MHS datamahasiswa[2]; // Array dari struktur MHS untuk menyimpan data 2 mahasiswa

    fptr = fopen("datamahasiswa.txt", "w"); // Membuka file "datamahasiswa.txt" untuk ditulis

    for (int i = 0; i < 2; i++) {
        // Meminta pengguna untuk memasukkan data mahasiswa
        printf("data mahasiswa %i \n ===================== \n", i + 1);
        printf("masukkan nama         : ");
        fgets(datamahasiswa[i].nama, sizeof(text), stdin);
        fputs(datamahasiswa[i].nama, fptr); // Menulis nama ke file

        printf("masukkan NIM          : ");
        fgets(datamahasiswa[i].NIM, sizeof(text), stdin);
        fputs(datamahasiswa[i].NIM, fptr); // Menulis NIM ke file

        printf("masukkan Jurusan      : ");
        fgets(datamahasiswa[i].jurusan, sizeof(text), stdin);
        fputs(datamahasiswa[i].jurusan, fptr); // Menulis jurusan ke file

        printf("masukkan Prodi        : ");
        fgets(datamahasiswa[i].prodi, sizeof(text), stdin);
        fputs(datamahasiswa[i].prodi, fptr); // Menulis prodi ke file
    }

    printf("data berhasil di entri");

    fclose(fptr); // Menutup file

    getchar(); // Menunggu tombol Enter dari pengguna

    return 0;
}

```
Program memulai dengan mendeklarasikan variabel pointer file `(fptr)` dan array teks `(text)`.
Kemudian, ada array `datamahasiswa` dengan ukuran 2 untuk menyimpan data mahasiswa.Program membuka file `"datamahasiswa.txt"` dalam mode menulis `("w")`.Di dalam loop `for`, pengguna diminta untuk memasukkan data mahasiswa dan data tersebut ditulis ke file.Setelah semua data dimasukkan, program menampilkan pesan bahwa data berhasil di-entri.Kemudian, file ditutup `(fclose(fptr))`.`getchar()` digunakan untuk menunggu pengguna menekan tombol Enter sebelum program berakhir.





