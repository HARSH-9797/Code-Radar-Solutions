// #include <stdio.h>

// int main() {
//     int N;
    
    
//     scanf("%d", &N);

//     for (int i = N; i >= 1; i--) {  
//         for (int j = 1; j <= i; j++) {  
//             printf("* ");
//         }
//         printf("\n");  
//     }

//     return 0;
// }
#include <stdio.h>

int main(){
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        // this for lopp prints(2*i+1)stars
        for (int j = 0; j < 2*i+1; j++)
        {
            printf("*");
        }
        // this printf prints a new line
        printf("\n");
    }
    
    return 0;
}