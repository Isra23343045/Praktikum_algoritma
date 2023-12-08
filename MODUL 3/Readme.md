## Penjelasan Tugas Modul 3

### M3 Soal 1
```c
#include <stdio.h>

int main() {
    /* Program untuk konversi mata uang Rupiah ke Dollar */
    int rupiah = 2500000;
    const double dollar = 14.250;
    printf("Dollar yang harus anda berikan kepada si penukar untuk Rp. 2.500.000 \n");
    int hasil_konversi = rupiah / dollar; // Menghitung konversi ke dollar
    printf("Dollar yang harus anda berikan adalah : %i dollar\n", hasil_konversi);
```
* **Deklarasi Variabel**
```c
    int rupiah = 2500000;
    const double dollar = 14.250;
```
Variabel `rupiah` diinisialisasi dengan nilai 2500000, yang merupakan jumlah mata uang dalam Rupiah yang akan dikonversi ke Dollar.Konstanta `dollar` dideklarasikan sebagai `double` dan diinisialisasi dengan nilai 14.250, merupakan nilai tukar dari Rupiah ke Dollar.
* **Output informasi Konversi**
```c
printf("Dollar yang harus anda berikan kepada si penukar untuk Rp. 2.500.000 \n");
```
Program menampilkan informasi tentang konversi mata uang dari Rupiah ke Dollar dengan nilai awal 2.500.000 Rupiah.
* **Perhitungan Konversi Mata Uang**
```c
int hasil_konversi = rupiah / dollar; // Menghitung konversi ke dollar
```
Dilakukan operasi pembagian `rupiah` dengan `dollar` untuk menghitung jumlah Dollar yang setara dengan jumlah Rupiah yang diberikan.
* **Output Hasil Konversi**
```c
printf("Dollar yang harus anda berikan adalah : %i dollar\n", hasil_konversi);
```
Program menampilkan hasil konversi dalam Dollar yang harus diberikan kepada penukar dengan menggunakan `%i` untuk mencetak variabel `hasil_konversi`.Jadi, program ini menghitung dan menampilkan jumlah Dollar yang setara dengan 2.500.000 Rupiah berdasarkan nilai tukar yang telah ditentukan.


### M3 Soal 2
```c
/* Program untuk konversi suhu dari Celcius ke Kelvin, Fahrenheit, dan Reamur */
    float k, f, r, c;
    
    printf("Silahkan masukkan suhu (Celcius) yang akan dikonversi: \n");
    scanf("%f", &c);
    k = c + 273.15; // Konversi ke Kelvin
    f = (c * 1.8) + 32; // Konversi ke Fahrenheit
    r = c * 0.8; // Konversi ke Reamur

    printf("Input Suhu (Celcius)    = %f\n", c);
    printf("Suhu dalam Kelvin       = %.2f \n", k);
    printf("Suhu dalam Fahrenheit   = %.2f\n", f);
    printf("Suhu dalam Reamur       = %.2f\n", r);
```
* **Deklarasi Variabel**
```c
float k, f, r, c;
```
Variabel `k`, `f`, `r`, dan `c` dideklarasikan sebagai variabel bertipe float untuk menyimpan nilai suhu dalam Kelvin, Fahrenheit, Reamur, dan Celsius secara berturut-turut.
* **Input Suhu dari pengguna**
```c
printf("Silahkan masukkan suhu (Celcius) yang akan dikonversi: \n");
scanf("%f", &c);
```
Program meminta pengguna untuk memasukkan suhu dalam Celsius menggunakan `printf`, lalu menyimpan nilai tersebut dalam variabel `c` menggunakan `scanf`.

* **Konversi ke Suhu Lainnya**
```c
k = c + 273.15; // Konversi ke Kelvin
f = (c * 1.8) + 32; // Konversi ke Fahrenheit
r = c * 0.8; // Konversi ke Reamur
```
Dilakukan konversi suhu dari Celsius ke Kelvin, Fahrenheit, dan Reamur dengan rumus konversi yang sesuai.

