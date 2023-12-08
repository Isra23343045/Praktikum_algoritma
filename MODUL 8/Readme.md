## Penjelasan Tugas Modul 8

### M8 Soal 1
```c
int perkalian(int a,int b);
int main()
{
	int angka1,angka2;
	printf("input angka yang ingin di kali \n");
	printf("angka1 : ");
	scanf("%i",&angka1);
	printf("angka2 : ");
	scanf("%i",&angka2);
	int hasil = perkalian(angka1,angka2);
	printf("\nhasil : %i",hasil);
	
}
int perkalian(int a,int b)
{
	if(b == 1)
	{
		return a;
	}
	else
	{
		return a + perkalian(a,b-1);
	}
}
```

* **Deklarasi Fungsi `perkalian`**
```c
int perkalian(int a, int b);
```
Ini adalah prototipe fungsi perkalian yang mengambil dua argumen bertipe integer dan mengembalikan hasil `perkalian`.

* **Fungsi `main`**
```c
int main() {
    int angka1, angka2;
    printf("input angka yang ingin di kali \n");
    printf("angka1 : ");
    scanf("%i", &angka1);
    printf("angka2 : ");
    scanf("%i", &angka2);
    int hasil = perkalian(angka1, angka2);
    printf("\nhasil : %i", hasil);
}
```
Fungsi `main` meminta pengguna untuk memasukkan dua angka.Kemudian, hasil perkalian dari kedua angka tersebut dihitung menggunakan fungsi `perkalian` dan dicetak.

* **Fungsi `perkalian`**
```c
int perkalian(int a, int b) {
    if (b == 1) {
        return a;
    } else {
        return a + perkalian(a, b - 1);
    }
}
```
Fungsi `perkalian` menerima dua argumen, `a` dan `b`.Fungsi ini mengimplementasikan operasi perkalian secara rekursif menggunakan penjumlahan berulang.
Jika `b` adalah 1, fungsi ini mengembalikan nilai `a`.Jika `b` lebih dari 1, fungsi ini memanggil dirinya sendiri dengan nilai `b - 1` sampai `b` menjadi 1 dan melakukan penjumlahan kembali untuk menghitung hasil perkalian.Jadi, program ini memungkinkan pengguna untuk memasukkan dua angka dan menghitung hasil perkaliannya menggunakan metode rekursif dalam fungsi `perkalian`.



### M8 Soal 2
```c
int penjumlahan(int a,int b)
{
	int hasil = a + b;
	return hasil;
}
int pengurangan(int a,int b)
{
	int hasil = a - b;
	return hasil;
}
int perkalian(int a,int b)
{
	int hasil = a * b;
	return hasil;
}
int pembagian(int a,int b)
{
	int hasil = a / b;
	return hasil;
}


int main()
{
	int angka1,angka2;
	printf("masukkan angka1 : ");
	scanf("%i",&angka1);
	printf("masukkan angka2 : ");
	scanf("%i",&angka2);
	printf("%i + %i = %i \n",angka1,angka2,penjumlahan(angka1,angka2));
	printf("%i - %i = %i \n",angka1,angka2,pengurangan(angka1,angka2));
	printf("%i * %i = %i \n",angka1,angka2,perkalian(angka1,angka2));
	printf("%i / %i = %i \n",angka1,angka2,pembagian(angka1,angka2));



}
```

* **Fungsi `penjumlahan`**
```c
int penjumlahan(int a, int b) {
    int hasil = a + b;
    return hasil;
}
```
Fungsi ini menerima dua argumen `a` dan `b` dan mengembalikan hasil penjumlahan keduanya.

* **Fungsi `pengurangan`**
```c
int pengurangan(int a, int b) {
    int hasil = a - b;
    return hasil;
}
```
Fungsi ini menerima dua argumen a dan b dan mengembalikan hasil pengurangan keduanya.

* **Fungsi `perkalian`**
```c
int perkalian(int a, int b) {
    int hasil = a * b;
    return hasil;
}
```
Fungsi ini menerima dua argumen `a` dan `b` dan mengembalikan hasil perkalian keduanya.

* **Fungsi `pembagian`**
```c
int pembagian(int a, int b) {
    int hasil = a / b;
    return hasil;
}
```
Fungsi ini menerima dua argumen `a` dan `b` dan mengembalikan hasil pembagian keduanya.

* **Fungsi `main`**
```c
int main() {
    int angka1, angka2;
    printf("masukkan angka1 : ");
    scanf("%i", &angka1);
    printf("masukkan angka2 : ");
    scanf("%i", &angka2);
    printf("%i + %i = %i \n", angka1, angka2, penjumlahan(angka1, angka2));
    printf("%i - %i = %i \n", angka1, angka2, pengurangan(angka1, angka2));
    printf("%i * %i = %i \n", angka1, angka2, perkalian(angka1, angka2));
    printf("%i / %i = %i \n", angka1, angka2, pembagian(angka1, angka2));
}
```
Fungsi `main` meminta pengguna untuk memasukkan dua angka.Kemudian, hasil dari operasi penjumlahan, pengurangan, perkalian, dan pembagian kedua angka tersebut dicetak.


### M8 Soal 3
```c
double luas(double a,int b)

{
	double luas_lingkaran = a * b * b;
	return luas_lingkaran;
}
double keliling(double a,int b)
{
	double keliling_lingkaran = 2 * a * b;
	return keliling_lingkaran;
}
int main()
{
	const double phi = 3.14;
	int ruas;
	printf("\nprogram menghitung luas dan keliling lingkaran\n");
	printf("=================================================\n\n");
	printf("masukkan ruas lingkaran : ");
	scanf("%i",&ruas);
	printf("luas dan keliling dari lingkaran tersebut adalah : %.1lf	%.1lf",luas(phi,ruas),keliling(phi,ruas));
	return 0;
}
```

