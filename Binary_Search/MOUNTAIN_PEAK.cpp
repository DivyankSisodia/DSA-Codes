#include<bits/stdc++.h>
using namespace std;

int peak(vector<int> v, int n){
    int s = 0;
    int e = n-1;

    while(s<e){
        int mid = s+(e-s)/2;
        if(v[mid] < v[mid+1]){
            s = mid+1;
        }
        else{
            e = mid;
        }
    }
    return s;
}

int main(){
//mountain peak ka mtlb h pehle increasing order fir decreasing order 
// example ---->  [1,5,7,9,6,4,2]

    vector<int> v{1,5,7,9,6,4,2};
    int n = v.size();
    

    // int v[] = {1,5,7,9,6,4,2};
    // int n = sizeof(v)/sizeof(v[0]);
    // int key;
    // cin>>key;

    cout<<peak(v,n);

    return 0;
}