#include <stdio.h>
#include <stdlib.h>

int main(){
	int i =0;
	int backward = 100;
	char meletup[]="DUARRRRRRRRR";
	char ulang = 'y';
	int hitung = 0;
	for(i = 0;i < 10; i++){
		printf("%i\n",i);
	}
	printf("nuklir akan diluncurkan pada \n");
	for(backward = 10; backward > 0;--backward){
			printf("%i detik\n",backward);
		}
	while(ulang == 'y'){
		for(backward = 50; backward > 0;--backward){
			printf(meletup);
		}
		printf("\napakah anda ingin meletup lagi\n");
		printf("\njawab (y/t)");
		scanf(" %c",&ulang);
		hitung++;
	}
	printf("\nanda telah meletup sebanyak %i kali\n",hitung);
	printf("terima kasih");
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");

	
	do{
		printf("\napakah kamu ingin mengulang lagi ?");
		printf("\njawab(y/t)");
		scanf(" %c",&ulang);
		
		hitung++;
	}while(ulang == 'y');
	
	printf("anda telah mengulang sebanyak %i kali\n",hitung);
	printf("terima kasih\n");
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	
	int x,y;
	
	for(x = 0; x < 10;x++){
		for(y = 0; y < 10;y++){
			printf(" (varx)%i       (var y)%i ",x,y);
			printf("\n");
		}
	}
	
	
	return 0;
}
	

		






