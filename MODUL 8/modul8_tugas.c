#include <stdio.h>
/*1.Perkalian dua buah bilangan bulat positif dapat dilakukan dengan metode
penjumlahan sebagai berikut: 12 x 6 = 12 + 12 + 12 + 12 +12 +12
Buatlah sebuah program menggunakan fungsi rekursif untuk menghitung
hasil perkalian di atas.



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
}*/





/*2. Buatlah program yang menggunakan fungsi untuk perhitungan aritmetik 
yaitu penjumlahan, pengurangan, perkalian dan pembagian.




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



}*/




/*3. Buatlah program untuk menghitung luas dan keliling lingkaran dengan 
menggunakan fungsi. Fungsi yang harus dibuat yaitu:
a. luas() untuk menghitung luas lingkaran.
b. keliling() untuk menghitung keliling lingkara


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
*/



/*4. Buatlah program untuk menghitung besarnya diskon yang diberikan atas 
besarnya jumlah pembelian, dengan ketentuan:
a. Jika belanja dibawah 1 jt, maka tidak mendapatkan diskon
b. Jika belanja diatas 1 jt dan dibawah 3 jt, maka mendapat diskon 20%
c. Jika belanja diatas 3 jt, maka mendapat diskon 35%
Fungsi yang harus ada adalah potong() untuk menghitung besar potongan
yang akan diberikan. Berikut tampilan yang diinginkan pada output:
Program Hitung Potongan
Total Pembelian (Rp.) : [diinputkan]
Besar Diskon : [hasil proses]
Besar Yang Harus Dibayarkan : [hasil proses]*/



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





