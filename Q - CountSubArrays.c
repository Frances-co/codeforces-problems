//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Q


//Below is the idea of the solution...
#include <stdio.h>
 
int main() {
    
    int ncases;
    scanf("%d", &ncases);
    
    while(ncases--){
        int size;
        scanf("%d", &size);
        int arr[size];
        
        for(int i=0; i<size; i++){
            scanf("%d", &arr[i]);
        }
        
        int totalSubs= (size+1)*size/2;
        
        int increasingOnes;
        int decreasingOnes=0;
        
        for(int i=1; i<size; i++){
            if(arr[i-1]>arr[i]){
                decreasingOnes+=((size-1)-(i-1))*i;
                //Subtracting last index from the first index of
                //a 2-elemnt decreasing array..
                //Because if the 2-element is decreasing, then the
                //3,  4, n-element array that has this 2-element
                //decreasing subarray will be decreasing as well.
                
                //For 1 4 2 3 5 => 4 2, 4 2 3, 4 2 3 5 are
                //decreasing..
                
                //BUT HERE'S THE THING!!!!
                //1 4 2, 1 4 2 3, 1 4 2 3, 1 4 2 3 5 are also
                //decreasing...
                //So the as long as we find the first decreasing
                //2-element subarray and find all its forward
                //decreasing ones, we multiply the number
                //by its index+1
                
                //cuz 1 which is just before the 4, will also have
                //3 decreasing subarrays if they included any
                //element that comes after the 4..
                //If the main array was 0 1 4 2 3 5
                //Decreasing subarrays= 15-3 -3 -3= 6
                //cuz 0 1 4 2, 0 1 4 2 3, 0 1 4 2 3 5
                //are decreasing
                
                
                //EZ
                //Who needs the fucking loops....
            }
        }
        increasingOnes= totalSubs - decreasingOnes;
        // printf("%d -- %d -- %d\n", increasingOnes, totalSubs, decreasingOnes);
                printf("%d\n", increasingOnes);
    }
    
    
    
    return 0;
}

//Actual Solution:
#include <stdio.h>
 
int main() {
    
    int ncases;
    scanf("%d", &ncases);
    
    while(ncases--){
        int mileStone= 0;
        int size;
        scanf("%d", &size);
        int arr[size];
        
        for(int i=0; i<size; i++){
            scanf("%d", &arr[i]);
        }
        
        int totalSubs= (size+1)*size/2;
        
        int increasingOnes;
        int decreasingOnes=0;
        
        for(int i=1; i<size; i++){
            if(arr[i-1]>arr[i]){
                if(mileStone==0){
                decreasingOnes+=(((size-1)-(i-1))*i);
                mileStone=i;
                }
                else{
                    decreasingOnes+=(((size-1)-(i-1))*(i-mileStone));
                    mileStone= i;
                }
                //This counter prevents overlap which may happen
                //if we have many 2-element decreasing sub arrays.
            }
        }
        increasingOnes= totalSubs - decreasingOnes;
        printf("%d\n", increasingOnes);
    }
    
    
    
    return 0;
}

//It's kinda stupid solution but that's what came to my mind yk...
//It's time complexity isn't that bad though
