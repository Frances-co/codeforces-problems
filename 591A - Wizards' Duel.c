//https://codeforces.com/problemset/problem/591/A

#include <stdio.h>
 
int main() {
    short l, p, q;
    scanf("%hi", &l);
    scanf("%hi", &p);
    scanf("%hi", &q);
    
    printf("%f", (double)(p*l)/(p+q));
    
    return 0;
}
