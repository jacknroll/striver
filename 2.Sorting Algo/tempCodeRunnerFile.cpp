 int arr[] = {7, 5, 9, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n - 1; i++)
    {
        int max = arr[0];
        int maxI;
        for (int j = 0; j < n - i; j++)
        {

            if (max <= arr[j])
            {
                max = arr[j];
                maxI = j;
            }
        }
        int temp;
        temp = arr[maxI];
        arr[maxI] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }