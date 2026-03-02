//pattern triangle
// #include<iostream>
// using namespace std;
// int main(){
//     int n=4;
//     //cin>>n;
//     for(int row=1; row<=n; row++){
//         int start=row;
//         for(int i=1; i<=n-row; i++){
//             cout<<" ";
//         }
//         for(int j=1; j<=row ; j++){
//             cout<<start;
//             start++;
//         }
//         start=start-2;
//         for(int i=1; i<=row-1; i++){
//             cout<<start;
//             start--;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//number ladder
// #include<iostream>
// using namespace std;
// int main(){
//     int tr;
//     cin>>tr;
//     int start=1;
//     for(int row=1; row<=tr; row++){
//         for(int i=1; i<=row; i++){
//             cout<<start;
//             start++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//pattern with zeroes
// #include<iostream>
// using namespace std;
// int main(){
//     int tr;
//     cin>>tr;
//     for(int row=1; row<=tr; row++){
//         cout<<row;
//         if(row>1){
//             for(int i=1; i<=row-2 ;i++){
//                 cout<<"0";
//             }
//             cout<<row;
//         }
//         cout<<endl;
//     }
//     return 0;
// }