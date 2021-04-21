#include<stdio.h>
#include<stdlib.h>
int main(){
    int i, j, m[5][5], ans =0;
    for(i=0;i<5;++i){
        for(j=0;j<5;++j){
            scanf("%d",&m[i][j]);
        }
    }
    for(i=0;i<5;++i){
        for(j=0;j<5;++j){
            if(m[i][j] == 1){
                    i=i+1;
                    j=j+1;
                ans = abs(3-i) + abs(3-j);
                printf("%d\n", ans);
            }
        }
    }

    return 0;
}
