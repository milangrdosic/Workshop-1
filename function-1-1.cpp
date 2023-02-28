#include <iostream>

int array_sum(int array[], int n){

    int sum = 0;

    if (n < 1) {
        printf("0");
        return 0;
    } else {
        for(int i = 0; i<n; i++) {
            sum = sum + array[n];
        }
    }

    std::cout<<"The sum is "<<sum;

    return 0;
}
