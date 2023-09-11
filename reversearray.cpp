#include<iostream>
using namespace std;
void reversearr(int array[],int size){
    int start=0;
    int end=size-1;
    while (start<=end){
        swap(array[start],array[end]);
        start++;
        end--;

    }
}
void prntarr(int array[],int size){
    for(int i=0;i<size;){
        cout<<array[i]<<" ";
        i++;
    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    reversearr(arr,5);
    prntarr(arr,5);
    prntarr(arr,5);
    return 0;
}