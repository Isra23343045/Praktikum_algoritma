#include<stdio.h>
int main()
{
      int x,y,z;
      printf("input x : ");
      scanf("%i",&x);
      printf("input y : ");      
      scanf("%i",&y);
      printf("input z : ");
      scanf("%i",&z);

      printf("penjumlahan %i + %i + %i = %i\n",x,y,z,x+=y+z);
      printf("pengurangan %i - %i - %i = %i\n",x,y,z,x-=y-z);
      printf("perkalian   %i X %i X %i = %i\n",x,y,z,x*=y*z);
      printf("pembagian   %i : %i : %i = %i\n",x,y,z,x%y/z);
      printf("sisa bagi   %i / %i / %i = %i\n",x,y,z,x%y%z);

      printf("x < z  = %i\n",x < z);
      printf("y > z  = %i\n",y > z);
      printf("x >= y = %i\n",x >= y);
      printf("y <= z = %i\n",y <= z);
      printf("y == x = %i\n",y == x);
      printf("x != z = %i\n",x != z);

      printf("x AND z = %i\n",x & z);
      printf("x OR z = %i\n",x | z);
      printf("x XOR z = %i\n",x ^ z);
      printf("NOT z = %i\n", ~z);
      printf("x Left shift z = %i\n",x << z);
      printf("x Rigth Shift z = %i\n",x >> z);

      int a;
      printf("\ninput a : ");
      scanf("%i",a);
      printf("alamat memori a = %x\n",&a);
      printf("angka yang kamu masukkan adalah bilang negatif : %s\n", a < 0 ? "betul" : "tidak");
      a = 10;
      a++;
      printf("%i\n",a);
      ++a;
      printf("%i\n",a);
      a--;
      printf("%i\n",a);
      --a;
      printf("%i\n",a);


      return 0;

      


}