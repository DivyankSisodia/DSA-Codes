//merge 2 sorted arrays
#include<bits/stdc++.h>
#include<vector>
using namespace std;

void mergeArray(int arr1[],int n,int arr2[],int m,int arr3[]){
    int i = 0, j =0;
    int k = 0;
    while (i<n && j<m)
    {
        if(arr1[i]<arr2[j]){
            arr3[k] = arr1[i];
            k++;
            i++;
        }
        else{
            arr3[k++] = arr2[j++];
        }
    }
    while (i<n)
    {
        arr3[k++] = arr1[i++];
    }
    while (j<m)
    {
        arr3[k++] = arr2[j++];
    }
    
}

void print(int ans[],int n){
    for(int  i =0;i<n;i++){
        cout<<ans[i]<<" ";
    }cout<<endl;
}

int main(){
    int arr1[] = {2,4,4,6,7,9};
    int arr2[] = {1,4,8,10};
    int arr3[9] = {0};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int m = sizeof(arr2)/sizeof(arr2[0]);
    int x = 5;
    int k = sizeof(arr3)/sizeof(arr3[0]);
    cout<<k<<endl;
    mergeArray(arr1,5,arr2,4,arr3);
    print(arr3,9);
    cout<<endl;
    cout<<arr3[x-1];
}



