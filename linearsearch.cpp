#include<iostream>
using namespace std;
bool search(int arr[],int size,int element){
    for(int i=0;i<size;){
        if (arr[i]==element){
            return 1;
        }i++;

    }
     return 0;
}
int main(){
    int arr[5]={1,4,5,6,7};
    bool found=search(arr,5,3);
    if (found){
        cout<<"element is found "<<endl;
    }
 else {
    cout<<" element not found"<<endl;
 }
    return 0;
}