// #include <stdio.h>

// int main() {
//     int N;
    
    
//     scanf("%d", &N);

//     for (int i = 1; i <=N 1; i++) {  
//         for (int j = 1; j <= i; j++) {  
//             printf("* ");
//         }
//         printf("\n");  
//     }

//     return 0;
// }
#include <stdio.h>

int main() {
    int N;
    
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {  // Loop for rows
        for (int j = 1; j <= i; j++) {  // Loop for stars
            printf("* ");
        }
        printf("\n");  // Move to the next line after each row
    }

    return 0;
}

