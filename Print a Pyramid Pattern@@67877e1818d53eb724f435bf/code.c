#include <stdio.h>

int main(){
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        // this for lopp prints(2*i+1)stars
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        // this printf prints a new line
        printf("\n");
    }
    
    return 0;
}