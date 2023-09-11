//using xor(^) as--> a^a=0, 0^a=a

int findUnique(int arr[], int size)
{
    int a=0;
    for(int i=0;i<size;i++){
        a=a^arr[i];
    }
    return a;
}