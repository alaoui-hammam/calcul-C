#include <stdio.h>

int main(){
	int a,b,somme;
	printf("bienvenue dans notre programme\n");
	printf("entrer le premier nombre:");
	scanf("%d",&a);
	printf("entrer le deuxieme nombre:");
	scanf("%d",&b);
	somme=a+b;
	printf("%d + %d = %d \n",a,b,somme);
	return 0;
}
