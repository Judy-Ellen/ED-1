#include<stdio.h>

int main() {
	
	int MAT[4][4];
	
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			printf("Valor [%d][%d]: ",i,j);
			scanf("%d", &MAT[i][j]);
		}
	} 
	 
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			
			if(i==j){		
			printf("Valor [%d][%d]: %d\t",i,j, MAT[i][j]);}
		}
	}
	printf("\n");
	return 0;
}
