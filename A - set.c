//https://codeforces.com/contest/2029/problem/A

#include <stdio.h>
 
int main(){
    int ncases;
    int l, r, k;
    scanf("%d", &ncases);
    
    int multipliers=0;
    int operations=0;
    
    while(ncases--){
        scanf("%d %d %d", &l, &r, &k);
        for(int i=l; i*k<=r; i++){
            if(i==1){
                operations++;
                continue;
            }
 
            multipliers= r/i;   
            if(multipliers>=k)operations++;
        }
        printf("%d\n", operations);
        multipliers=0;
        operations=0;
    }    
    
    return 0;
}
