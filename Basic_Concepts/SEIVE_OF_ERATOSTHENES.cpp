#include<bits/stdc++.h>
using namespace std;

void prime(int n){
    vector<bool> v(n+1,true);
    v[0] = v[1] = false;
    for(int i=2; i*i<=n; i++){
        if(v[i]){
            for(int j=2*i;j<=n; j=j+i){
                v[j] = false;
            }
        }
    }
    for(int p=2;p<=n;p++){
        if(v[p]){
            cout<<p<<" ";
        }
    }
}

int main(){
    int n = 20;
    prime(n);
    
    return 0;
}