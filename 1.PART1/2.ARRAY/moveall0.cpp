#include <iostream>
using namespace std;

void moveZeroesToFront(int arr[], int size) {
    int low = 0,high = size-1;
    while(high>=low){
        if(arr[low]==0){
            swap(arr[low],arr[high]);
            high--;
        }
        else{
            low++;
        }
    }
}

int main() {
    int arr[] = {0, 1, 0, 3, 12};
    int size = sizeof(arr) / sizeof(arr[0]);

    moveZeroesToFront(arr, size);

    cout << "Array after moving zeroes to front: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
