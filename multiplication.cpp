#include<stdio.h>
int main(){
	int i,j;
	printf("enter the table you want to print");
	scanf("%d",&i);
	for(j=1; j<=10; j++){
		printf("%d X %d = %d\n",i,j,i*j);
	}
}