* **Fungsi `penjumlahan`**
```c
int penjumlahan(int a, int b) {
    int hasil = a + b;
    return hasil;
}
```
Fungsi ini menerima dua argumen `a` dan `b` dan mengembalikan hasil penjumlahan keduanya.

* **Fungsi `pengurangan`**
```c
int pengurangan(int a, int b) {
    int hasil = a - b;
    return hasil;
}
```
Fungsi ini menerima dua argumen `a` dan `b` dan mengembalikan hasil pengurangan keduanya.


* **Fungsi `perkalian`**
```c
int perkalian(int a, int b) {
    int hasil = a * b;
    return hasil;
}
```
Fungsi ini menerima dua argumen `a` dan `b` dan mengembalikan hasil perkalian keduanya.

* **Fungsi `pembagian`**
```c
int pembagian(int a, int b) {
    int hasil = a / b;
    return hasil;
}
```
Fungsi ini menerima dua argumen a dan b dan mengembalikan hasil pembagian keduanya.

* **Fungsi `main`**
```c
int main() {
    int angka1, angka2;
    printf("masukkan angka1 : ");
    scanf("%i", &angka1);
    printf("masukkan angka2 : ");
    scanf("%i", &angka2);
    printf("%i + %i = %i \n", angka1, angka2, penjumlahan(angka1, angka2));
    printf("%i - %i = %i \n", angka1, angka2, pengurangan(angka1, angka2));
    printf("%i * %i = %i \n", angka1, angka2, perkalian(angka1, angka2));
    printf("%i / %i = %i \n", angka1, angka2, pembagian(angka1, angka2));
}
```

Fungsi `main` meminta pengguna untuk memasukkan dua angka.Kemudian, hasil dari operasi penjumlahan, pengurangan, perkalian, dan pembagian kedua angka tersebut dicetak.


### M8 Soal 4
```c
int discount(int a)
{
	if(a > 1000000 && a < 3000000)
	{
		return 20;
		
	}
	else if(a > 3000000)
	{
		return 35;
	}
	else
	{
		return 0;
	}
}



double potong(int a)
{
	if(a > 1000000 && a < 3000000)
	{
		double disc = a * 0.2;
		return disc;
	}
	else if(a > 3000000)
	{
		double disc = a * 0.35;
		return disc;
	}
	else
	{
		return a;
	}
}
int main()
{
	printf("GRAND MALL AFRIKA\n");
	printf("====================\n\n");
	int totalbelanja;
	printf("masukkan total belanja anda : ");
	scanf("%i",&totalbelanja);
      double total = totalbelanja - potong(totalbelanja);
	printf("\n\nprogram hitung potongan\n");
	printf("==============================\n");
	printf("total pembelian					: Rp.%i\n",totalbelanja);
	printf("besar diskon					: %i persen / Rp.%.2lf\n",discount(totalbelanja),potong(totalbelanja));
	printf("Besar yang harus di bayar		        : Rp.%.3lf\n",total);
	return 0;
}
```

* **Fungsi `discount`**
```c
int discount(int a) {
    if (a > 1000000 && a < 3000000) {
        return 20;
    } else if (a > 3000000) {
        return 35;
    } else {
        return 0;
    }
}
```
Fungsi ini mengembalikan persentase diskon berdasarkan total belanja (`a`).
Jika total belanja berada di antara 1.000.000 dan 3.000.000, maka diskonnya adalah 20%.
Jika total belanja lebih dari 3.000.000, maka diskonnya adalah 35%.
Jika tidak memenuhi syarat di atas, maka tidak ada diskon (0%).

* **Fungsi `potong`**
```c
double potong(int a) {
    if (a > 1000000 && a < 3000000) {
        double disc = a * 0.2;
        return disc;
    } else if (a > 3000000) {
        double disc = a * 0.35;
        return disc;
    } else {
        return a;
    }
}
```
Fungsi ini mengembalikan nilai potongan (dalam bentuk persentase) berdasarkan total belanja (`a`).
Jika total belanja berada di antara 1.000.000 dan 3.000.000, maka potongan yang diberikan adalah 20% dari total belanja (`a`).
Jika total belanja lebih dari 3.000.000, maka potongan yang diberikan adalah 35% dari total belanja (`a`).
Jika tidak memenuhi syarat di atas, maka tidak ada potongan.

* **Fungsi `main`**
```c
int main() {
    printf("GRAND MALL AFRIKA\n");
    printf("====================\n\n");
    int totalbelanja;
    printf("masukkan total belanja anda : ");
    scanf("%i", &totalbelanja);
    double total = totalbelanja - potong(totalbelanja);
    printf("\n\nprogram hitung potongan\n");
    printf("==============================\n");
    printf("total pembelian                   : Rp.%i\n", totalbelanja);
    printf("besar diskon                     : %i persen / Rp.%.2lf\n", discount(totalbelanja), potong(totalbelanja));
    printf("Besar yang harus di bayar        : Rp.%.3lf\n", total);
    return 0;
}
```
Fungsi `main` meminta pengguna untuk memasukkan total belanja.Kemudian, total pembelian, besar diskon berdasarkan fungsi `discount`, dan jumlah yang harus dibayarkan setelah diskon dihitung dan dicetak.

