#include<iostream>
using namespace std;

int nummax(int array[],int n){
    int a=-(99999*99999);
    for(int i=0;i<n;){
        if (a < array[i]){
            a=array[i];

        }
        i++;
    }
    cout<<"maximum value is : "<< a<<endl;
    return a;



}

int nummin(int array[],int n){
    int a=(99999*99999);
    for(int i=0;i<n;){
        if (a > array[i]){
            a=array[i];

        }
        i++;
    }
    cout<<"minimum value is : "<< a<<endl;

}


int main(){
    int size;
    cin>>size;
    
    int arr[size];
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    nummax(arr,size);
    nummin(arr,size);
 return 0;
}