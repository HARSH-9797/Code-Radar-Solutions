#include <stdio.h>
int main(){
    int char op;
    scanf("%c",&op);
    switch(op){
        case 'A':
        printf("Excellent");
        break;

        case 'B':
        printf("Good");
        break;

        case 'C':
        printf("Average");
        break;

        case 'D':
        printf("Below Average");
        break;

        case 'F':
        printf("Fail");
        break;

        default:
        printf("Invalid Grade");
        break;
    }
    return 0;
}