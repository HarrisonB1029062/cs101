#include <stdio.h>
void binary(int n){
    int a[10], i;
    for(i=0; n>0; i++){
        a[i]=n%2;
        n= n/2;
    }
    for(i=i-1 ;i>=0 ;i--){
        printf("%d",a[i]);
        i==4||i==8?printf(" "):printf("");
    }
}
int main(){
    binary(256);
    return 0;
}
