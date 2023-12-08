#include<stdio.h>
#include<string.h>
int main()
{
      int angka[5] = {1,2,3,4,5};
      for(int i = 0;i < 5;i++)
      {
            printf("%i ",angka[i]);
      }
      angka[0] = 6;
      angka[1] = 7;
      angka[2] = 8;
      angka[3] = 9;
      angka[4] = 10;
      for(int i = 0;i < 5;i++)
      {
            printf("%i\n",angka[i]);
      }
      for(int i = 0;i < 5;i++)
      {
            printf("ubah nilai angka-%i : \n",i+1);
            scanf("%i",&angka[i]);
            
      }
      for(int i = 0;i < 5;i++)
      {
            printf("%i\n",angka[i] - 100);
      }
      char sapa[5];
      sapa[0] = 'H';
      sapa[1] = 'A';
      sapa[2] = 'L';
      sapa[3] = 'L';
      sapa[4] = 'O';
      char dunia[5];
      dunia[0] = 'W';
      dunia[1] = 'O';
      dunia[2] = 'R';
      dunia[3] = 'L';
      dunia[4] = 'D';
      for(int i = 0;i < 5;i++)
      {
            printf("%c",sapa[i]);
      }
      printf("\n");
       for(int i = 0;i < 5;i++)
      {
            printf("%c",dunia[i]);
      }
      char daftar[5][20] ={"tempe","tahu","bakso","somay","sate\n"};
      for(int i = 0;i < 5;i++)      
      {printf("\n%s",daftar[i]);
      }
      int matriks[3][3];
       matriks[0][0] = 1;
       matriks[0][1] = 2;
       matriks[0][2] = 3;
       matriks[1][0] = 4;
       matriks[1][1] = 5;
       matriks[1][2] = 6;
       matriks[2][0] = 7;
       matriks[2][1] = 8;
       matriks[2][2] = 9;

      printf("%i  %i  %i\n",matriks[0][0],matriks[0][1],matriks[0][2]);
      printf("%i  %i  %i\n",matriks[1][0],matriks[1][1],matriks[1][2]);
      printf("%i  %i  %i\n",matriks[2][0],matriks[2][1],matriks[2][2]);
      
}