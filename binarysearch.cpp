#include<iostream>
using namespace std;
//if array is in ascending order
int binsrch(int array[],int size, int key){
    int start=0;
    int end=size-1;
    int mid= start + (end-start)/2;
    while(start<=end){
        if (array[mid]==key){
            return mid;
        }
        if (array[mid]>key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}

int main(){
    int arr[6]={1,2,3,3,3,3};
    cout<<"index of given key is : "<<binsrch(arr,6,4)<<endl;
}