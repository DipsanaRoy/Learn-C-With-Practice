// CP2. Valid but misleading: `^` is bitwise XOR, **not exponentiation**
#include<stdio.h>

int main(){
    int v = 3 ^ 3;
    printf("%d", v);
    return 0;
}