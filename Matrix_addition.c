/*
Implement a program to 
perform matrix addition
and multiplication using
dynamic memory allocation.
Allow the user to input 
the dimensions and elements
of the matrices...
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int row,col;
    printf("Enter the dimension of Matrix:- \nNo. of Rows- ");
    scanf("%d", &row);
    printf("No. of columns-");
    scanf("%d", &col);
    
    int* ptr;
    int** matrix = (int**) malloc(sizeof(int*)*2);
    
    for(int k=0; k<2; k++){
    
    //-----
    ptr = (int*)malloc(sizeof(int)* row * col);
    for(int i=0; i<(row*col);i++){
    printf("\nEnter the value of elements of\nMatrix %d (Format-%d*%d) : ", k+1,row, col);
    scanf("%d", &ptr[i]);
    }
    
        
        printf("\nMatrix %d - \n", k+1);
        
    for(int j=0; j<row*col;j++){
       printf(" %d ", ptr[j]);
        
        if( (j+1) % col == 0){
            printf("\n");
        }
      }
        
        matrix[k]= ptr;
    
    }
        
    
    // Addition---
    printf("\nMatrix after addition-\n");
    for(int l=0; l<row*col; l++){
        printf(" %d ", matrix[0][l] + matrix[1][l]);
        
        if( (l+1) % col == 0 ){
            printf("\n");
        }
    }
    
        return 0;
}