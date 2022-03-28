#include<stdio.h>
#include<string.h>


void reverseFunction(char input[]){
	
	int j=0;
	char reverse[50];
	
	while(input[j] != '\0'){
		
		j++;
	}
	for(int i=0;i<j;i++){
		
		reverse[i] = input[j-(i+1)];
	}
	
	printf("\nThe reverse of the word is: %s",reverse);
}

int main(void){
	
	char input[50];
	
	printf("\nPlease enter the word that you want to be reversed: ");
	scanf("%s",&input);

	
	reverseFunction(input);
	
}

