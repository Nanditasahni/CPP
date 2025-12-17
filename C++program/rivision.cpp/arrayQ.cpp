//print array
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={1,2,3,4,5};
//     for(int i=0; i<5; i++){
//         cout<<arr[i]<<" ";
//     }
// }
//taking input in array
// #include<iostream>
// using namespace std;
// //int main(){
// int arr[5];
// int n=5; 

// for(int i=0; i<n; i++){
//     cout<<"enter the first element:"<<i<<endl;

//     cin>>arr[i];
// }
// for(int i=0; i<n; i++){
//     cout<<arr[i]<<" ";
// }

//double the arr
// int arr[5]={1,2,3,4,5};
// int n=5;
// cout<<"before doubble the arr"<<endl;
// for(int i=0; i<n; i++){
//     cout<<arr[i]<<" ";
   
// }
// cout<<endl;
// cout<<"after doble the array"<<endl;
// for(int i=0; i<n; i++){
//     int Darr = 2*arr[i];
//     cout<<Darr<<" ";
// }
// int arr[6]={1,2,3,4,5,6};
// int n = 6;
// for(int i=0; i<n; i++){
//     cout<<arr[i]<<" ";
// }
// int sum = 0; 

// for(int i=0; i<n; i++){
    
//     sum = sum+arr[i];
//     //cout<<sum;
// }
// cout<<endl;
// cout<<"after summ array"<<endl;
// cout<<sum<<endl;

//taking input to double the element
// int arr[5];
// int n=5;
// for(int i= 0; i<n; i++){
//     cin>>arr[i];
//     cout<<arr[i]<<" ";
// }
// cout<<endl;
// cout<<"after double array"<<endl;
// for(int i=0; i<n; i++){
//     int doubarr = 2*arr[i];
//     cout<<doubarr<<" ";

