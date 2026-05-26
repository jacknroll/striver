void insertion_sort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {

        for (int j = 1; j <= i; j++)
        {

            if (arr[i - j + 1] < arr[i - j])
            {
                int temp = arr[i - j + 1];
                arr[i - j + 1] = arr[i - j];
                arr[i - j] = temp;

            }

        }
}