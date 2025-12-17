// #include<iostream>
// using namespace std;
// int main(){
//     //creat 2d array
//     //int arr[3][4];
//     //initialized 2d arr
//     int arr[3][4]= {
//         {1,2,3,5},
//         {6,7,8,9,},
//         {10,11,12,13}
//     };
// }



//function ko pass karne ke liye atleast colum hona chahiye
// #include<iostream>
// using namespace std;
// //ptint row
// void printFunc(int arr[][4], int row, int col){
//     for (int i=0; i<row; i++){
//         for(int j=0; j<col; j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

// //column wise
//     void printCol(int arr[][4],int row,int col){
//         for(int i=0; i<col; i++){
//             for(int j=0; j<row; j++){
//                 cout<<arr[j][i]<<" ";
//             }
//             cout<<endl;
//         }
//     }


// int main(){
//     int arr[3][4]= {
//         {1,2,3,5},
//         {6,7,8,9,},
//         {10,11,12,13}
//     };
//     int row = 3;
//     int col = 4;
//     printFunc(arr,row,col);
//     printCol(arr, row,col);
//     return 0;
// }

//how to take input
// #include<iostream>
// using namespace std;
// void ptintFunc(int arr[][4], int row,int col){
//     for(int i=0; i<row; i++){
//         for(int j=0; j<col; j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int arr[3][4];
//     int row=3;
//     int col =4;
//     for(int i=0; i<row; i++){
//         for(int j=0; j<col; j++){
//             cout<<"enter the input of row"<<i<<"input of colum"<<j;
//             cin>>arr[i][j];
//         }
//     }
    
//     return 0;
// }

//find targate------------
// #include<iostream>
// using namespace std;
// bool findtarget(int arr[][4], int row, int col,int target){
//     for(int i=0; i<row; i++){
//         for(int j=0; j<col; j++){
//             if(arr[i][j]==target){
//                 //if element is found
//                 return true;
//             }
//         }
//     }
//     return false;
// }
// int main(){
//     int arr[3][4]= {
//          {1,2,3,5},
//         {6,7,8,9,},
//         {10,11,12,13}
//    };
//    int row = 3;
//    int col = 4;
//    int target = 11;
//    cout<<"found or not"<< findtarget(arr ,row, col ,target);
//    return 0;
// }


//find minimum and maximum number
// #include<iostream>
// #include<limits.h>
// using namespace std;
// int printMax(int arr[][4],int row,int col){
//     //maximum value ko INT_MIN se initialized karte hai
//     int max_value = INT_MIN;
//     for(int i=0; i<row; i++){
//         for(int j=0; j<col; j++){
//             if( arr[i][j]> max_value){
//             max_value= arr[i][j];
//         }
//     }
//     }
//     return max_value;
// }
// int main(){
//     int arr[3][4]={{5,10,15,20},{25,30,35,40},{45,50,55,60}};
//     int row=3;
//     int col = 4;
//     // printMax(arr,row,col);
//     cout<<"print max no."<<printMax(arr,row,col);
//     return 0;
// }

//How to print roe wise sum
// #include<iostream>
// using namespace std;
// void rowWiseSum(int arr[][4], int col ,int row){
//     for(int i=0; i<row; i++){
//         int sum =0;
//         for(int j=0; j<col; j++){
//             sum= sum+arr[i][j];
//         }
//         cout<<sum<<endl;

//     }
// }
// int main(){
//     int arr[3][4]={{5,10,15,20},{25,30,35,40},{45,50,55,60}};
//     int row=3;
//     int col = 4;
//     rowWiseSum(arr,  col , row);
//     return 0;
// }

//print column wise
// #include<iostream>
// using namespace std;
// void rowWiseSum(int arr[][4], int col ,int row){
//     for(int i=0; i<col; i++){
//         int sum =0;
//         for(int j=0; j<row; j++){
//             sum= sum+arr[j][i];
//         }
//         cout<<sum<<endl;

//     }
// }
// int main(){
//     int arr[3][4]={{5,10,15,20},{25,30,35,40},{45,50,55,60}};
//     int row=3;
//     int col = 4;
//     rowWiseSum(arr,  col , row);
//     return 0;
// }

//how to print transpose matrix
// #include<iostream>
// using namespace std;
// // void rowWiseSum(int arr[][4], int row ,int col){
//     for(int i=0; i<col; i++){
//         int sum =0;
//         for(int j=0; j<row; j++){
//             sum= sum+arr[j][i];
//         }
//         cout<<sum<<endl;

//     }
// }
// void transpose(int arr[][4], int row , int col){
//     for(int i=0; i<row; i++){
//         for(int j=0; j<col; j++){
//             swap(arr[i][j],arr[j][i]);
//         }
//     }
// }
// int main(){
//     int arr[4][4]={{5,10,15,20},{25,30,35,40},{45,50,55,60},{22,33,44,55}};
//     int row=4;
//     int col = 4;
//     // rowWiseSum(arr,  col , row);
//     //printarray(arr,row,col);
//     cout<<"print after transpose"<<endl;
//     cout<<"print"<<transpose( arr,  row ,  col);
//    // transpose(arr,row,col);
//     return 0;
// }