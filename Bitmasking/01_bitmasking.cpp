//playing with bits
// #include<iostream>
// using namespace std;
// int count(int n){
//     int count=0;
//     while(n>0){
//         count+= n&1;
//         n >>=1;
//     }
//     return count;
// }
// int main(){
//     int Q;
//     cin>> Q;
//     while(Q--){
//         int a, b;
//         cin>>a;
//         cin>>b;
//         int sum=0;
//         for(int i=a; i<=b; i++){
//             sum+= count(i);
//         }
//         cout<<sum;
//     }
//     return 0;
// }

//minimum bitflips LC:2220 minbitflips
// class Solution {
// public:
//     int minBitFlips(int start, int goal) {
//         int count=0;
//         int num= (start^goal);            //num of 1= number of bitflips 
//         while(num>0){
//             count= count+ (num&1);            //can not do mod 10 thing this is how we find if didgit is 1 or not
//             num>>=1;                           // rightshift instead of n/10
//         }
//         return count;
//     }
// };