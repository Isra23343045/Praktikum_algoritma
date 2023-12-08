#include <stdio.h>
int main(){
    int a,b,d,c=132;
    const double phi =22/7;
    printf("input = \n");
    scanf("%i",&a);
    printf("input = \n");
    scanf("%i",&b);
    d = a * b / c;
    printf("%i\n",d);
    printf("%.2lf",phi);

    return 0;
}
