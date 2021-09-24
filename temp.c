#include <stdio.h>



int main(){
    int a = 6;
    int *p  = &a;
    printf("%x",&(*p));


    return 0;
}
