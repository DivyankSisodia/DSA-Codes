#include<iostream>
using namespace std;

int linear_search(int arr[],int n ,int key){
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1; 
}
int main(){
    int arr[] = {10,5,2,6,7};
    int n = sizeof(arr)/sizeof(int);

    int key;
    cin>>key;

    int index = linear_search(arr,n,key);
    if (index!=1)
    {
        cout<<key<<" is present at index "<< index <<endl;
        // cout<<"-1";
        /* code */
    }
    else{
        cout<<key<<" is Not FOUND"<<endl;
    }
    return 0;
    
}