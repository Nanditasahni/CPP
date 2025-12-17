// hello world prgm
 //#include<iostream>
//using namespace std;
//int main() {
   // cout <<"hello world";
//}

//if we wanted to print in diffrent line
// #include<iostream>
// using namespace std;
// int main() {
//     cout <<"hello";
//     cout <<endl;
//     cout <<"nandita";
// }
//also use'\n'in the place of endl 
//endl means new line



// if we wanted to 1 or more line space 
// #include<iostream>
// using namespace std;
// int main(){
//     cout << "hello";
//     cout <<endl;
//     cout <<'\n';
//     cout <<"shinchan";
// }

//also use :
// #include<iostream>
// using namespace std;
// int main(){
//     cout <<"hello" << endl <<"doreamon" <<'\n' <<"and nobita";
// }

//*home work
// #include<iostream>
// using namespace std;
// int main(){
//     cout <<"HELLO"; cout <<"world";
// }
//output HELLOworld


//DATA type
// #include<iostream>
// using namespace std;
// int main(){
    //int -> 4byte
    // int num = 50;
    // cout << num <<endl;
    //cout << sizeof(num)<<endl;
    //char-> 1byte
    //char ch = 'k';
    //cout <<ch<<endl;
    //cout <<sizeof(ch)<<endl;
    //float -> 4byte
    // string<<8bytes
    // string st = "hello";
    // cout <<st<<endl;
    // cout<<sizeof(st)<<endl;
    //long -> 4 
    // long lg = 24;
    // cout<<lg<<endl;
    // cout<<sizeof(lg)<<endl;float point = 2.6;
    // cout<<point<<endl;
    // cout<<sizeof(point)<<endl;
    //  
    
//}
// m\output> & .\'mainl3.exe'
// 50
// 4
// k
// 1
// 2.6
// 4

// condition based question

// #include<iostream>
// using namespace std;
// int main(){
//     int marks;
//     cout<<"enter the marks here:"<<endl;
//     //take input from user
//     cin>>marks;
//     cout<<"printing marks:"<<marks<<endl;
// }



// #include<iostream>
// using namespace std;
// int main(){
// cout<<"guhihi"<<endl;
// }
// function to find max of three number
// #include<iostream>
// using namespace std;
// void Printgreaterno(int a, int b,int c){
//     if(a>b&&a>c){
//         cout<<"a is greater no"<<a<<endl;   
//      }
//      else if(b>a&&b>c){
//         cout<<"b is greaater no."<<b<<endl;
//      }
//      else 
//      cout<<"cis greater no"<<c<<endl;
// }
// int main(){
//     Printgreaterno(40, 20,30);
//     return 0;
// }

// //find factorial 
// // #include<iostream>
// // using namespace std;
// // int main(){
 
// // //     long long fact = 1;
// // //     int n;
// // //     cin>>n;
// // //     for(int i=1; i<=n; i++){
// // //         fact = fact*i;
// // //     }
// // //     cout<<"factorial of"<<n<<"="<<fact<<endl;
// // //     return 0;

// // cout<<"kkj"<<end;
// // return 0;

// }
// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"hello"<<endl;
// }

//factoreal
// #include<iostream>
// using namespace std;
// int main(){
//     long long fact = 1;
//     int n;
//     cin>>n;
//     for(int i=1; i<=n; i++){
//     fact = fact*i;  
//     }
//     cout<<fact;
// }

//find factorial by using function
// #include<iostream>
// using namespace std;
// void factorial(int n){
//     long long fact=1;
//     for(int i=1; i<=n; i++){
//         fact = fact*i;
//     }
//     cout<<fact;
// }
// int main()
// {
//     int n;
//     cin>>n;
//     factorial(n);
    
// }

//FIBONCCAI
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a=0,b=1;//first two fibonacci
//     for(int i=1; i<=n; i++){
//         cout<<a<<" ";
//         int next = a+b;
//         a = b;
//         b = next;
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int rev=0;
//     int temp =n;
//     for(;temp>0;  temp = temp/10){
//         rev = rev*10+(temp%10);
//     }
//     if(rev==n){
//         cout<<n<<"it is palindrom"<<endl;

