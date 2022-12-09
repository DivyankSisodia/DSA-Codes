// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
    
//     int arr[n];
//     for(int i = 0;i<n;i++){
//         cin>>arr[i];
//     }

//     int x;
//     cin>>x;

//     for(int i = 0; i<n-1;i++){
//         for(int j =i+1 ; j< n; j++){
//             if( arr[i] + arr[j] == x)
//             {
//                 cout<<arr[i]<<" "<<arr[j];
//             }
            
//         }
//     }
//     return 0;
// }


//   TWO POINTER APProach

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i = 0 ;i < n ; i++){
        cin>>arr[i];
    }

    int x;
    cin>>x;

    int s = 0;
    int l = n-1;

    while(s<l){
        if(arr[s] + arr[l] == x){
            cout<<arr[s]<<" "<<arr[l];
            s++;
            l--;
        }
        else if(arr[s] + arr[l] < x){
            s++;
        }
        else{
            l--;
        }   
    }
    return 0;
}