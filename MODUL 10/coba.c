#include <stdio.h>
enum hari{SENIN, SELASA, RABU, KAMIS, JUMAT, SABTU, MINGGU};

enum boolean{false, true};

struct mahasiswa 
{
      char *name;
      char *address;
      int age;
};

struct student
{
      char name[50];
      int age;
};

void display (struct student s)
{
      printf("\n Displaying information\n");
      printf("Name      :%s\n",s.name);
      printf("age       :%d\n",s.age);
}
int main()
{
      int a = 4;
      int b = 5;
      enum hari sekarang;
      sekarang = RABU;
      printf("sekarang hari ke-%d",sekarang + 1);
      printf("\nukuran variabel emum adalah : %d bytes\n",sizeof(sekarang));
      if(a < b == true)
      {
            printf("\nvariabel a lebih kecil dari b\n");
      }

      struct mahasiswa mhs1,mhs2;

      mhs1.name = "dian";
      mhs1.age = 22;
      mhs1.address = "mataram";

      mhs2.name = "bambang";
      mhs2.age = 23;
      mhs2.address = "surabaya";

      printf("mahasiswa 1:\n");
      printf("Nama      :%s\n",mhs1.name);
      printf("Umur      :%d\n",mhs1.age);
      printf("alamat    :%s\n",mhs1.address);
      printf("======================\n");
      printf("mahasiswa 2:\n");
      printf("Nama      :%s\n",mhs2.name);
      printf("Umur      :%d\n",mhs2.age);
      printf("alamat    :%s\n",mhs2.address);


      struct student s1;

      printf("enter name : ");
      scanf("%s",s1.name);

      printf("enter age  : ");
      scanf(" %d",&s1.age);

      display(s1);



}