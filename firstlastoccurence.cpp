// code for finding first and last occurence of element in array
#include<iostream>
using namespace std;
int frstoccr(int arr[],int size ,int key){
    int start = 0;
    int end= size-1;
    int mid = start + (end-start)/2;
    int ans=-1;
    while(start<=end){
        if (arr[mid]==key){
            ans = mid;
            end=mid-1;
        }

        else if(arr[mid]<key){
            start=mid+1;
        }

        else if (arr[mid]>key){
            end=mid-1;
        }
     mid = start + (end-start)/2;

    }
    return ans;

}
int lastoccr(int arr[],int size ,int key){
    int start = 0;
    int end= size-1;
    int mid = start + (end-start)/2;
    int ans=-1;
    while(start<=end){
        if (arr[mid]==key){
            ans = mid;
            start=mid+1;
        }

        else if(arr[mid]<key){
            start=mid+1;
        }

        else if (arr[mid]>key){
            end=mid-1;
        }
     mid = start + (end-start)/2;

    }
    return ans;

}
int main(){
    cout<<"program started"<<endl;
    int a[6]={1,2,3,3,3,4};
    cout<<"first occurence of given element is "<<frstoccr(a,6,3)<<endl;

    cout<<"last occurence of given element is "<<lastoccr(a,6,3)<<endl;
    cout<<"program end";
}