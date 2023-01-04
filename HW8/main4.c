#include <stdio.h>
int round_func(float f){
    int i=(int) f*10;
    (i%10>=5)?i=i/10+1:i=i/10;
    return i;
}
int main(){
    printf("%d",round_func(1.4));
    return 0;
}