* **Output Hasil Konversi**
```c
printf("Input Suhu (Celcius)    = %f\n", c);
printf("Suhu dalam Kelvin       = %.2f \n", k);
printf("Suhu dalam Fahrenheit   = %.2f\n", f);
printf("Suhu dalam Reamur       = %.2f\n", r);
```
Program menampilkan nilai suhu yang diinputkan dalam Celsius, serta nilai konversinya dalam Kelvin, Fahrenheit, dan Reamur menggunakan `printf`.Jadi, program ini memungkinkan pengguna untuk memasukkan suhu dalam Celsius, lalu mengkonversinya ke suhu dalam skala Kelvin, Fahrenheit, dan Reamur, dan menampilkan hasilnya.


### M3 Soal 3
```c
/* Program untuk menghitung volume dan luas permukaan dari sebuah bola basket */
    
    
    int diameter = 12, R;
    R = diameter / 2;
    const float phi = 3.14;
    float volume, luas;

    printf("Menghitung volume permukaan bola \n");
    printf("Volume = 4/3 X Phi X r X r X r\n");
    printf("Volume = 4/3 X 3.14 X 6 X 6 X 6\n");
    volume = 4 / 3 * phi * R * R * R; // Menghitung volume bola
    printf("Volume = %.2f\n", volume);

    printf("Menghitung luas permukaan bola \n");
    printf("Luas = 4 X Phi X r X r \n");
    printf("Luas = 4 X 3.14 X 6 X 6 \n");
    luas = 4 * phi * R * R; // Menghitung luas permukaan bola
    printf("Luas = %.2f\n", luas);
```
* **Deklarasi Variabel dan Konstanta**
```c
    int diameter = 12, R;
    R = diameter / 2;
    const float phi = 3.14;
    float volume, luas;
```
Variabel `diameter` diinisialisasi dengan nilai 12, merepresentasikan diameter bola.
Variabel `R` digunakan untuk menyimpan nilai jari-jari bola yang dihitung sebagai setengah dari diameter `(diameter / 2)`.
Konstanta `phi` dideklarasikan dengan nilai 3.14 sebagai representasi dari pi (π).
Variabel `volume` dan `luas` dideklarasikan untuk menyimpan hasil perhitungan volume dan luas permukaan bola.

* **Perhitungan Volume Bola**
```c
    printf("Menghitung volume permukaan bola \n");
    printf("Volume = 4/3 X Phi X r X r X r\n");
    printf("Volume = 4/3 X 3.14 X 6 X 6 X 6\n");
    volume = 4 / 3 * phi * R * R * R; // Menghitung volume bola
    printf("Volume = %.2f\n", volume);
```
Program menampilkan informasi tentang perhitungan volume bola.Rumus volume bola dituliskan tetapi perhitungan tidak benar karena ekspresi `4 / 3` akan dievaluasi sebagai `1` dalam operasi integer. Perlu pembenahan dalam rumus ini.

* **Perhitungan Luas Permukaan Bola**
```c
    printf("Menghitung luas permukaan bola \n");
    printf("Luas = 4 X Phi X r X r \n");
    printf("Luas = 4 X 3.14 X 6 X 6 \n");
    luas = 4 * phi * R * R; // Menghitung luas permukaan bola
    printf("Luas = %.2f\n", luas);
```
Program menampilkan informasi tentang perhitungan luas permukaan bola.Perhitungan luas permukaan bola dilakukan dengan menggunakan rumus yang sesuai.Meskipun tujuannya adalah menghitung volume dan luas permukaan bola, perhitungan volume bola perlu diperbaiki karena penggunaan bilangan bulat `(4 / 3)` yang menghasilkan nilai bulat. Idealnya, pemakaian nilai pecahan atau penerapan tipe data yang sesuai perlu diperhatikan untuk perhitungan yang akurat.
