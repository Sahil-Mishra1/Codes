int findDuplicate(int arr[],int size) 
{
    int a=0;
    for (int i=0 ; i<size;i++){
        a=a^arr[i];
        
    }
    for (int i=1 ; i<size;i++){
        a=a^i;
        
    }
	return a;
	
}
