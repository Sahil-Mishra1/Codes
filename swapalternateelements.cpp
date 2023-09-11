#include<iostream>
using namespace std;

void alterarr(int array[],int size){
    for(int i=0;i<size;){
        if(i+1<size){
        swap(array[i],array[i+1]);}
        i=i+2;
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
    cout<<"program started"<<endl;
    alterarr(arr,5);
    prntarr(arr,5);

     return 0;

}