#include<stdio.h>
int main(){
    int row =5;
    for (int i = 1; i <= row; i++){
        for(char ch = 'A'; ch < 'A' + i; ch++){
            printf("%c ",ch);
        }
        printf("\n");
    }
    return 0;
}
