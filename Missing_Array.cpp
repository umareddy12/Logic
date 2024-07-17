#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];

    // Read array elements
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Calculate the sum of the first n+1 natural numbers
    
   /* calculate the Sum of the First n+1 Natural Numbers:

Here, n + 1 is 5.  (int n=4)*/ 

    
    int total_sum = (n + 1) * (n + 2) / 2;

    // Calculate the sum of the array elements
    int array_sum = 0;
    for(int i = 0; i < n; i++) {
        array_sum += arr[i];
    }

    // The missing number is the difference between total_sum and array_sum
    int missing_number = total_sum - array_sum;

    cout << "Missing number: " << missing_number << endl;

    return 0;
}



/*The input n was 4, meaning we expect the numbers 1 to 5.
The provided array was [1, 2, 3, 5].
The sum of numbers 1 to 5 is 15.
The sum of the array elements is 11.
The difference, which is 4, indicates that 4 is the missing number in the array.*/
