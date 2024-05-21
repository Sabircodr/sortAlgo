// Function to swap two elements
void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// Funtion to copy the array
int* copyArray(int *source, int size) {
    int *destination = (int *)malloc(size * sizeof(int));
    if (destination == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return NULL; // Return NULL if memory allocation fails
    }

    for (int i = 0; i < size; i++) {
        destination[i] = source[i];
    }
    return destination;
}

// Function to print the array (not necessary)
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d, ",arr[i]);
    }
    printf("\n");
    
}
