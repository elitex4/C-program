#include<stdio.h>

void main(){
    int row;
    printf("Enter Number of rows you want in pattern: ");
    scanf("%d",&row);
    int uc_letter = (int)'A';
    int lc_letter = (int)'b';
    int count = 1;
    for(int i=0;i<row;i++){
        for(int j=0;j<=i;j++){
            if(count%2==1){
                printf("%c ", uc_letter);
                uc_letter = uc_letter + 2;
            }
            else{
                printf("%c ",lc_letter);
                lc_letter = lc_letter + 2;
            }
            count++;
        }
        printf("\n");
    }
}
