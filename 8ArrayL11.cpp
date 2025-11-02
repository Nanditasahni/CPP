// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[28];
//     char ch[40];
//     bool flags[432];
//     short snum[400];
//     long num[900];
//     cout<<"Array is succeed succesful"<<endl;
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main()
// {
    // int arr[28];
    // char ch[40];
    // bool flags[432];
    // short snum[400];
    // long num[900];
    // cout<<"Array is succeed succesful"<<endl;
    // int a = 5;
     //cout<<"size of a:"<<sizeof(a)<<endl;
     //cout<<"Address of a : "<<&a<<endl;
    //  int arr[20];
    //  cout<<"size of arr:"<<sizeof(arr)<<endl;
    // int arr[]={1,2,3,4,5};
    // int brr[5]={1,2,3,4,5};
    // int drr[5]={1,2};
    //is condition me error ayega
    // int crr[2]={1,2,3,4,5};
     //cou[t<<"Address of arr : "<<&arr<<endl;
       //cout<<"Address of arr : "<<arr<<endl;
//     return 0;
// }


//Indexing
// #include<iostream>
// using  namespace std;
// int main() {
//   int arr[6] = {4,6,8,2,3,9};
//   cout<<arr[2]<<endl;
//   cout<<arr[3]<<endl;
//   cout<<arr[4]<<endl;
//   return 0;
// }

// #include<iostream>
// using namespace std;
// int main() {
//   int arr[5]= {2,4,6,8,10};
//   int n = 5;
//   for(int i = 0; i<n;i++){
//     cout<<arr[i]<<endl;
//   }
//   return 0;
// }

//problem statment 
// #include<iostream>
// using namespace std;
// int main() {
//   //10 size array base nabayenge
//   int arr[5];
//   int n= 5;
//   for(int i=0; i<n; i++){
//     cin>>arr[i];
//   }
//   cout<<"print the double value"<<endl;
  
// //doubleup each value
// for(int i=0; i<n; i++){
//   arr[i]=2*arr[i];
//   cout<<arr[i]<<" ";

// }


// return 0;
// }

//5 size ka array banao
//user se input lo
//total sum print karo
// #include<iostream>
// using namespace std;
// int main() {
//   int arr[5];
//   int n=5;
//   cout<<"enter the input"<<endl;
//   for(int i=0; i<n; i++)
//   {
//     cin>>arr[i];
//   }
//   //total sum print karo
//   int sum = 0;
//   for(int i=0; i<n; i++){

//   sum = sum+arr[i];
//   cout<<"total sum"<<sum<<endl;
// }
// return 0;
// }

//print summ
// #include<iostream>
// using namespace std;
// int main(){
//   int arr[5];
//   int n = 5;
//   for(int i=0; i<n; i++){
//     cin>>arr[i];
//  }
//   cout<<"print before the sum"<<endl;
//   int sum = 0;
//   for(int i=0;i<n;i++)
//   sum = sum+arr[i];
//   cout<<sum<<endl;
  
// }
// #include<iostream>
// using namespace std;
// int main(){
//   int arr[5];
//   int n = 5;
//   cout<<"print before value"<<endl;
//   for(int i=0; i<n; i++)
//   {
//     cin>>arr[i];
//   }
//    int sum = 0;
//   for(int i=0; i<n; i++){
//     sum = sum+arr[i];
//     cout<<sum<<endl;
//   }
// }    



// even or odd
// #include<iostream>
// using namespace std;
// int main(){
//  int n=6;
//  if(n%2==0){
//   cout<<"print even"<<endl;
//  }
//  else{
//   cout<<"print odd"<<endl;
//  }
// } 







//targat found
// #include<iostream>
// using namespace std;
// int main() {
//   int arr[5] = {2,4,6,8,10};
//   int n=5;
//   int target = 17;
//   bool flag=0;
//   for(int i=0;i<n; i++){
//     if(arr[i]=target){
//       //found
//       flag =1;
//       break;
//     }
//   }
//   if(flag=1){
//     cout<<"taget is found"<<endl;
//   }
//   else{
//     cout<<"target is not found"<<endl;
//   }
// }

//linear seach target found
// #include<iostream>
// using namespace std;
// int main() {
//   int arr[5]={2,4,6,8,10};
//   int n=5;
//   int target = 6;
//   bool flag =0;
//   for(int i=0; i<n; i++){
//     if(arr[i]==target){
//       flag=1;
//       break;
//     }
//   }
//   if(flag ==1){
//     cout<<"target is found"<<endl;
//   }
//   else{
//     cout<<"target is not found"<<endl;
//   }
// }

//function call in arr
// #include<iostream>
// using namespace std;
// void printArray(int arr[],int size){
//   for(int i=0; i<size; i++){
//     cout<<arr[i]<<" ";


//   }
//   cout<<endl;
// }
// int main(){
//   int arr[5]={2,3,4,5,6};
//   int size = 5;
//   printArray(arr,size);
// }

//zero cont and one count
// #include<iostream>
// using namespace std;
// void countZeroORone(int arr[],int size){
//   int countzero=0;
//   int countone=1;
//   for(int i=0;i<size;i++){
//     if(arr[i]==0){
//       countzero++;
//     }
//     if(arr[i]==1){
//       countone++;h
//     }
//   }
//   cout<<"countzero:"<<countzero<<endl;
//   cout<<"countone:"<<countone<<endl;
// }
// int main() {
//   int arr[8]={1,1,1,0,0,1,0,0};
//   int size=8;
//   countZeroORone(arr ,size);
// }

//practice
// #include<iostream>
// using namespace std;
// void count0OR1(int arr[], int size)
// {
// int count0=0;
// int count1=0;
// for(int i=0;i<size;i++){
//   if(arr[i]==0){
//     count0++;
//   }
//   if(arr[i]==1){
//     count1++;
//   }

// }
// cout<<"count zzero:"<<count0<<endl;
// cout<<"count one:"<<count1<<endl;
// }
// int main(){
//   int arr[10]={1,1,1,1,0,0,1,0,1,0};
//   int size=10;
//   count0OR1(arr,size);
// }

// #include<iostream>
// using namespace std;
// void countor1(int arr[],int size){
// int count0=0;
// int count1=1;
// for(int i=0;i<size;i++){
//   if(arr[i]==0){
//     count0++;
//   }
//   if(arr[i]==1){
//     count1++;
//   }
// }
// cout<<"count0"<<count0<<endl;
// cout<<"count1"<<count1<<endl;
// }
// int main(){
//   int arr[10]={1,1,1,1,0,0,0,1,0,0};
//   int size=10;
//   countor1(arr,size);

// }

//reverse the number
// #include<iostream>
// using namespace std;
// int main(){
//   int n;
// cin>>n;
// int arr[n];
// for(int i=0; i<n; i++){
//   cin>>arr[i];
// }
// for(int i=n-1; i>=0; i--){
//   cout<<arr[i]<<" ";
// }
// return 0;
// } 


