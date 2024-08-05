#include <stdio.h>

int main();

int main(){
    printf("Hello World\n");
    char ar_o_str[10][20]; 
    for (int i = 0; i < 10; i++){
        printf("This is %d\n", (i+1));
        scanf("%s", &(ar_o_str[i]));
        printf("You are %s\n", (ar_o_str[i]));
    }
    char(* tempo)[20]; // impt, Pointer to an array of 20 characters
    tempo = ar_o_str; 
    for (int i = 0; i < 9; i++){
        
        printf("%s, ", *(tempo++));
    }
    printf("%s", tempo);
    return 0;
}