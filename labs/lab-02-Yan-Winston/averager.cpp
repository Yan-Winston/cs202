#include <iostream>
#include "myfunctions.h"

int main()
{
    sayHello();
    int nums[DATA_SIZE];
    for (int n = 0; n < DATA_SIZE; n++){
        *(nums + n) = n;
    }
    double average = calculateAverage(nums);
    cout << "Average Value: " << average << endl;
    return 0;
}
