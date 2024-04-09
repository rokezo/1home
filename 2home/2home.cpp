#include <iostream>
using namespace std;

int findmin(int arr[], int size, int start, int finish ) {
    int min = arr[start-1];
    for (int i = start; i < finish; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}


int findmax(int arr[], int size, int start, int finish) {
    int max = arr[finish -1];
    for (int i = start; i < finish; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}






int main()
{

    int start;
    int finish;
    const int SIZE = 12;
    int arr[SIZE] = { 1, 33, 300, 500, 1000, 600, 120, 123, 345, 154, 168, -854 };
    cout << "Enter start month: " << endl;
    cin >> start;
    cout << "Enter finish month: " << endl;
    cin >> finish;

    if (start < 1 || finish > SIZE || start > finish) {
        cout << "Invalid numbers" << endl;
        return 0;
    }
    cout << findmin(arr, SIZE, start, finish) << endl;
    cout << findmax(arr, SIZE, start, finish) << endl;

 

}

