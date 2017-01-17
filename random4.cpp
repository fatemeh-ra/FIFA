#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int Ceil(int array[], int random, int low, int high){ // searching for the interval which random number is in
	int mid=0;
	while(low < high){
		mid = (low + high)/2;
		
		if(random > array[mid])
		low = mid+1;
		
		else
		high = mid;
	}
	
	if(array[low] >= random)
	return low;// retruns array's number in which 
	
	else
	return -1;
	
}

int MyRandFunc(int arr[],int freq[], int n){
	
	int prefix[n], i;
    prefix[0] = freq[0];
    for (i = 1; i < n; ++i)
        prefix[i] = prefix[i - 1] + freq[i];// calcutes the sum of all frequencies
 
    int r = (rand() % prefix[n - 1]) + 1;// genarets a random number in interval of(1,sum of all frequencies)
    
    int index = Ceil(prefix, r, 0, n - 1);
    return arr[index];
    
    
}



int main(){
	
	srand(time(0));
	int x=0;
	int arr[3]={1,2,3};
	int freq[3]={10,80,10};;
          
          for(int i=0;i<20;i++)
		printf("%d\n",MyRandFunc(arr,freq,3));
	}



