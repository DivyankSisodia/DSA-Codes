#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    
    for(int i= 0; i< n; i++){
        cin>>arr[i];
    }

    sort(arr,arr+n);

    for(int i = 0 ;i <n ; i++){
        cout<<arr[i]<<" ";
    }

    vector<int> ans;
    int k;
    cin>>k;

    for(int i = 0; i< n; i++){
        
        int l = i+1;
        int r = n-1;

        while(l<r){
            int sum = arr[i] +arr[l] + arr[r];

            if(sum<k){
                l++;
            }
            else if(sum>k){
                r--;
            }
            else
            if(sum == k){
                // ans.push_back(arr[i]);
                // ans.push_back(arr[l]);
                // ans.push_back(arr[r]);
                cout<<arr[i]<<" "<<arr[l]<<" "<<arr[r]<<endl;;

                while(l<r && arr[l] == arr[l+1]){
                    l++;
                }
                while(l<r && arr[r] == arr[r-1]){
                    r--;
                }
              l++;
            r--;  
            } 
        }
    }

    // for(int i = 0; i<ans.size();i++){
    //     cout<<ans[i]<<" ";
    // }
    cout<<endl;

    return 0;
}

