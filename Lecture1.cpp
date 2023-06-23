#include <bits/stdc++.h>
using namespace std;

void mergeSortedarray(vector<int> &a, int m, vector<int> &b, int n) {
    int i = m - 1, j = n - 1, k = m + n - 1;
    while (i >= 0 && j >= 0) {
        if (a[i] > b[j]) {
            a[k] = a[i];
            i--;
        } else {
            a[k] = b[j];
            j--;
        }
        k--;
    }
    while (j >= 0) {
        a[k] = b[j];
        j--;
        k--;
    }
}

int main() {
    vector<int> a = {1, 3, 5, 7, 9};
    vector<int> b = {2, 4, 6, 8, 10};
    int m = a.size();
    int n = b.size();
    mergeSortedarray(a, m, b, n);
    cout << "Merge sorted array: ";
    for (int num : a) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
