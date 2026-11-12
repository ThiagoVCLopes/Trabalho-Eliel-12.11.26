#include<stdio.h>

int i;

int main(){
	
	printf("*-------*\n");
	printf("   For\n");
	printf("*-------*\n\n");
	
	for( i=1 ; i<=10 ; i++){
		
		printf("* %d *\n",i);
	} 
	
	
	for( i=10 ; i>=1 ; i--){
		
		
		printf("* %d *\n",i);
	} 
	printf("*--------*\n");
	printf("  while\n");
	printf("*--------*\n\n");
	
	i=1;
	
	while(i<=10){
		
		printf("* %d *\n",i);
		i++;	
	}
	
	i = 10;
	
	while(i>=1){
		
		printf("* %d *\n",i);
		i--;
		
	}
	printf("*----------*\n");
	printf("  Do while\n");
	printf("*----------*\n\n");
	
	i = 1;
	
	do{
		printf("* %d *\n",i);
		i++;
		
	}while (i<=10);
	
	i = 10;
	do{
		printf("* %d *\n",i);
		i--;
		
	}while (i>=1);
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
