#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,m;
	cin>>n>>m;

	int arr[n][m];

	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>arr[i][j];
		}
	}

    //initialize indexes
    int startingCol = 0;
    int startingRow = 0;
    int endingRow = n-1;
    int endingCol = m-1;
    int count = 0;
    int total = n*m;

    while(count<total){
        for(int i=startingCol; i<=endingCol; i++){
            cout<<arr[startingCol][i]<<" ";
            count++;
        }
        startingRow++;
        for(int j=startingRow; j<=endingRow; j++){
            cout<<arr[j][endingCol]<<" ";
            count++;
        }
        endingCol--;
        for(int i=endingCol; i>=startingCol; i--){
            cout<<arr[endingRow][i]<<" ";
            count++;
        }
        endingRow--;
        for(int i=endingRow; i>=startingRow; i--){
            cout<<arr[i][startingCol]<<" ";
            count++;
        }
        startingCol++;
    }

    return 0;
}