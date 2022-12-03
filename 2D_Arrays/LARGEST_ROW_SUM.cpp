#include<bits/stdc++.h>
using namespace std;



int main(){
    int size = 3;
    int arr[size][size];
    int row,col;
    cout<<"Please Enter elements in array of size "<<size<<" x "<<size<<endl<<endl;
    for(int row=0;row<size;row++){
        for(int col=0;col<size;col++){
            cin>>arr[row][col];
        }
    }

    for(int row=0;row<size;row++){
        for(int col=0;col<size;col++){
            cout<<arr[row][col];
        }
        cout<<endl;
    }

    int maxi = INT_MIN;
    int rowIndex = -1;

    for(int row=0;row<size;row++){
        int sum = 0;
        for(int col=0;col<size;col++){
            sum = sum + arr[row][col];
        }

        if(sum > maxi){
            maxi = sum;
            rowIndex = row;
        }

    }

    cout<<"maximum sum is "<<maxi<<" at ";
    cout<<"index "<<rowIndex<<endl;
    return 0;
}