//     }
//     else {
//         cout<<n<<"is not a palindrom"<<endl;
//     }
// return 0;
// }
//reverse the number

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int rev =0;
//     int temp = n;
//     for(; temp>0; temp = temp/10) //yaha semicolen is liye likh rahe hai kyu ki hamne phale se int temp initialized hai loop ke bahar
// {
//     rev = rev * 10+(temp%10);
// }
// cout<<rev<<" ";
// }

//factorial
// #include<iostream>
// using namespace std;
// int main(){
//     long long fact = 1;
//     int n;
//     cin>>n;
    
//     for(int i=1; i<=n; i++){
//         fact = fact*i;
//     }
//     cout<<fact<<" ";

// }

//fibbonicci
// #include<iostream>
// using namespace std; 

//     int main(){
//         int n;
//         cin>>n;
//         int a=0,b=1;
//         for(int i=0; i<=n; i++){
//             cout<<a<<" ";
//             int next = a+b;
//             a=b;
//             b=next;
//         }
//         return 0;
//     }


//reverse
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int rev = 0;
//     //int fact = 1;
//     int temp = n;
//     for(; temp>=0; temp = temp/10){
//         rev = rev*10+(temp%10);
//     }
// cout<<rev<<" ";
// }


//find targate
// #include<iostream>
// using namespace std;
// int main() {
//     int arr[]={1,2,3,4,5};
//     int n=5;
//     int targate=3;
//     bool flag = 0;
//     for( int i=0;i<n; i++ ){
//         if(arr[i]==targate){
//             flag = 1;
//             break;
//         }
//     }
//     if( flag ==1){
//         cout<<"found target"<<" ";
//     }
//     else{
//         cout<<"targate is not found"<<endl;
//     }
//     return 0;

// }

//rotate arr
// 
//how to pass functipon in 2d array
// #include<iostream>
// using namespace std;
// void printrow(int arr[][3],int row,int col){
//     for(int i=0;i<row; i++){
//         for(int j=0; j<col; j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<"print col"<<endl;
    
// }

// //print column wise
// void printcol(int arr[][3], int row,int col){
//     for(int i=0; i<col; i++){
//         for(int j=0; j<row; j++){
//             cout<<arr[j][i]<<" ";
//         }
//         cout<<endl;
       
//     }
     
// }
// int main(){
//     int arr[3][3] = {
//         {1,2,3},
//         {4,5,6},
//         {7,8,9}
//     };
//     int row=3;
//     int col =3;
//     printrow(arr,row,col);
//     printcol(arr,row,col);
//     return 0;
// }

// how to take input
// #include<iostream>
// using namespace std;
// void printfunc(int arr[][4],int row,int col ){
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
//     int col = 4;
//     for(int i=0; i<row; i++){
//         for(int j=0; j<col; j++){
//             cout<<"enter thevalue of i"<<i<<"enter the value of j"<<j;
//             cin>>arr[i][j];
//         }
//     }
//     return 0;
// }
//find target
// #include<iostream>
// using namespace std;
// bool printfun(int arr[][4],int row , int col,int target){
//     for(int i=0; i<row; i++){
//         for(int j=0; j<col; j++){
//             if(arr[i][j]==target){
//                 return true;
//             }
            
//         }
//     }
//     return false;
// }
// int main(){
//     int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
//     int row=3;
//     int col = 4;
//    int target=15;
    
//     cout<<"target is found or not"<<" "<<printfun(arr,row,col,target);
//     return 0;

//     }

    
// factorial
// #include<iostream>
// using namespace std;
//     void printfact(int n){
//         long long fact =1;
// for(int i=1; i<n; i++){
// fact = fact*i;
//     }
//     cout<<fact;
//     }
// int main(){
//     int n;
//     cin>>n;
//      printfact(n);
// }

//Rivision -----------------------------------------------------------------------------------







