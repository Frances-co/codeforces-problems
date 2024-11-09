//https://codeforces.com/problemset/problem/591/A

//The trick is, the position of the first clash is the same as the position of the second clash cuz the velcotiy
//doesn't change...
//If I run from point A with velocity= 3  m/s, I will reach to a specific point..
//If I went back to A & back again tried to run with 3 m/s in same time t, I'll reach exactly the same point..
//That's bcs time and velocity doesn't change overtime.
//So the solution will be the position of the first collision and the formula for it is in the jpg file.

//I found the formula myself which is HUGE <############

#include <stdio.h>
 
int main() {
    short l, p, q;
    scanf("%hi", &l);
    scanf("%hi", &p);
    scanf("%hi", &q);
    
    printf("%f", (double)(p*l)/(p+q));
    
    return 0;
}
