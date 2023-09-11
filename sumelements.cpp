#include<iostream>
using namespace std;
int sumel(int arr[],int size){
    int sum=0;
    for (int i=0;i<size;){
        sum+=arr[i];
        i++;

    }
    return sum;
}
int main(){
    int arr[5]={1,2,3,4,5};
    int a = sumel(arr,5);
    cout<<"sum of all elements of given array= "<<a<<endl;

 
    return 0;
}