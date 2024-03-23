#include <iostream>
#include <cstring>

using namespace std;
int main() {
    // Declare and initialize the array
    char* arr[] = {"apple", "banana", "cherry", "apple", "banana", "date"};
    // Get the size of the array
    int n = sizeof(arr) / sizeof(arr[0]);
    // Find and display the duplicate strings
    cout << "Duplicate strings:\n";
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(strcmp(arr[i], arr[j]) == 0) {
                cout << arr[i] << "\n";
                break;
            }
        }
    }
    return 0;
}