#include <iostream>
using namespace std;
int main() {
    // Array of size 10 is declared and initialized
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int n, mid, start, end, loc;
    loc = -1;     // Variable to store the location of the found element, initialized to -1 (not found)
    start = 0;    // Start index of the array
    end = 9;      // End index of the array (last element index)
    cout << "Enter the value to find: " << endl;  // Ask the user to enter the value to search for
    cin >> n;

    // Perform binary search until the start index is less than or equal to the end index
    while (start <= end) {
        // Calculate the middle index
        mid = (start + end) / 2;

        // Check if the middle element is equal to the value we're searching for
        if (arr[mid] == n) {
            loc = mid; // If found, set 'loc' to the current index
            break;     // Exit the loop
        } 
        // If the value is less than the middle element, search in the left half
        else if (n < arr[mid]) {
            end = mid - 1;
        } 
        // If the value is greater than the middle element, search in the right half
        else {
            start = mid + 1;
        }
    }

    // If 'loc' is still -1, the value was not found in the array
    if (loc == -1) {
        cout << n << " not found" << endl;
    } 
    // Otherwise, the value was found, and its index is stored in 'loc'
    else {
        cout << n << " found at index " << loc << endl;
    }

    return 0; 
}


