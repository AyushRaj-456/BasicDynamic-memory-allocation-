/*
Check is the num of Palindrome
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    int same =0;
    int temp;
    char* input = (char*)malloc(sizeof(char) * 50);      
    printf("Enter the number - ");
    fgets(input, 50, stdin);
    
    int len = strlen(input) -1;
    
  /*  char* dupl = (char*)malloc(sizeof(char) * len);
    
    for(int i=0; i<=len/2;i++){
        temp = input[i];
        dupl[i] = input[((len) -1 )-i]; 
        dupl[((len) -1 )-i] = temp;
    }
    
    puts(dupl);
    */
    
    for(int j=0, k=len-1; j<len; j++){
       if( tolower(input[j]) != tolower(input[k])){
           same++;
       }
        k--;
    }
    
    if(same == 0){
        printf("\nThe given input is a Palindrome!!");
    }else{
        printf("\nThe given input is not a Palindrome!!");
    }
    
    return 0;
}