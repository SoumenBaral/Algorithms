int binarySearch(int ar[], int l, int r, int x) {
    if (l <= r) {
        int mid = l + (r - l) / 2;

        if (ar[mid] == x)
            return mid;

        if (ar[mid] > x)
            return binarySearch(ar, l, mid - 1, x);

        return binarySearch(ar, mid + 1, r, x);
    }

    return -1; // Element not found
}
