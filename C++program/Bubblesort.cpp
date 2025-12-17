// #include<iostream>
// using namespace std; 
// int main(){
//     int arr[]={5,4,3,2,1};
//     int n=5;
//     for(int i=0; i<n-1; i++){
//         for(int j=0; j<n-i-1; j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }
//         }
        
//     }
//     cout<<" print sorted array "<<endl;
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
    
// }


// print  bubble element  using functio
// #include<iostream> 
// using namespace std;
// void bubblesort(int arr[], int n){
//     for(int i=0; i<n-1; i++){
//         for(int j=0; j<n-i-1; j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }
//     // cout<<"print sorted arr : "<<endl;   //yaha pe bhi outpit print ho jayega 
//     // for(int i=0; i<n; i++){
//     //     cout<<arr[i]<<" ";
//     // }

// }
// int main(){
//     int arr[]={5,4,3,2,1};
//     int n=5;
//     bubblesort( arr,n);
//     cout<<"print sorted arr : "<<endl;// or yaha pe bhi print karayenge toh output print ho jayega
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }

// }



//using vector
// #include<iostream>
// #include<vector>
// using namespace std;
// void bubblesort(vector<int> &arr){
//      //& pass by reference bina iske value pass nhi hogi 
//     int n= arr.size();
//     for(int i=0; i<n-1; i++){
//         for(int j=0; j<n-i-1; j++){
//             if(arr[j]>arr[j+1])
//             //if(arr[j]<arr[j+1])  use to print decending order
            
//             {
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }

// }
// int main(){
//     vector<int>arr = {5,4,3,2,1};
//     int n= arr.size();
//     bubblesort(arr);
//     cout<<"sorted arr : "<<endl;
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;

// }