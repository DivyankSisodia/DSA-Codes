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

	int startingRow = 0;
	int startingCol = 0;
	int endingRow = n-1;
	int EndingCol = m-1;
	int count = 0;
	int total = n*m-1;

	while(count<total){
		for(int i=startingRow;i<=endingRow;i++){
			cout<<arr[i][startingCol]<<" ";
			count++;
		}
		startingCol++;
		for(int i=startingCol;i<=EndingCol;i++){
			cout<<arr[endingRow][i]<<" ";
		}
		endingRow--;
		for(int i=endingRow;i>=startingRow;i--){
			cout<<arr[i][EndingCol]<<" ";
		}
		EndingCol--;
		for(int i=EndingCol;i>=startingCol;i--){
			cout<<arr[startingRow][i]<<" ";
		}
		startingRow++;
	}

    return 0;
}