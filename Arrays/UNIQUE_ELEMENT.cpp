#include<bits/stdc++.h>
using namespace std;

int findUnique(int arr[],int size){
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans^arr[i];
    }
    return ans;
}

int main(){
    int arr1[]={1,2,3,1,2};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    cout<<"ELEMENT OCCURING ONCE IS "<<findUnique(arr1,5);
    return 0;
}
