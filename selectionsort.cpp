#include<iostream>
using namespace std;
void sort(int arr[],int size){
    for (int i=0;i<size-1;i++){
        int minindex=i;
        for(int j=i+1;j<size;j++){
            if (arr[minindex]>arr[j])
            minindex=j;
 
        }
        swap(arr[minindex],arr[i]);
    }
}
void display(int array[],int n){
    for (int i=0;i<=n-1;i++){
        cout<<array[i]<<" ";
    }

}
int main(){
    int a[6]={3,8,2,1,3,0};
    sort(a,6);
    display(a,6);
    cout<<endl<<"program end";
}