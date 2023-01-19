// #include<bits/stdc++.h>
// using namespace std;


// int main(){
//     // int x;
//     // cin>>x;
//     // int t1=0,t2=1,nt=0;
//     // // for(int i=0;i<=x;i++){
//     // //     cout<<fib(i)<<" ";
//     // // }
//     // for(int i=0;i<x;i++){
//     // cout<<fib(i);}

//     // for(int i=1;i<x;i++){
//     //     if(i==1){
//     //         cout<<t1<<" ";
//     //     }
//     //     if(i==2){
//     //         cout<<t2<<" ";
//     //     }
//     //     nt=t1+t2;
//     //     t1=t2;
//     //     t2=nt;

//     //     cout<<nt<<" ";
//     // }


//     return 0;
// }
// //find missing number?
//  #include<iostream>


// void printMissingElements(int arr[], int n){
   
//     // Using 1D dp to solve this
   
//     int dp[11] = {0};
//     for(int i = 0; i < n; i++){
//         dp[arr[i]] = 1;
//     }
   
//     // Traverse through dp list and check for
//     // non set indexes
//     for(int i = 1; i <= 10; i++){
//         if (dp[i] != 1) std::cout << i << " ";
//     }
// }

// int main() {
//     int arr[] = {5,2,6};
//     int n = sizeof(arr) / sizeof(int);
//     printMissingElements(arr, n);
// } 

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     // int n;
//     // cin>>n;
//     // bool prime=true;
//     // if(n==1 || n==0){
//     //     cout<<"not a prime";
//     // }
//     // for(int i=2;i<n;i++){
//     //     if(i%2==0){
//     //         prime=false;
//     //     }
//     //     else{
//     //         cout<<i<<endl;
//     //     }
//     // }
//     // if(prime==true){
//     //     cout<<"is prime";
//     // }
//     // else{
//     //     cout<<"not a prime";
//     // }
//     // int arr[]={1,2,4,5,6,7,8,9};
//     // int a=sizeof(arr)/sizeof(arr[0]);
//     // int n=a+1;
//     // int sum=(n*(n+1))/2;
//     // int sum1=0;
//     // for(int i=0;i<a;i++){
//     //     sum1+=arr[i];
//     // }
//     // int res=sum-sum1;
//     // cout<<"missing number: "<<res;

//     int n;
//     cin>>n;
//     // if(n%2==0){
//     //     cout<<n<<" is even!!!!!!"<<endl;
//     // }
//     // else{
//     //     cout<<n<<" is odd!!"<<endl;
//     // }
//     int t=0,t1=1;
//     vector<int>v,v1;
//     for(int i=0;i<=n;i++){
//         if(i%2==0){
//             v.push_back(i);

//         }
//         else{
//             v1.push_back(i);
//         }
//     }
//     for(auto i:v){
//         cout<<i<<" ";
//     }
//     cout<<endl;
//     for(auto i:v1){
//         cout<<i<<" ";
//     }
//     return 0;
// }
//factorial of a number?
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int fact=1;
    if(n<0){
        cout<<"sorry, factorial doesn't exist for negative number";
    }
    else if(n==0){
        cout<<"the factorial of 0 is :"<<fact;
    }
    else{
        for(int i=1;i<=n;i++){
            fact=fact*i;
        }
         cout<<"factorial  of "<<n<<" is : "<<fact;
    }
   
    return 0;
}

// namespace std;













