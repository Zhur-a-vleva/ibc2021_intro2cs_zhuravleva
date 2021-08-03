#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int> &a, vector<int> l, vector<int> r) {
    int i = 0, j = 0, k = 0;
    while (i < l.size() && j < r.size()) {
        if (l[i] <= r[j]) {
            a[k] = l[i];
            ++k;
            ++i;
        }
        else {
            a[k] = r[j];
            ++k;
            ++j;
        }
    }
    while (i < l.size()) {
        a[k] = l[i];
        ++k;
        ++i;
    }
    while (j < r.size()) {
        a[k] = r[j];
        ++k;
        ++j;
    }
}

void mergeSort(vector<int> &array) {
    if (array.size() == 1) {
        return;
    }
    int n = array.size();
    vector<int> left(n/2);
    vector<int> right(n - n/2);

    for (int i = 0; i < n/2; ++i) {
        left[i] = array[i];
    }
    for (int i = n/2; i < n; ++i) {
        right[i - n/2] = array[i];
    }

    mergeSort(left);
    mergeSort(right);

    merge(array, left, right);
}

int main() {
    int n;
    cin >> n;
    vector<int> array(n);
    for (int i = 0; i < n; ++i) {
        cin >> array[i];
    }

    mergeSort(array);

    for (int element : array) {
        cout << element << " ";
    }
    return 0;
}
