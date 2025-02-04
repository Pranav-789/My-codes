int rev[5];

    for (int i = 0; i < 5; i++)
    {
        int temp = arr[i];
        arr[i] = rev[4-i];
        rev[4-i] = temp;
    }

    for (int i = 0; i < 5; i++)
    {
        cout<< rev[i] <<" ";
    }