#include<iostream>
#include<vector>
using namespace std;

vector<int> mergee(vector<int>& a, vector<int>& b) {
    int i = 0, j = 0, k = 0;
    int m = a.size();
    int n = b.size();
    vector<int> res(m + n);

    while (i < m && j < n) {
        if (a[i] > b[j]) {
            res[k++] = b[j++];
        } else {
            res[k++] = a[i++];
        }
    }

    while (i < m) {
        res[k++] = a[i++];
    }

    while (j < n) {
        res[k++] = b[j++];
    }

    return res;
}

int main() {
    vector<int> arr1 = {1, 4, 5, 8};
    vector<int> arr2 = {1, 2, 3, 5};

    cout << "FIRST ARRAY : ";
    for (int i = 0; i < arr1.size(); i++) {
        cout << arr1[i] << " ";
    }

    cout << endl << "SECOND ARRAY : ";
    for (int i = 0; i < arr2.size(); i++) {
        cout << arr2[i] << " ";
    }

    vector<int> merged = mergee(arr1, arr2);

    cout << endl << "MERGE SORTED ARRAY : ";
    for (int i = 0; i < merged.size(); i++) {
        cout << merged[i] << " ";
    }

    return 0;
}
