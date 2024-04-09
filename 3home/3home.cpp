
#include <iostream>
using namespace std;

int findmin(int arr[], int size) {
    int position = 0;
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            position = i;
            min = arr[i];
        }
    }
    return position;
}

int findmax(int arr[], int size) {
    int position = 0;
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            position = i;
            max = arr[i];
        }
    }
    return position;
}
int dobutokMinMax(int arr[], int size) {
    int dobutok = 1;
    int min = findmin(arr, size);

    int max = findmax(arr, size);
    int start;
    int finish;
    if (max < min) {
        start = max;
        finish = min;

    }
    else {
        start = min;
        finish = max;
    }
   

    for (int i = start; i <= finish; i++) {
            dobutok *= arr[i];
        }
    return dobutok;
}


int findfirstnegative(int arr[], int size) {
    int position = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            position = i;

            break;
        }
    }
    return position;
}


int findlastnegative(int arr[], int size) {
    int position = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            position = i;
        }
    }
    return position;
}




int endSum(int arr[], int size) {
    int start = findfirstnegative(arr, size);
    int finish = findlastnegative(arr, size);
    int suma = 0;
    for (int i = start; i <= finish; i++) {
        suma += arr[i];
    }
    return suma;
}





int sumNum(int arr[], int size) {
    int suma = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            suma += arr[i];
        }
    }
    return suma;
}

int parNum(int arr[], int size) {
    int dobutok = 1;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            dobutok *= arr[i];
        }
    }
    return dobutok;
}


int main()
{
    const int SIZE = 10;
    int arr[SIZE] = { 1, 2, 2, 15, -3, 2, -5, 1, 1, 1 };
    cout << sumNum(arr, SIZE) << endl;
    cout << parNum(arr, SIZE) << endl;
    cout << dobutokMinMax(arr, SIZE) << endl; 
    cout << endSum(arr, SIZE) << endl;
}

