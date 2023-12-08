## Penjelasan Tugas Modul 7

### M7 Soal 1
```c
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
```
* **Deklarasi Variabel dan Array**
```c
    int jumlah = 20;
    char nama[jumlah][20];
    int nilai[jumlah], sum = 0, rata;
```
Variabel `jumlah` untuk menentukan jumlah siswa (20 siswa).`nama` merupakan array 2 dimensi untuk menyimpan nama 20 siswa.`nilai` adalah array untuk menyimpan nilai 20 siswa.`sum` untuk menyimpan total nilai yang diinput.`rata` untuk menyimpan nilai rata-rata.
* **Input Nama dan Nilai Siswa**
```c
for (int i = 0; i < jumlah; i++) {
    // Meminta input nama dan nilai setiap siswa.
    // ...
    scanf("%s", &nama[i]);
    scanf("%i", &nilai[i]);
    sum += nilai[i];
}
```
`Loop` for digunakan untuk meminta input nama dan nilai untuk setiap siswa.Data dimasukkan ke dalam array `nama` dan `nilai`.Nilai dari setiap siswa juga ditambahkan ke `sum untuk menghitung total nilai.

* **Menampilkan Data Siswa**
```c
    printf("\nDATA SISWA : \n");
    for (int i = 0; i < jumlah; i++) {
        printf("%i.Nama:%s\n  Nilai:%i\n", i + 1, nama[i], nilai[i]);
        printf("=========================\n");
```
Loop `for` digunakan untuk menampilkan data setiap siswa yang telah diinput.


* **Menghitung dan Menampilkan Rata-rata Nilai**
```c
rata = sum / jumlah;
printf("\nRata rata nilai dari 20 siswa adalah : %i", rata);
```
Nilai rata-rata dihitung dengan membagi total nilai `(sum)` dengan jumlah siswa `(jumlah)`.
Kemudian nilai rata-rata ditampilkan di layar.Program ini meminta nama dan nilai dari 20 siswa, menyimpan data tersebut dalam array, menampilkan data siswa, dan menghitung rata-rata dari nilai-nilai tersebut.


### M7 Soal 2
```c
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
```

* **Meminta Input Jumlah Mahasiswa**
```c
int jumlah_mahasiswa;
printf("\n\nmasukkan jumlah mahasiswa : ");
scanf("%i", &jumlah_mahasiswa);
```
Program meminta input dari pengguna untuk jumlah mahasiswa yang akan diinputkan.

* **Deklarasi Array Nama Mahasiswa Berdasarkan Jumlah Input**
```c
char nama_input[jumlah_mahasiswa][20];
```
Array `nama_input` digunakan untuk menyimpan nama mahasiswa. Ukuran array ini tergantung pada jumlah mahasiswa yang diinputkan.

* **Meminta dan Menyimpan Nama Mahasiswa**
```c
for (int i = 0; i < jumlah_mahasiswa; i++) {
    printf("\nSiswa ke-%i:\n", i + 1);
    printf("masukkan nama : ");
    scanf("%s", &nama_input[i]);
}
```
Loop `for` digunakan untuk meminta dan menyimpan nama mahasiswa ke dalam array `nama_input`

* **Menampilkan Data Nama Mahasiswa**
```c
printf("\nDATA NAMA SISWA : \n");
for (int i = 0; i < jumlah_mahasiswa; i++) {
    printf("%i.%s\n", i + 1, nama_input[i]);
}
```
Loop `for` kedua digunakan untuk menampilkan nama-nama mahasiswa yang telah diinput.
Program ini meminta input jumlah mahasiswa, menyimpan nama-nama mahasiswa tersebut dalam array, dan menampilkannya kembali sesuai dengan urutan input.



### M7 Soal 3
```c
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
```

* **Deklarasi Variabel dan Inisialisasi**
```c
    int kesempatan = 3;
    char username[20] = "qwerty123";
    char password[20] = "sepuh123";
    char input_user[20], input_pass[20];
```
`kesempatan` adalah variabel yang menyimpan jumlah kesempatan login.`username` dan `password` adalah nilai default untuk login.`input_user` dan `input_pass` adalah variabel untuk menyimpan input pengguna.


* **Meminta Input Username dan Password**
```c
    printf("\n\nprogram halaman login\n");
    printf("=======================\n");
    printf("silahkan masukkan username dan password anda \n\n");

    while (kesempatan > 0) {
        printf("username : ");
        scanf("%s", &input_user);
        printf("password : ");
        scanf("%s", &input_pass);
```
Program meminta pengguna untuk memasukkan username dan password dalam loop `while` selama masih ada kesempatan login.

* **Memeriksa Kredensial Login**
```c
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
```
Program memeriksa apakah input username dan password cocok dengan nilai default.Jika username salah, program memberikan notifikasi.Jika password salah, program mengurangi kesempatan dan memberi notifikasi. Jika kesempatan habis, program memberikan notifikasi bahwa percobaan login telah habis.Program ini meminta pengguna untuk memasukkan username dan password, memeriksa kecocokan dengan nilai default, dan memberikan notifikasi jika terjadi kesalahan atau kegagalan login. Jika login berhasil, program memberikan pesan bahwa login berhasil.

