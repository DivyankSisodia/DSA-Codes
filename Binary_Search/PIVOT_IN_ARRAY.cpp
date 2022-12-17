#include<bits/stdc++.h>
using namespace std;

int PivotElement(int arr[],int n){
    int s =0 ;
    int e = n-1;
    while(s<e){
        int mid = (s+e)/2;
        if(arr[mid]>=arr[0]){
            s = mid+1;
        }
        else{
            e = mid;
        }
    }
    return s;
}

int main(){

    int arr[] = {11 , 13, 1, 2, 3, 4 ,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<PivotElement(arr,n);

    return 0;
}