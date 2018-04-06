#include <stdio.h>

int main() {
    int r,i,n,space,ncr;
    printf("Zvolte pocet riadkov\n");
    scanf("%d",&n);
    for(i = 0;i < n; i++){
        for(space = 1; space < n-i; space++)
            printf(" ");
        for(r = 0; r <= i; r++){
            if(n==0 || r==0){
                ncr = 1;
                printf("%d ", ncr);
            }
            else{
                ncr = ncr*(i - r + 1) / r;
                if (ncr % 2 == 1)
                    printf("%d ",ncr);
                if (ncr % 2 == 0)
                    printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}