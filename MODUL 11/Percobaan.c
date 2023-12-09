#include <stdio.h>
void isiteks();
void main()
{
	char buff[255];
	FILE *fptr;
	
	//membuka file
	if((fptr = fopen("puisi.txt","r")) == NULL)
	{
		//tutup program karena file tidak ada
		printf("Error : File tidak ada!");
		exit(1);
	}
	//baca isi file dengan gets lalu simpan ke buff
	fgets(buff, 255, fptr);
 	printf("%s",buff);
	//tampilkan isi file 
 	/*fgets(buff, 255, fptr);
	printf("%s",buff);
	fgets(buff, 255, fptr);
	printf("%s",buff);
	fgets(buff, 255, fptr);
	printf("%s",buff);
	fgets(buff, 255, fptr);
	printf("%s",buff);*/
	
	//atau bisa dilakukan dengan perulangan
	while (fgets(buff,sizeof(buff),fptr))
	{
		printf("%s",buff);
	}
	
		
	//tutup file
	fclose(fptr);
	
	isiteks();
	isiperbaris();
}

void isiteks()
{
	char Buff[255];
	char teks[255];
	FILE *Fptr;
	
	//membuka file 
	Fptr = fopen("isiteks.txt","w");
	
	//mengambil input dari user
	printf("\ninputkan isi file : ");
	fgets(teks, sizeof(teks), stdin);
	
	//menulis ke teks ke file
	fputs(teks,Fptr);
	printf("file berhasil ditulis\n");
	
	//tutup file
	fclose(Fptr);
	
	//buka kembali file untuk dibaca
	Fptr = fopen("isiteks.txt","r");
	
	//baca isi file dengan gets lalu simpan ke buff
	while(fgets(Buff,sizeof(Buff),Fptr))
	{
		printf("isi file nya sekarang : %s",Buff);
	}
	
	//tutup file
	fclose(Fptr);
}

void isiperbaris()
{
	char BUff[255];
	char Teks[255];
	FILE *FPtr;
	
	//membuka file 
	FPtr = fopen("isitabel.txt","w");
	
	//mengambil input dari user
	/*for (int i = 0; i < 5;i++)
	{
		printf("\nisi baris ke %d : ",i+1);
		fgets(Teks, sizeof(Teks), stdin);
		//menulis ke teks ke file
		fputs(teks,FPtr);
	}*/
	printf("\nisi baris ke 0 : ");
		fgets(Teks, sizeof(Teks), stdin);
		//menulis ke teks ke file
		fputs(Teks,FPtr);
	printf("\nisi baris ke 1 : ");
	fgets(Teks, sizeof(Teks), stdin);
	//menulis ke teks ke file
	fputs(Teks,FPtr);
	printf("file berhasil ditulis\n");
	
	//tutup file
	fclose(FPtr);
	
	//buka kembali file untuk dibaca
	FPtr = fopen("isitabel.txt","r");
	
	//baca isi file dengan gets lalu simpan ke buff
	while(fgets(BUff,sizeof(BUff),FPtr))
	{
		printf("isi file nya sekarang : %s",BUff);
	}
	
	//tutup file
	fclose(FPtr);
	
}

