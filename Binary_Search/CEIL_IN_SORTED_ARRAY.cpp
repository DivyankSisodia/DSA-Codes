// Input: arr[] = {1, 2, 8, 10, 10, 12, 19}, x = 5
// Output: 3
// Explanation: 8 is the smallest element in 
// arr[] greater than 5

#include<bits/stdc++.h>
using namespace std;

int ceilArray(int arr[],int n,int x){
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;
    while(s<=e){
        if(arr[mid] == x){
            return arr[mid];
        }
        else if(arr[mid] < x){
            s = mid +1;
        }
        else{
            e = mid -1;
        }
        mid = s+(e-s)/2;
    }
    return arr[s];
}

int main(){

    int arr[7] = {1,2,8,10,10,12,14};
    int n = 7;
    int x = 5;

    int index = ceilArray(arr,n,x);
    cout<<index;

    return 0;
}