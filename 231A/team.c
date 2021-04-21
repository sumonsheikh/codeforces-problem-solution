#include <stdio.h>

int main() {
    // Write C code here
    int n, a, b, c, sum=0;
    scanf("%d",&n);
    while(n--){
        scanf("%d %d %d ", &a, &b, &c);
        if( b+c>1){
            sum++;
        }else if( a+b>1){
        	
        	sum++;
        }else if( a+b+c>1 ){
        	sum++;
        }else{
            sum;
        }
    }
    printf("%d\n",sum);
    
    return 0;
}