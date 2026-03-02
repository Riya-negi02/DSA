//whatever the pattern is make grid , do row numbering and make it in general form
//1. HOLLOW DIAMOND
// #include <iostream>
// using namespace std;

// int main() {
//     int n=5;
//     //cin>>n;
//     //row1
//     for(int i=0; i<n; i++){
//         cout<<"*";
//     }
//     cout<<endl;
//     //row 2 to 4
//     for(int row=1; row<=(n-1)/2; row++){
//         //star
//         for(int i=1; i<=(n+1)/2 -row; i++){
//             cout<<"*";
//         }
//         //sp
//         for(int j=1; j<=2*row-1; j++){
//             cout<<" ";
//         }
//         //star
//         for(int i=1; i<=(n+1)/2 -row; i++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
   
//     for(int row=1; row<=(n-2)/2; row++){
//          for(int j=1; j<=row+1; j++){
//             cout<<"*";
//         }
//         for(int i=1; i<=row;i++){
//             cout<<" ";
//         }
//         for(int j=1; j<=row+1; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
    
//     //row 5
//     for(int i=0; i<n; i++){
//         cout<<"*";
//     }
//     cout<<endl;
//     return 0;
// }

//mirror star pattern
// #include<iostream>
// using namespace std;
// int main(){
//     int tr;
//     cin>>tr;
//     //upper triangle
//     for(int uprow=1; uprow<=(tr+1)/2; uprow++){
//         for(int i=1; i<=(tr+1)/2 -uprow ; i++){
//             cout<<" ";
//         }
//         for(int j=1; j<=2*uprow-1; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     //lower triangle
//     for(int dwrow=1; dwrow<=(tr-1)/2;dwrow++){
//         for(int i=1; i<=dwrow; i++){
//             cout<<" ";
//         }
//         for(int j=1; j<= tr-2*dwrow; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//hollow rhombus
// #include<iostream>
// using namespace std;
// int main(){
//     int tr; 
//     cin>>tr;
//     for(int row=1; row<=tr; row++){
//         for(int i=1; i<=tr-row; i++){
//             cout<<" ";
//         }
//         for( int col=1; col<=tr; col++){
//             if(row==1 || col==tr || col==1 || row==tr){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }