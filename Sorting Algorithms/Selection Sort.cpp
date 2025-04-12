
void selectionSort(int arr[], int n) {

    for (int i = 0; i < n; i++) {

        int mx = INT_MIN, pos;

        for (int j = 0; j < n - i; j++) {

            if (arr[j] > mx) {
                mx = arr[j];
                pos = j;
            }
        }

        swap(arr[pos], arr[n - i - 1]);
    }
}