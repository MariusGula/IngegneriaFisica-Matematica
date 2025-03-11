#include <stdio.h> /* inclusione della libreria standard     */ 

int main( ) {        
	int a,b,c,temp; 
	
	printf("\n Inserisci il numero a: ");  
	scanf("%d",&a);         
	printf("\n Inserisci il numero b: ");  
	scanf("%d",&b);         
	printf("\n Inserisci il numero c: ");  
	scanf("%d",&c); 
	
	/*
		Scambiare il contenuto di due variabili è come scambiare il liquido di due bicchieri, 
		serve un terzo bicchiere di "appoggio"
	*/


	if (a > b) { 
		temp = a;    
		a = b;    
		b = temp;  
	} 
	if (a > c) {    
		temp = a;    
		a = c;    
		c = temp;  
	} 
	if (b > c) { 
		temp = b;    
		b = c;    
		c = temp;  
	} 
	
	printf("\n L’ordine voluto e’: %d, %d, %d",a,b,c);  return 0; 
}