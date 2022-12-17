
// Input: arr[] = {1, 2, 8, 10, 10, 12, 19}, x = 5
// Output: 2
// Explanation: 2 is the largest element in 
// arr[] smaller than 5

#include<bits/stdc++.h>
using namespace std;

int floorArray(int arr[],int x,int n){
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;

    while(s<=e){
        if(mid == x){
            return arr[mid];
        }
        else if(arr[mid] > x){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
         mid = s+(e-s)/2;
    }
    return arr[s];
}

int main(){
    
    int arr[7] = {1, 2, 8, 10, 12 ,12 ,19};
    int x = 11;
    int n=7;
    int index = floorArray(arr,x,n);
    cout<<index;
    return 0;
}
