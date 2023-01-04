#include <stdio.h>

void print_spaces(int i, int rows){
    for(int k=rows, mid=7;k<mid;k++){
        printf(" ");
    }
    for(int spc=1;spc<=rows-i;spc++){
        printf(" ");
    } 
}
void print_stars(int i){
    for(int str=1;str<=(i+1)*2-1;str++){
        printf("*");
    }
}
void print_top(int rows){
    for(int i=0;i<rows;i++){
        
        print_spaces(i,rows);
        print_stars(i);
        printf("\n");
       
    }
}
void print_truck(int T){
    for(int s=0;s<T;s++)
    printf("       *\n");
}
   
int main()
{
    int T=5;
    printf("   X'mas tree\n");
    for(int rows=3;rows<=7;rows=rows+2){
      print_top(rows);
      
    }
    print_truck(T);

    return 0;
}
