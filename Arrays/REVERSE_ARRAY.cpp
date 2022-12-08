// #include<iostream>
// using namespace std;

// void reverseArray(int arr[],int n){
//      int s= 0 ;
//      int e = n - 1;

//      while (s<e)
//      {
//          swap(arr[s],arr[e]);
//          s += 1;
//          e -= 1;
//      }
// }

// int main(){
//     int arr[]= {10,20,30,40};

//     int n = sizeof(arr)/sizeof(int);
//     reverseArray(arr,n);

//     for (int i = 0; i < n; i++)
//     {
//         cout<< arr[i] << "  ";
//     }
//     cout<<endl;
    
//     return 0;
// }
 
//2nd METHOD

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int arr[]={1,2,3,4,5};

//     int start=0;
//     int end=4;

//     while(start<=end){
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }

//     for(int i=0;i<5;i++){
//         cout << arr[i] << " ";
//     }
// }