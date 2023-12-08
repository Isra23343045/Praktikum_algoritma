## Penjelasan Tugas Modul 9

### M9 Soal 1
```c
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
```
 
```c
    char word[10] = "BORLAND";
    char *p_word = word;
```
`word` adalah array karakter yang menyimpan kata "BORLAND".`p_word` adalah pointer yang menunjuk ke `word`.

```c
for (int i = strlen(word) - 1; i >= 0; i--) {
    p_word = word + i;
    for (int j = 0; j < strlen(word) - i; j++) {
        printf("%c", *p_word);
        p_word++;
    }
    printf("\n");
}
```
Loop pertama dimulai dari `i` yang setara dengan panjang kata dikurangi 1 hingga mencapai 0.Pada setiap iterasi, `p_word` diperbarui untuk menunjuk ke posisi dalam `word`.Loop kedua dimulai dari 0 hingga panjang kata dikurangi `i`.Pada setiap iterasi loop kedua, karakter yang ditunjuk oleh `p_word` dicetak.Setelah setiap baris selesai dicetak, baris baru ditambahkan.



### M9 Soal 2
```c
char masukan[10];
    printf("masukkan kalimat : ");
    gets(masukan);
    char *p_masukan = masukan;
    for(int i = strlen(masukan); i >= 0; i--) {
        p_masukan = masukan + i;
        printf(" %c",*p_masukan);
        p_masukan++;
    }
```

```c
    char masukan[10];
    printf("masukkan kalimat : ");
    gets(masukan);
    char *p_masukan = masukan;
```
`masukan` adalah array karakter dengan kapasitas untuk 10 karakter yang digunakan untuk menyimpan input dari pengguna.`printf("masukkan kalimat : ");` menampilkan pesan ke pengguna untuk memasukkan kalimat.`gets(masukan);` mengambil input dari pengguna dan menyimpannya dalam array `masukan`.`p_masukan` adalah pointer yang menunjuk ke `masukan`.


```c
for(int i = strlen(masukan); i >= 0; i--) {
    p_masukan = masukan + i;
    printf(" %c",*p_masukan);
    p_masukan++;
}
```
Loop dimulai dari `i` yang setara dengan panjang kalimat yang dimasukkan dikurangi 1 hingga mencapai 0.Pada setiap iterasi, `p_masukan` diperbarui untuk menunjuk ke posisi dalam `masukan`.Karakter yang ditunjuk oleh `p_masukan` dicetak dengan menggunakan `printf`.Setelah itu, `p_masukan` diperbarui untuk menunjuk ke karakter berikutnya dalam `masukan`.


Code ini akan mencetak karakter-karakter dari input kalimat secara terbalik, dengan spasi di antara setiap karakter. Misalnya, jika Anda memasukkan kalimat "Hello", outputnya akan seperti ini: `o l l e H`. Namun, perlu dicatat bahwa penggunaan `gets` dalam C memiliki risiko keamanan karena tidak ada pengamanan terhadap overflow buffer. Penggunaan `gets` bisa digantikan dengan fungsi lebih aman seperti `fgets`.



### M9 Soal 3
```c
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
```

* **Inisialisasi variabel dan pencetakan nilai**
```c
    int lesley = 57082;
    int layla = lesley;
    int balmond = layla + 1;
    printf("\n a) nilai layla adalah %i\n", layla);
    printf("b) nilai balmond adalah %i\n", balmond);
    printf("==============================\n");
```

`lesley` diinisialisasi dengan nilai 57082.Nilai dari `lesley` disalin ke `layla`.`balmond` diinisialisasi dengan nilai `layla + 1`.Nilai `layla` dan `balmond` dicetak.

* **Pemakaian pointer dan pencetakan nilai**
```c
    lesley = 57082;
    int *Layla = &lesley;
    int Balmond = *Layla + 1;
    printf("\n a) nilai layla adalah %i\n", *Layla);
    printf("b) nilai balmond adalah %i\n", Balmond);
    getchar();
```
`lesley` diatur kembali ke nilai 57082.Pointer `Layla` diinisialisasi untuk menunjuk ke alamat memori dari `lesley`.Variabel `Balmond` diinisialisasi dengan nilai yang ditunjuk oleh `Layla` ditambah 1.Nilai dari variabel yang ditunjuk oleh `Layla` dan nilai `Balmond` dicetak.

Dua bagian kode tersebut melakukan hal yang sama dengan cara yang sedikit berbeda. Pertama, menggunakan variabel langsung (`lesley`, `layla`, dan `balmond`), sedangkan yang kedua, menggunakan pointer (`Layla` dan `Balmond`). Hasil akhirnya adalah mencetak nilai `layla` dan nilai `balmond` yang sama pada kedua kasus tersebut.
