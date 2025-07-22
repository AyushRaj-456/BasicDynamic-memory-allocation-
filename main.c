//DMA - 01

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    
    int elem;
    printf("\nEnter the length of your eID - \n");
    scanf("%d", &elem);
    getchar();
    
    
    char* ptr = (char *)malloc(sizeof(char) * elem + 1);
    printf("Enter your eID- ");
    fgets(ptr, elem+1, stdin);
    //getchar(); 
    printf("eID of emp 1 - ");
    while(*ptr != '\0'){
        printf("%c", *ptr);
        ptr++;
    }
    
    
    // Reallocation
    printf("\n\nEnter the new length of your eID - \n");
    scanf("%d", &elem);
    getchar();
    
    printf("Enter your eID- ");
    ptr = (char *)realloc(ptr, sizeof(char) * elem + 1);
    fgets(ptr, elem+1, stdin);
    
    printf("eID of emp 2 - ");
    while(*ptr != '\0'){
        printf("%c", *ptr);
        ptr++;
    }
    
    // Reallocation
    printf("\n\nEnter the new length of your eID - \n");
    scanf("%d", &elem);
    getchar();
    
    printf("Enter your eID- ");
    ptr = (char *)realloc(ptr, sizeof(char) * elem + 1);
    fgets(ptr, elem+1, stdin);
    
    printf("eID of emp 3 - ");
    while(*ptr != '\0'){
        printf("%c", *ptr);
        ptr++;
    }
    
    free(ptr);
    return 0;
}