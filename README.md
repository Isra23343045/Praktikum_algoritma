Repositori ini berisi mengenai semua [Rangkuman](#Rangkuman) materi perkuliahan praktikum algoritma pemrogaman pada Semester 1 beserta penjelasan soal soal tugas dari masin masing Modul.

📓 Mata Kuliah : Praktikum Algoritma.
👨‍🏫 Dosen: Randi Proska Sandra, M.Sc.
🏫 Kode kelas : Kode Kelas : INF1.62.1008.
***
### 🧘 A Little About Me
👨‍🔬Nama : Muhammad Isra Alfattah
📓Prodi : Informatika
📆Nim   :23343045

2023,tahun pertama saya belajar mengenai Dunia per-*codingan*,yang saya tidak *expect* sama sekali kalau saya akan terjun di dunia software engineer. it's a good thing,i don't doubt it. Mengetahui banyak hal hal baru yang bagi saya suatu hal yang *fresh* yang cocok dengan diri saya sendiri. Saya bersyukur selama belajar mengenai algoritma pemrograman saya dapat memahami pembelajaran yang dikasih dosen saya,dan saya berharap ini merupakan awalan bagi saya dalam mempelajari lebih dalam mengenai dunia software engineer,yang tidak terbatas hanya dari kampus,tetapi dari sumber sumber lain.

***
***
## Rangkuman Masing-masing Modular

### Modul 2(Pemrograman Dasar C)
***
#### Sintaks Dasar C
Struktur dasar terbagi menjadi Bagian Include dan Fungsi Main.`#include` untuk file header, seperti stdio.h.main() adalah fungsi utama yang wajib ada dalam setiap program C.Setiap perintah diakhiri dengan ;.

#### Identifier
Nama yang mengidentifikasi variabel, fungsi, atau item lainnya.Aturan penulisan: diawali huruf/underscore, case sensitive.

### Comments dan Whitespaces
Komentar untuk dokumentasi program.Whitespaces (spasi, tab, dll.) memisahkan elemen dalam statement.


### Fungsi Dasar Input Output

`printf()` untuk output ke layar dengan format specifier.`puts()` untuk output dengan baris baru otomatis.`putchar()` untuk menampilkan satu karakter.`scanf()` untuk ambil input dari keyboard dengan format specifier.`gets()` dan `fgets()` untuk input dalam satu baris.

Penjelasan lengkap tugas modul 2 👉 [Modul 2(Pemrograman Dasar C)](https://github.com/Isra23343045/rename-when-it-s-completed/blob/main/MODUL%202/Readme.md)

***
***
### Modul 3(Variabel, Konstanta & Tipe Data)
***
#### Variabel

Variabel digunakan untuk menyimpan nilai sementara dalam program.Dalam C, variabel dibuat dengan menentukan tipe data dan nama variabel, misalnya: `int tinggi;`.Aturan penulisan variabel: tidak boleh diawali simbol/angka, tidak boleh menggunakan kata kunci bahasa C, *case sensitive*, disarankan menggunakan underscore untuk nama variabel dengan dua suku kata.
#### Tipe Data

Ada beberapa tipe data dalam C, seperti Char, Integer, Float, dan Double.Tipe data memiliki panjang dan ukuran yang berbeda.Format penulisan tipe data float/double menggunakan tanda titik, sedangkan tipe data char diapit tanda petik.

#### Tipe Data Void

Tipe data void adalah tipe khusus untuk menyatakan tidak ada data.Fungsi `main()` yang menggunakan void tidak mengembalikan nilai.
#### Konversi Tipe Data

Konversi tipe data (type casting) mengubah tipe data menjadi yang lain, seperti mengubah integermenjadi float.Pembagian antar tipe data integer selalu akan menghasilkan nilai bulat.
#### Konstanta

Konstanta adalah nilai tetap yang tidak dapat diubah.Cara pembuatan konstanta menggunakan `#define` atau `const`, disarankan menggunakan huruf kapital untuk nama konstanta.

***
***


### Modul 4(Operator)

#### Definisi Operator

Operator adalah simbol untuk melakukan operasi, terbagi menjadi unary, binary, dan ternary tergantung jumlah operand.
Operand adalah nilai yang dioperasikan.
#### Operator Aritmatika

Operator (+, -, *, /, %) digunakan untuk operasi matematika.
Perlu memperhatikan tipe data, misalnya, pembagian antara bilangan integer akan menghasilkan nilai bulat.

#### Operator Penugasan

Operator penugasan (=, +=, -=, *=, /=, %=, <<=, >>=, &=, |=, ^=) digunakan untuk memberikan nilai pada variabel.
Contoh: a += b; setara dengan a = a + b;

#### Operator Pembanding

Operator pembanding (<, >, ==, !=, <=, >=) untuk membandingkan dua nilai dan menghasilkan nilai boolean (true/false).
Dalam bahasa C, true direpresentasikan sebagai 1, false sebagai 0.

#### Operator Logika

Operator logika (&&, ||, !) untuk operasi logika.
Digunakan untuk membuat keputusan berdasarkan kondisi logis.
#### Operator Bitwise

Operator bitwise (&, |, ^, ~, <<, >>) untuk operasi pada level bit dari nilai numerik.
AND, OR, XOR, NOT, Left Shift, Right Shift adalah beberapa operasi yang dilakukan pada nilai biner.
#### Operator Lainnya

Operator alamat memori (&), pointer (*), ternary (?:), increment (++), dan decrement (--) juga digunakan untuk fungsi khusus.

***
***

### Modul 5(Flow Control: Decision Making)
***
#### Decision Making (Percabangan)

C menyediakan pernyataan aliran kontrol untuk mengubah jalur eksekusi program.
Jenis pernyataan: if, if/else, if/else if, switch case, operator ternary.

#### Pernyataan if
Percabangan dengan satu blok pilihan saat kondisi benar.
Contoh:
```c
if (total_belanja > 100000) {
  printf("Selamat, Anda dapat bonus diskon!");
}
```
#### Pernyataan if/else
Percabangan dengan dua blok pilihan untuk kondisi benar dan salah.
Contoh:
```c
if (password_benar) {
  printf("Selamat datang bos!");
} else {
  printf("Password salah, coba lagi!");
}
```
#### Pernyataan Switch Case
Bentuk percabangan lain dengan struktur switch dan beberapa case.
Contoh:
```c
switch (nilai) {
  case 'A': grade = 'B'; break;
  case 'B': // Tidak ada pernyataan; mengikuti case 'C'
  case 'C': grade = 'D'; break;
  default: grade = 'E';
}
```
#### Operator Ternary

Bentuk singkat dari if/else.
Contoh:
```c
grade = (nilai >= 70) ? 'A' : 'B';
// Sama dengan if (nilai >= 70) grade = 'A'; else grade = 'B';
```

***
***



### Modul 6(Flow Control: Loop (Perulangan))
***
#### Perulangan

Perulangan memungkinkan eksekusi kode secara berulang hingga kondisi tertentu terpenuhi.
Loop membantu dalam mengeksekusi kode berulang tanpa penulisan yang berlebihan.
#### Jenis Perulangan

Counted Loop: For
Uncounted Loop: While, Do/While
#### Perulangan For

Counted loop yang jelas berapa kali akan diulang.
Penggunaan variabel counter untuk mengatur perulangan.
Mampu mengatur hitungan awal, batas perulangan, dan langkah hitungan.
#### Perulangan While

Uncounted loop, bisa menjadi counted loop dengan memberikan counter.
Melakukan perulangan selama kondisi terpenuhi.
#### Perulangan Do/While

Melakukan perulangan minimal 1 kali sebelum mengecek kondisi.
Mirip dengan while, tapi mengecek kondisi setelah eksekusi pertama.

#### Perulangan Bersarang (Nested Loop)

Membuat perulangan dalam perulangan.
Menggunakan dua perulangan for untuk nested loop.

***
***
### Modul 6(Flow Control: Loop (Perulangan))
***
#### Penggunaan Array

Array memungkinkan penyimpanan data dalam satu tempat dengan nomor indeks yang memudahkan akses.
Menggunakan array membantu menghindari penulisan data secara terpisah.
#### Pengertian Array

Array adalah struktur data untuk menyimpan sekumpulan data dalam satu tempat.
Setiap data dalam array memiliki indeks yang dimulai dari 0.
#### Membuat dan Mengakses Array

Membuat array dilakukan dengan menentukan panjangnya dalam kurung siku [].
Mengakses data array menggunakan nomor indeks, dengan indeks dimulai dari 0.
#### Merubah Data dalam Array

Data dalam array dapat diubah dengan menetapkan nilai baru melalui indeksnya.
#### Penggunaan Perulangan dengan Array

Perulangan membantu mencetak atau memanipulasi nilai dalam array tanpa menuliskannya secara manual.
For loop digunakan untuk mengakses setiap elemen dalam array.
#### Mendapatkan Panjang Array

Fungsi sizeof() digunakan untuk mendapatkan panjang atau ukuran array.
Panjang array bisa dihitung dengan membagi ukuran total array dengan ukuran tiap elemennya.
#### Latihan: Program Hitung Rata-Rata

Contoh penggunaan array dalam menghitung rata-rata dari sejumlah data.
#### Array Multidimensi

Array dua dimensi digunakan untuk membuat matriks dengan baris dan kolom.
Mengakses data dalam array dua dimensi dilakukan dengan indeks baris dan kolom.
#### Penggunaan String

String adalah array karakter yang digunakan untuk menyimpan teks.
Fungsi dari library string.h seperti strcpy(), strcat(), strlen(), strcmp() membantu manipulasi string.
***
***
### Modul 8(Fungsi & Prosedur)
***
#### Pengertian Fungsi

Fungsi adalah sub-program yang dapat digunakan kembali dalam program lain atau dalam program itu sendiri.
Fungsi main() adalah fungsi utama yang dieksekusi pertama kali dalam setiap program C.
#### Membuat Fungsi

Fungsi dalam bahasa C dibuat dengan menentukan tipe data untuk nilai kembalian dan bisa menggunakan kata kunci void jika tidak mengembalikan nilai.
Fungsi bisa dipanggil berulang kali dari fungsi main() atau fungsi lainnya.
#### Fungsi dengan Parameter

Parameter adalah variabel yang menyimpan nilai untuk diproses di dalam fungsi.
Fungsi dapat memiliki parameter yang dikenali hanya di dalam fungsi tersebut.
#### Fungsi yang Mengembalikan Nilai

Fungsi sering harus mengembalikan nilai agar dapat diproses di tahap berikutnya dengan kata kunci return.
#### Fungsi Rekursif

Fungsi rekursif adalah fungsi yang memanggil dirinya sendiri.
Contoh penggunaan fungsi rekursif adalah fungsi faktorial.
#### Variabel Lokal & Variabel Global

Variabel lokal hanya dapat diakses di dalam fungsi, sedangkan variabel global dapat diakses dari seluruh bagian program.
#### Pass by Value & Pass by Reference

Pass by value adalah cara memberikan nilai pada parameter dengan langsung memberikan nilainya.
Pass by reference adalah memberikan alamat memori sebagai nilai parameter menggunakan pointer.
#### Latihan: Contoh Program

Contoh program untuk menguji fungsi-fungsi dalam C seperti perulangan, fungsi yang mengembalikan nilai, dan fungsi rekursif.

***
***

### Modul 9(Pointer)
***
#### Pengertian Pointer

Pointer menyimpan alamat memori dari variabel lain.
Alamat memori adalah lokasi penyimpanan data di RAM. Symbol `&` digunakan untuk mendapatkan alamat memori.
#### Penggunaan Pointer

Pointer dibuat dengan simbol * di depan nama variabel dan diisi dengan alamat memori.
Pointer mengakses data yang disimpan pada alamat memori referensinya.
#### Membuat Pointer

Pointer dapat diisi langsung dengan alamat memori atau diambil alamat memori dari variabel lain.
Program dapat menggunakan pointer untuk mengakses data dan mengubah nilainya.
#### Alamat Memori Pointer

Alamat memori pointer adalah lokasi di memori yang digunakan untuk menyimpan pointer itu sendiri.
Alamat referensi adalah alamat yang diakses oleh pointer.
#### Penggunaan Pointer

Pointer memungkinkan akses dan modifikasi data pada alamat memori tertentu, memberikan efisiensi dan fleksibilitas dalam pengelolaan memori.
#### Pass by Reference

Pointer memungkinkan pass by reference, di mana variabel dapat dimodifikasi di luar fungsi utama.
#### Pengaksesan Array dengan Pointer

Pointer sering digunakan untuk mengakses dan mengubah elemen dalam array, memungkinkan manipulasi data secara efisien.
#### Manfaat Pointer

Pointer memberikan optimasi performa program dengan alokasi memori yang lebih hemat, terutama dalam pengelolaan struktur data kompleks.

***
***


### Modul 10(Enumerasi & Structure)


#### Pengertian Enumerasi

Enum merupakan tipe data yang berisi sekumpulan konstanta, digunakan untuk menyederhanakan penggunaan konstanta yang terbatas.
Enum dibuat dengan menyusun konstanta menggunakan format `enum NAMA_ENUM { KONSTANTA_1, KONSTANTA_2, ... };`.
#### Membuat Program dengan Enum

Enum bisa digunakan untuk mempermudah penggunaan konstanta dengan nilai bawaan yang mengikuti urutan penulisan.
Enum dapat membentuk tipe data boolean dengan nilai true (1) dan false (0).
#### Manfaat Enum

Enum memberikan efisiensi dalam penggunaan memori karena variabel enum hanya menyimpan satu nilai dari konstanta yang ada.
#### Pengertian Structure (Struct)

Struct merupakan kumpulan dari beberapa variabel dengan beragam tipe data yang dibungkus dalam satu variabel.
Struktur memungkinkan pembuatan tipe data abstrak dengan unit-unit penyusunnya.
#### Keuntungan Menggunakan Struct

Struct memungkinkan penyimpanan data yang kompleks seperti data mahasiswa dengan cara yang lebih terstruktur dan mudah diorganisir.
Dibandingkan dengan penggunaan array atau variabel tunggal, struct memberikan cara yang lebih terorganisir dalam menyimpan data terkait.
#### Penggunaan Struct

Struct dibuat dengan menggunakan kata kunci `struct` diikuti dengan nama struktur dan isi dari struktur tersebut.
Untuk menggunakan struct, variabel harus dideklarasikan menggunakan nama struct yang telah dibuat.
#### Menggunakan Typedef pada Struct

Typedef adalah kata kunci untuk mendefinisikan tipe data baru. Dapat digunakan untuk menyederhanakan pemanggilan struct.
#### Struct Bersarang

Struct dapat dibuat bersarang (nested), yaitu dengan adanya struct di dalam struct.
#### Passing Struct ke dalam Fungsi

Struct dapat digunakan sebagai parameter untuk fungsi, memungkinkan penanganan data yang lebih terstruktur dalam fungsi.

***
***

### Modul 11(File Handling in C)

***

#### File handling

Untuk menyimpan data secara permanen, kita membutuhkan penyimpanan tambahan seperti file.
File dapat dibaca dan ditulis untuk mempertahankan data dan memungkinkan pertukaran data antar program atau perangkat.
#### Membaca File dengan C

File terbagi menjadi dua jenis: teks dan binary. Teks mudah dibaca dan ditulis, sedangkan binary sulit dibaca namun bisa menyimpan data lebih banyak.
Fungsi `fopen()` digunakan untuk membuka file dengan mode yang sesuai (`r`, `w`, `a`, dll.).
Mode dalam `fopen()` menentukan akses file: untuk membaca, menulis, atau menambahkan isi.
`fopen()` mengembalikan pointer yang menunjuk ke alamat memori file yang dibuka.
Fungsi `fgets()` membaca isi file per baris menggunakan pointer file `(fptr)` dan menyimpannya dalam variabel buffer.
#### Menulis dalam File dengan C

Fungsi `fputs()` digunakan untuk menulis teks ke dalam file yang dibuka.
Mode dalam `fopen()` (`w`, `w+`, `a`, dll.) menentukan akses untuk menulis atau menambahkan isi file.
Membuka kembali file dengan mode yang berbeda memungkinkan penulisan atau penambahan isi file.












