void bubble_sort(int* arr) {
    int temp;
    int c = 0;
    for (;;) {
        for (int i = 0; i < sizeof(arr)/sizeof(int); ++i) {
            if (arr[i]>arr[i+1]){
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        for (int i = 0; i < sizeof(arr)/sizeof(int); ++i) {
            if (arr[i]>arr[i+1])++c;
        }
        if (c==0) break;
        c = 0;
    }
}