//}
// 
//print array // using functon
// void printarr(int arr[],int n){
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int main(){
//     int arr[5] = {1,2,3,4,5};
//     int n=5;
//     printarr(arr,n);
//}



////return 0;
//}
//count #
// #include<iostream>
// using namespace std;
// void countzeroandone(int arr[], int n){
//     int countzero=0;
//     int countone=0;
    
//     for(int i=0; i<n; i++){
//         if(arr[i]==0){
//             countzero++;
//         }
//         if(arr[i]==1){
//             countone++;
//         }
//     }
//     cout<<"Countzero"<<countzero<<endl;
//     cout<<"countone"<<countone<<endl;
// }
// int main(){
//     int arr[]= { 1,1,1,1,1,1,0,0,0,0,1,0};
//     int n =12;
//     countzeroandone(arr,n);
//}
// reverse the arra
// void reverse(int arr[], int n){
//     int left =0;
//     int right =n-1;
//     while(left<=right){
// swap(arr[left],arr[right]);
// left++;
// right--;
//     }
//     for(int i=0; i<n; i++){
//     cout<<arr[i]<<" ";
//     }
// }
// int main(){
//     int arr[]={ 10,20,30,40,50};
//     int n=5;
//     reverse(arr,n);

// }
//............................................................................................
//question 1 print array using function
// #include<iostream>
// using namespace std;
// void printarr(int arr[],int n){
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int main(){
//     int arr[5]={1,2,3,4,5};
//     int n=5;
//     printarr(arr,n);
// }


//Question 2 sum of arra
// #include<iostream>
// using namespace std;
// void sumarr(int arr[],int n){
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     int sum = 0;
//     for(int i=0; i<n; i++){
//         sum = sum+arr[i];
        
//     }
//     cout<<endl;
//     cout<<"after sum"<<endl;
//     cout<<sum<<endl;
// }
// int main(){
//     int arr[]= {1,2,3,4,5};
//     int n=5;
// sumarr(arr,n);
// }

//question 3 count even element and sum
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[6] = { 2,3,4,6,8,10};
//     int n=6;
//     int counteven = 0;
//     int sum = 0;
//     for(int i=0; i<n; i++){
//         if(arr[i]%2==0){
//             counteven++;
//              sum = sum +arr[i];

            
//         }
//     } 
    
//     cout<<"print total even"<<counteven<<endl;
// cout<<"print sum of even "<<sum<<endl; 


//}


//question no 4 double the arra
// #include<iostream>
// using namespace std;
// void doublearr(int arr[],int n){
//     cout<<" arra......."<<endl;
//     for (int i=0; i<n; i++){

//         cout<<arr[i]<<" ";
//         int doublearr= 2*arr[i];
//         cout<<"doubbly array"<<doublearr<<endl;
//     }
    
    
// }
// int main(){
//     int arr[]={ 1,2,3,4,5};
//     int n=5;
//     doublearr(arr,n);
// }


//print array which is divisible by 5
// #include<iostream>
// using namespace std;
// void arrdivbyfive(int arr[],int n){
//      cout<<"array which is divisible by 5:-"<<endl;
//     for(int i=0; i<n; i++){
//     if(arr[i]%5==0){
       
//         cout<<arr[i]<<" ";
//     }
//     }
// }
// int main(){
//     int arr[]={ 5,10,34,15,11,20};
//     int n=6;
//     arrdivbyfive(arr,n);
// } 



//question no.6 revers the array
// #include<iostream>
// using namespace std;
// void reversarr(int arr[],int n){
//     int left = 0;
//     int right = n-1;
//     cout<<"before the revers"<<endl;
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     while(left<=right){
//         swap(arr[left],arr[right]);
//         left++;
//         right--;
//     }
//     cout<<endl;
//     cout<<"after the revese"<<endl;
//     for(int i=0; i<n; i++){
//     cout<<arr[i]<<" ";
//     }
//     }
//     int main(){
//         int arr[]={10,20,30,40,50};
//         int n=5;
//         reversarr(arr,n);

//     }


//question no. 7 extream revese the index
// #include<iostream>
// using namespace std;
// void extreamarr(int arr[],int n){
//     int left =0;
//     int right = n-1;
//     while(left<=right){
//         cout<<left<<" ";
//         cout<<right<<" ";
//         left++;
//         right--;
//     }
//     for(int i=0; i<n; i++){
//     cout<<arr[i]<<" ";
//     }
// }
// int main(){
//     int arr[]={ 10,20,30,40,50,60};
//     int n=6;
//     extreamarr(arr,n);
// }


// ques 8:--count zero and one
// #include<iostream>
// using namespace std;
// void countzeroandone(int arr[] , int n){
//     int countzero =0;
//     int countone = 1;
//     for(int i=0; i<n; i++){
//         if(arr[i] == 0){
//             countzero++;
//         }
//         if(arr[i] == 1){
//             countone++;

//         }
//     }
//     cout<<"countzero"<<countzero<<endl;
//     cout<<"countone"<<countone<<endl;
// }
// int main(){
//     int arr[] = { 1,1,1,1,0,0,1,0,0,0,1 };
//     int n=11;
//     countzeroandone(arr,n);

// }


// question 9 :--print minimum number
// #include<iostream>
// #include<limits.h>
// using namespace std;
// int printminimum(int arr[],int n){
//     int minNum = INT_MAX;
//     for(int i=0; i<n; i++){
//         if(arr[i]<minNum){
//             minNum = arr[i];
//         }
//     }
//     return minNum;
// }
// int main(){
//     int arr[] = {10,11,22,44,55};
//     int n= 5;
//     int minimumvalue = printminimum( arr, n);
//     cout<<minimumvalue;
// }


// /
// #include<iostream>
// #include<limits.h>
// using namespace std;
// int printminimum(int arr[],int n){
//     int minNum = INT_MIN;
//     for(int i=0; i<n; i++){
//         if(arr[i]>minNum){
//             minNum = arr[i];
//         }
//     }
//     return minNum;
// }
// int main(){
//     int arr[] = {10,11,22,44,55};
//     int n= 5;
//     int minimumvalue = printminimum( arr, n);
//     cout<<minimumvalue;
// }

//print array which is multiple by 2
// #include<iostream>
// using namespace std;
// void multiplebytwo(int arr[], int n){
//     for(int i=0; i<n; i++) {
//         if(arr[i]%2==0){
//             cout<<arr[i]<<" ";
//         }
//     }
// }
// int main(){
//     int arr[]={ 11,10,22,33,40};
//     int n=5;
//     multiplebytwo(arr,n);
// } 


// q10print aside negative and positive
// #include<iostream>
// using namespace std;
// void asidenegandpos(int arr[] , int n){
//     int left =0;
//     int right = n-1;
//     while(left<right){
//         if(arr[left]<0){
//             left++;
            
//         }
//          else if(arr[right]>0){
//            right--;
//         }
//         else{
//             swap(arr[left],arr[right]);
//                 left++;
//                 right--;
            
//         }
//     }
//     for(int i=0; i<n; i++){
//     cout<< arr[i]<<" ";
//     }
// }
// int main(){
//     int arr[] = {-2,-5,2,3,4,-3};
//     int n = 6;
//     asidenegandpos(arr,n);

// }


// #include<iostream>
// using namespace std;
// void asidearr(int arr[],int n){
// int left = 0;
// int right = n-1;
// while(left<=right){
//     if(arr[left]<0){
//        left++;
//     }
//      if(arr[right]>0){
//         right--;
//     }
//     else {
//    swap(arr[left],arr[right]);
//    left++;
//    right--;
//     }
// }
// }
// int main(){
//     int arr[] ={-1,2,3,-4,-5};
//     int n=5;
//     asidearr(arr , n);
//     for(int i=0; i<n; i++){
//     cout<<arr[i]<<" ";
//     }
// }


// q11second largest element
// #include<iostream>
// #include<limits.h>
// using namespace std;
// void seclargest(int arr[] , int n){
//     int large = INT_MIN;
//     int secondlarge = INT_MIN;
//     for(int i=0; i<n; i++){
//         if(arr[i]>large){
//            secondlarge = large; //store old large
//            large = arr[i];//update 
//         }
//        else if( arr[i]>secondlarge&&arr[i]!=large){
//         secondlarge = arr[i];
//        }
       
//     }
//     cout<<secondlarge<<endl;
// }
// int main(){
//     int arr[]={ 3,2,5,6,8};
//     int n=5;
//     seclargest(arr,n);
//     // for(int i=0; i<n; i++){
//     //     cout<<arr[i]<<" ";
//     // }
// }

//12 left shift by one......................
// #include<iostream>
// using namespace std;
// int main(){
//     int a=7;
//     int val = (a<<1);

//     cout<<"left shift by 1 :- "<<val<<endl;
//     cout<<(a<<1)<<endl;
//     //shift by2
//     int ans = (a<<2);
//     cout<<"left shift by 2 :- "<<ans<<endl;

// // #include<iostream>
// // using namespace std;
// // int main(){
// //int a= 8;
// //right shift by 1
// int ans1 = (a>>1);
// cout<<"right shift one  :- "<<ans1<<endl;
// int ans2 = (a>>2);
// cout<<"right shift by two  :- "<<ans2<<endl;
// }

//target
// #include<iostream>
// using namespace std;
// int main(){

// int arr [] = { 1,2,3,4,5};
// int n=5;
// int target = 5;
// bool found = false;
// for(int i=0; i <n; i++){
//     if(arr[i]==target){
//         cout<<"found target :->"<<arr[i]<<endl;
//         found = true;
//         break;
//     }
// }

// if(!found){

//         cout<<"target is not found"<<endl;

    
// }

// return 0;
// }



//2D ARRAY-------------------------------------------
// #include<iostream>
// using namespace std;
// int main(){
// int arr[][3] = {

//     {1,2,3},
//     {4,5,6},
//     {7,8,9}
// };
// int n=3;
// int m=3;
//  for(int i=0; i<n; i++){
//     for(int j=0; j<m; j++){
//         cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
//  }
// }

//print using function
// #include<iostream>
// using namespace std;
// void twodarr(int arr[][3],int m,int n){
// for(int i=0; i<m; i++){
//     for(int j=0; j<n; j++){
//         cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
// }
// }
// int main(){
//     int arr[][3] = {{1,2,3},{4,5,6},{6,7,8}};
//     int m=3;
//     int n=3;
//     twodarr(arr,m,n);
// }
//how to tke input

// #include<iostream>
// using namespace std;
// int main(){
// int arr[3][4];
// int n=3;
// int m=4;
// for(int i=0; i<n; i++){
//     for(int j=0; j<m; j++){
//        cin>>arr[i][j];
//     }
// }
// for(int i=0; i<n; i++){
//     for(int j=0;j<m; j++){
//         cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
// }

// }






//QUESTION 1

 //taking input in by function
//  #include<iostream>
//  using namespace std;
//  void printarr(int arr[3][4] , int n, int m){
//     for(int i=0; i<n; i++){
// for( int j=0; j<m; j++){
//     cout<<arr[i][j]<<" ";
// }
// cout<<endl;
//     }
    
//  }
//  int main(){
//     int arr[3][4];
//     int n=3;
//     int m=4;
//     //printarr(arr,n,m);// when we pass arr in hear than we get garbege vale
//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             cin>>arr[i][j];
//         }
//     }
//     printarr(arr,n,m);
//  }


//QUESTION 2
//print row wise and colum wise
// #include<iostream>
// using namespace std;
// void printrowandcol(int arr[3][4] , int n, int m){
 
//  //print rowwise
//  cout<<"row wiae print"<<endl;

//  for(int i=0; i<n; i++){
//     for(int j=0; j<m; j++){
//         cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
//  }

//  //print columwise
//  cout<<"col wosssi print"<<endl;
//  for(int j=0; j<m; j++){
//     for(int i=0; i<n; i++){
//         cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
//  }
// }
// int main(){
//     int arr[3][4]={{1,2,3,5},{4,5,6,9},{6,7,8,4}};
//     int n=3;
//     int m=4;
//     printrowandcol(arr,n,m);
// }



//QUESTION 3---------------
//print sum of row
// #include<iostream>
// using namespace std;
// void sumofdaigonal(int arr[3][4] , int n, int m){
//     for(int i=0; i<n; i++){
//         int sum=0;
//         for(int j=0; j<m; j++){
//             sum = sum+arr[i][j];
//            // cout<<arr[i][j]<<" "<< "sum of row"<<endl;
            
//         }
//         //cout<<endl;
//     cout<<sum<<endl;
//     }
    
// }
// int main(){
//     int arr[3][4] = {{1,2,3,5},{4,5,6,9},{6,7,8,4}};
//     int n= 3; 
//     int m=4;
//     sumofdaigonal(arr,n,m);

// }



//QUESTION NO 4  sum of col
// #include<iostream>
// using namespace std;
// void sumofdaigonal(int arr[3][4] , int n, int m){
//     for(int j=0; j<m; j++){
//         int sum=0;
//         for(int i=0; i<n; i++){
//             sum = sum+arr[i][j];
//            // cout<<arr[i][j]<<" "<< "sum of row"<<endl;
            
//         }
//         //cout<<endl;
//     cout<<sum<<endl;
//     }
    
// }
// int main(){
//     int arr[3][4] = {{1,2,3,5},{4,5,6,9},{6,7,8,4}};
//     int n= 3; 
//     int m=4;
//     sumofdaigonal(arr,n,m);

// }
 //find target 
//  #include<iostream>
//  using namespace std;
//  int main(){
//     int arr[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
//     int n=3;
//     int m=4;
//     int target =  4;
//     bool found = false;
//     for(int i=0; i<n; i++){
//       for(int j=0; j<m; j++){
//          if(arr[i][j]==target){
//             found = true;
//             break;
//          }
//       }
      
//     }
//     cout<<"target is found : "<<target<<endl;
    

//  }


//in 1d array
// #include<iostream>
// using namespace std;
// int main(){
//    int arr[]={1,2,3,4,5};
//    int n=5;
//    int target = 3;
//    bool found = false;
//    for(int i=0; i<n; i++){
//       if(arr[i]==target){
//          found = true;
//          break;
//       }
//    }
//    cout<<"target is found "<<target <<endl;
// }



//sum of diagonal
// #include<iostream>
// using namespace std;
// void sumofdaigonal(int arr[3][3], int n, int m){
//    for(int i=0; i<n; i++){
//       for(int j=0; j<m; j++){
//          cout<<arr[i][j]<<" ";
//       }
//       cout<<endl;
//    }
   
//    int sum = 0;
//    for(int i=0; i<n; i++){
//       for(int j=0; j<m; j++){
//          // if(i==i||i+j==2)// is condition se dono daigonalprint hoga

//          if(i==j)//is conditon se sirf ek hi daigonal print hoga
//          {
//             sum = sum + arr[i][j];
//          }

//       }
//    }
//    cout<<sum<<endl;
// }
// int main(){
//    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//    int n=3;
//    int m=3;
//    sumofdaigonal(arr,n,m);
// }



//max of  entire Matrix
// #include<iostream>
// #include<limits.h>
// using namespace std;
// int maxarr(int arr[3][3], int n,int m){
// int maxans = INT_MIN;
// for(int i=0; i<n; i++){
//    for(int j=0; j<m; j++){
//       if(arr[i][j]>maxans){
//          // 
//          maxans = arr[i][j];
         
//       }
//    }
// }
// return maxans;



// }
// int main(){
//    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//    int n=3;
//    int m=3;
//     int maxvalue = maxarr(arr,n,m);
//     cout<<maxvalue<<endl;
// }





//find max of each row ----------------------------------------------
// #include<iostream>
// #include<limits.h>
// using namespace std;
// void maxarr(int arr[][3], int n, int m){
// //int maxans = INT_MIN;
// for(int i=0; i<n; i++){
//    int maxans = INT_MIN;
//    for(int j=0; j<m; j++){
//       if(arr[i][j]>maxans){
//          // 
//          maxans = arr[i][j];
         
//       }
//    }
//    cout<<"row "<< maxans<<endl;

// }
// //return maxans;



// }
// int main(){
//    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//    int n=3;
//    int m=3;
//     maxarr(arr,n,m);
//     cout<<maxarr<<endl;
// }