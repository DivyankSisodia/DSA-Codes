
//     1st APPROACH 0(n^3)


// #include<bits/stdc++.h>
// using namespace std;

// void Subarray(int a[],int n){

    // for(int i = 0; i < n ; i++){
    //     for(int j = i ; j < n; j++){
    //         for(int k = i; k<=j ;k++){
    //             cout<<a[k]<<" ";
    //         }
    //         cout<<endl;
    //     }
    // }

}

// void MaxSumSubarray(int a[], int n){
//     int max_sum = INT_MIN;
//     int s,e;
//     for(int i = 0; i < n ; i++){
//         for(int j = i ; j < n; j++){
//             int sum = 0;
//             for(int k = i; k<=j ;k++){
//                 sum = sum + a[k];
//             }
//             // cout<<endl;
//             if(max_sum<sum){
//                 max_sum = sum;
//                 s = i;
//                 e = j;
//             }
//         }
//     }
//     cout<<"maximum subarray is : ";
//     for(int i = s; i<= e;i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
//     cout<<"maximumm sum subarray "<<max_sum<<endl;
// }

// int main(){

//     int a[] = {1,2,3,4};
//     int n = sizeof(a)/sizeof(a[0]);

//     Subarray(a,n);
//     MaxSumSubarray(a,n);

//     return 0;
// }


//2nd Approach ---> 0(n^2)

#include<bits/stdc++.h>
using namespace std;

void Maxsubarray(int arr[],int n){
    int max_sum = INT_MIN;

    int csum[100] = {0};

    for(int i =1 ; i< n; i++){
        csum[i] = csum[i-1] + arr[i];
    }

    int s,e;
    for(int i = 0; i < n ; i++){
        for(int j = i ; j < n; j++){
            int sum = 0;
            
            sum = csum[j]-csum[i-1];
            
            if(max_sum<sum){
                max_sum = sum;
                s = i;
                e = j;
            }
        }
    }
    cout<<max_sum<<endl;
}

int main(){

    int arr[] = { 1,3,5,7,-5};
    int n = sizeof(arr)/sizeof(arr[0]);

    Maxsubarray(arr,n);

    return 0;
}