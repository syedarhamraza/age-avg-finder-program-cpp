#include <iostream>
using namespace std;

int main()
{
    float avg = 0, sum = 0;
    float ages[5] = {
        85,
        90,
        78,
        88,
        92};

    // to find sum i will first find length of this array
    float lengthAge = sizeof(ages) / sizeof(ages[0]);
    // to find sum in array we use for loop
    for (int i = 0; i < lengthAge; i++)
    {
        sum = sum + ages[i];
        // did it for my understanding cout << sum << endl;
    }

    // now finding avg which is Average = Sum of Values/Number of Values
    // now we sum all items in array and stored it on sum
    // and lengthAge tells us that how my values are in array

    avg = sum / lengthAge;

    cout << "The sum of values in array is: " << sum << endl;
    cout << "The Avg of the array is: " << avg << endl;
    return 0;
}
