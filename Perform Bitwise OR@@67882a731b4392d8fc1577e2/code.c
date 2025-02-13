#include <stdio.h>
int main(){
    int a,b,result;
    sacnf("%d %d",&a,&b);
    result = a|b;
    printf("Result is %d | %d = %d\n",a,b,result);
    return 0;
} 