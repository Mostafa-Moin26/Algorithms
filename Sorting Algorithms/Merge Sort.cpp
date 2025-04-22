#include<bits/stdc++.h>

using namespace std;

void merge(vector<int> &a, int low, int mid, int high) {

    vector<int> temp;

    int left = low;
    int right = mid + 1;

    while (left <= mid && right <= high) {

        if (a[left] <= a[right]) {
            temp.push_back(a[left]);
            left++;
        } else {
            temp.push_back(a[right]);
            right++;
        }
    }

    while (left <= mid) {
        temp.push_back(a[left]);
        left++;
    }
    while (right <= high) {
        temp.push_back(a[right]);
        right++;
    }

    for (int i = 0; i < temp.size(); i++) {
        a[low + i] = temp[i];
    }
}

void mergeSort(vector<int> &a, int low, int high) {

    if (low >= high) {
        return;
    }

    int mid = (low + high) / 2;

    mergeSort(a, low, mid);
    mergeSort(a, mid + 1, high);

    merge(a, low, mid, high);
}
int main() {

    int n; cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}