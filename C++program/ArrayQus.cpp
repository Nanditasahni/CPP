// #include<iostream>
// using namespace std;
// int main(){
//     int n=6;
//     int&a=n;
//     int&b=n;
//     cout<<"n:"<<n<<endl;
//     cout<<"a:"<<a<<endl;
//     cout<<"b"<<b<<endl;
// }


//call by value and call by reference
//call by value = ye actual value hota hai variable ka isme hum changes performe  nhi kar sakte agre hum changes perform karenge tof sirf function ke ander hi change hoga 
// #include<iostream>
// using namespace std;
// void  My_function(int n){
//     n=n+24;//sirf function ke ander changes hoga
//     cout<<n<<endl;
// }
// int main(){
//     int n=200;
//     cout<<n<<endl;
//     My_function( n);
//     cout<<n;


// }

// #include<iostream>
// using namespace std;
// void changeValue( int n){
//      n = n+2;
//     cout<<n<<endl;
// }
// int main() {
//     int n=100;
//     cout<<n<<endl;
//     changeValue(n);
//     cout<<n;
// }
// #include<iostream>
// using nmaespace std;
// void PrintEVENorODD( int n){
//     if(n%2==0){
//         cout<<"even"<<endl;
//     }
// }

//find unique number
// #include<iostream>
// using namespace std;
// int Uniqueu(int arr[] ,int n){
//      int ans=0;
//      for(int i=0; i<n; i++){
//       ans = ans^arr[i];
//      }
//      return ans;
// }
// int main() {
//     int arr[] = {2,3,4,5,6,2,3,4,5};
//     int n = 9;
//     int finalanswer = Uniqueu(arr, n);
//     cout<<"print unique no.:"<<finalanswer<<endl;


//print pair of gime arr
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3};
//     int n=3;
// for(int i=0; i<n; i++){
//     for(int j=0; j<n; j++){
//         cout<<arr[i]<<"+"<<arr[j]<<"="<<arr[i]+arr[j]<<endl;
//     }
// }
// }  

//print triplet number
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[] ={2,3,4,5};
//     int n=4;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             for(int k=0; k<n; k++){
//                 cout<<arr[i]<<arr[j]<<arr[k]<<endl;
//             }
//         }
//     }
// }

//short 0 and 1IMPORTANT 
// #include<iostream>
// using namespace std;
// void shortzeroorone(int arr[],int n){
// int countzero=0;
// int countone=0;
// for(int i=0; i<n; i++) {
//     if(arr[i]==0)
//     countzero++;
//     if(arr[i]==1)
//     countone++;
// }
// int i;
// for(i=0; i<countzero; i++){
//     arr[i]=0;
// }
// for(int j=0; j<countone; j++){
//     arr[i+j]=1;
// }
// }
// int main() {
//     int arr[]={1,1,0,0,0,1,0,1};
//     int n=8;
// shortzeroorone(arr,n);
// for( int i=0; i<n; i++){
//     cout<<arr[i]<<" ";
// }
// return 0;
// }


//{10,20,30,40,50,60}
// #include<iostrem>
// using namespace std;
// int main(){
//     int arr[]={10,20,30,40,50,60};
//     int n = 6;
    
// }
//STL---------------------(static)
// #include<iostream>
// using namespace std;
// void fun(int arr[],int n){
//    for(int i=0; i<n; i++){
//       cout<<arr[i]<<endl;

//    }
// }
// int main(){
//    int arr[5]={1,2,3,4,5};
//    int n=5;
//    fun(arr,n);
// }
//daynamic
// #include<iostream>
// using namespace std;
// void fun(int arr[],int n){
//    for(int i=0; i<n; i++){
//       cout<<arr[i]<<endl;
//    }
// }
// int main(){
//    int n;
//    cin>>n;
//    int *arr = new int[5];//each element would be zero or garbege
// for(int i=0; i<n; i++){
//    int data ;
//    cin>>data;
//    arr[i]=data;
// }
//   fun(arr,n);

// }

//EXTRA CLASSES
//shifteing negative left side and positive right side
// #include<iostream>
// using namespace std;
// void ShiftarrOneSideNegative(int arr[] ,int n){
//    int j=0;// j me negative value stored hai
//    for( int index=0; index<n; index++){
//       if(arr[index]<0){
//          swap(arr[index],arr[j]);
//          j++;
//       }

//    }
// }



// int main(){
//    int arr[] ={ 23, -7,10,-11,20,-15,22};
//    int n=7;
//    ShiftarrOneSideNegative( arr,n);
//    for(int i=0; i<n; i++){
//       cout<<arr[i];
//    }

// }
 


#include<iostream>
using namespace std;
void ShiftLeftSide(int arr[],int n){
    int j=0;
    for(int index=0; index<n; index++){
        if(arr[index]<0){
            swap(arr[index],arr[j]);
            j++;
        }
    }
}

int main(){
    int arr[ ] ={-2,4,-6,-8,7,9,10};
    int n=7;
    ShiftLeftSide(arr,n);
    for(int i=0; i<n; i++){
        cout<<arr[i];
    }
}