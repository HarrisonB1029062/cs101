#include <stdio.h>
void print_stars(int r, int rows) {
    int count = (rows - r) * 2 - 1;
    for (int j = 0; j < count; j++) {
        if (j == count-1)
            printf("*");
        else
            printf("* ");
    }
    printf("\n");
}
void print_spaces(int r) {
    printf("%*c", r*2, ' ');
}
int main() {
    int rows = 5;   
    for (int r = 0; r < rows; r++) {
        if (r)
            print_spaces(r);
        print_stars(r, rows);
    }
    return 0;
}
