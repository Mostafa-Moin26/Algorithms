// Bubble sort usig iteration

void bubbleSort(int arr[], int n) {

    for (int i = 0; i < n; i++) {

        bool didSwap = false;

        for (int j = 0; j < n - i - 1; j++) {

            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                didSwap = true;
            }
        }

        if (!didSwap) {
            break;
        }
    }
}


// Bubble sort using Recursion

void recursiveBubbleSort(int arr[], int i, int j) {

    if (i == 0) {
        return;
    }

    if (i > j) {

        if (arr[j] > arr[j + 1]) {
            swap(arr[j], arr[j + 1]);
        }

        recursiveBubbleSort(arr, i, j + 1);
    }

    recursiveBubbleSort(arr, i - 1, 0);
}

void bubbleSort(int arr[], int n) {

    recursiveBubbleSort(arr, n - 1, 0);
}