#include <stdio.h> /* inclusione della libreria standard     */ 

int main( ) {        
	int a,b,c,temp; 
	
	printf("\n Inserisci il numero a: ");  
	scanf("%d",&a);         
	printf("\n Inserisci il numero b: ");  
	scanf("%d",&b);         
	printf("\n Inserisci il numero c: ");  
	scanf("%d",&c); 
	
	if (a < b) { 
		if (b < c) { 
			printf("\n L’ordine voluto e’: %d, %d, %d",a,b,c);  
		} 
		else { 
			if (a < c) { 
				printf("\n L’ordine voluto e’: %d, %d, %d",a,c,b); 
			} 
			else { 
				printf("\n L’ordine voluto e’: %d, %d, %d",c,a,b); 
			} 
		}
	} 
	else { 
		if (c < b) { 
			printf("\n L’ordine voluto e’: %d, %d, %d",c,b,a); 
		} 
		else { 
			if (a < c) { 
				printf("\n L’ordine voluto e’: %d, %d, %d",b,a,c); 
			} 
			else { 
				printf("\n L’ordine voluto e’: %d, %d, %d",b,c,a); 
			} 
		} 
	} 
	return 0; 
}