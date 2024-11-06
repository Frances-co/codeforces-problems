#include <stdio.h>

int main() {
    
    int size;
    int steps;
    int bigOne;
    int ncases;
    scanf("%d", &ncases);
    while(ncases--){
        scanf("%d", &size);
    
        int arr[size];
        
        for(int i=0; i<size; i++){
            scanf("%d", &arr[i]);
            printf("%d ", arr[i]);
        }
        
        steps= 2;
        for(int i=0; i<size-steps+1; i++){ //-steps+1 prevents a potential outOfBound error.
            for(int j=i; j<i+steps; j++){
                
                //-----------------------------------
                //DEBUGGING!!
                // if(steps==3){
                //     printf("\n\ni:%d - j:%d \n\n", i, j);
                // }
                //----------------------------------
                if(j==i)
                    bigOne=arr[j];
                else
                    bigOne= arr[j] > bigOne ? arr[j]:bigOne;
            }
            //-----------------------------------
            //DEBUGGING!!
            // printf("\n\n\n%d\n\n\n", steps);
            //-----------------------------------
            
            printf("%d ", bigOne);
            if(i==size-steps+1-1){
                steps++;
                i=-1;
                //Even we set the i to 0 to reset it, we are in an actual iteration so the 0 is 
                //being incremented to 1 causing the i to start from 1 instead of 0 when we
                //increment the steps
                //So to reset the i, set it to -1 rather than 0
            }
        }
        printf("\n");
    }
    
    return 0;
}
