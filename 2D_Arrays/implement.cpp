#include<iostream>
using namespace std;

bool isPresent(int arr[][3],int target,int i,int j){
    for(int i = 0;i<4;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]==target){
                return true;
            }
        }
    }
    return false;
}

int main(){
    
    int arr[3][3];
    // int arr[3][3] = {{1,11,111},{2,22,222},{3,33,333}};

    for(int i = 0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }

    for(int i = 0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"enter element for search"<<endl;
    int target;
    cin>>target;

    if(isPresent(arr,target,3,3)){
        cout<<"Element Found "<<endl;
    }
    else{
        cout<<"Not Found "<<endl;
    }

    return 0;
}