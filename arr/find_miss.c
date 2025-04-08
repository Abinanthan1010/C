/*Find the missing number in a given integer array of 1 to 500. 

 

WTD: Examine an array expected to contain consecutive integers from 1 to 500. Identify 

any integer that is missing from this sequence. 

 

(e.g.: I/P: [1,2,4,5]; O/P: 3)*/



#include <stdio.h>



// Function to find the missing number

int main (){

    int n,sum =0 ;

    printf("enter the num of elements in arry");

    scanf("%d", &n);

    int arr[n-1];

    printf("Enter the elements ");

    for (int i = 0; i<= n-1 ; i++){

        scanf("%d", &arr[i]);

        sum += arr[i];

    }

    int missing = 0;

    missing =  (n+1) * (n+2)/2 - sum;

    printf("Missing = %d ", missing );

    return 0;

}

/* by XOR */



#include <stdio.h>



int findMissingNumber(int arr[], int n) {

    int x1 = arr[0];

    int x2 = 1;

    

    for (int i = 1; i < n; i++) {

        x1 ^= arr[i];

    }

    

    for (int i = 2; i <= n + 1; i++) {

        x2 ^= i;

    }

    

    return x1 ^ x2;

}



int main() {

    int arr[] = {1, 2, 4, 5, 6};

    int n = sizeof(arr) / sizeof(arr[0]);

    int missingNumber = findMissingNumber(arr, n);

    printf("The missing number is %d\n", missingNumber);

    return 0;

}
