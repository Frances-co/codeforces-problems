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

//This code above caused a time-limit exceed.. I spent about 1:34 hours trying to figure out a formula (on my own.. no search or chatGPT) and I came out with this
//soln which passed the 4 pretests

#include <stdio.h>
#include <math.h>

int main(){
    int ncases;
    int l, r, k;
    scanf("%d", &ncases);
    
    int operations=0;
    
    while(ncases--){
        scanf("%d %d %d", &l, &r, &k);
        operations= (r/k) - l + 1;
        if(operations<0){
            printf("%d\n", 0);
        }
        else
            printf("%d\n", operations);
    }    
    
    return 0;
}
