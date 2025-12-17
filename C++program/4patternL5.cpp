// #include<iostream>
// using namespace std;
// int main() {
//     for(int i=0; i<5; i=i+1){
//         for(int j=0; j<=10; j = j+1)
//         if(i==0||i==4){
//             cout<<"*";
//         }
//         else{
//             if(j==0||j==10){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }



//pyramid
// #include<iostream>
// using namespace std;
// int main() {
//     for(int row=0; row<5;row=row+1){
//         for(int col=0;col<row+1;col=col+1){
//             cout<<"*";
//         }
//         cout<<endl;

//     }
    
// }

//number taking by input
// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cin >> n;
//     for(int row=0; row<n;row=row+1){
//         for(int col=0;col<row+1;col=col+1){
//             cout<<"*";
//         }
//         cout<<endl;

//     }
    
// }


//printin inverse pyramid
// #include<iostream>
// using namespace std;
// int main() {
//     for(int row=0; row<5; row = row+1){
//         for(int col=0; col<5-row; col=col+1){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }



//print invert by TAKIN USER INPUT
// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cin>>n;
//     for(int i = 0; i<n; i = i+1)
//     {
//         for(int j=0; j<n-i; j=j+1)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }



//print pyramid all are numbers
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i =0; i<6; i=i+1){
//         for(int j=0; j<i+1; j = j+1){
//             cout<<j+1<<" ";
//         }
//         cout<<endl;
//     }
// }



//invert
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i =0; i<6; i=i+1){
//         for(int j=0; j<6-i; j = j+1){
//             cout<<j+1<<" ";
//         }
//         cout<<endl;
//     }
// }


//full pyram______________________________________________________________
// #include<iostream>
// using namespace std;
// int main() {
//     for(int i = 0; i<6;i=i+1){
//         //for space
//         for(int j=0; j<6-i-1; j=j+1)
//     {
//         cout<<" ";
//     }
//     //star
//     for(int j=0; j<i+1; j=j+1){
//         cout<<"* ";
//     }
//      cout<<endl;
//     }
// }



//printfull pyramid by using user input--------

// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cin>>n;
//     for(int i = 0; i<n;i=i+1){
//         //for space
//         for(int j=0; j<n-i-1; j=j+1)
//     {
//         cout<<" ";
//     }
//     //star
//     for(int j=0; j<i+1; j=j+1){
//         cout<<"* ";
//     }
//      cout<<endl;
//     }
// }1





//invert................................
// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cin>>n;
//     for(int i = 0; i<n;i=i+1){
//         //for space
//         for(int j=0; j<i; j=j+1)
//     {
//         cout<<" ";
//     }
//     //star
//     for(int j=0; j<n-i; j=j+1){
//         cout<<"* 6";
//     }
//      cout<<endl;
//     }
// }



//print daimond shape
// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cin>>n;
//     for(int i = 0; i<n;i=i+1){
//         //for space
//         for(int j=0; j<n-i-1; j=j+1)
//     {
//         cout<<" ";
//     }
//     //star
//     for(int j=0; j<i+1; j=j+1){
//         cout<<"* ";
//     }
//      cout<<endl;

// }
//     for(int i = 0; i<n;i=i+1){
//         //for space
//         for(int j=0; j<i; j=j+1)
//     {
//         cout<<" ";
//     }
//     //star
//     for(int j=0; j<n-i; j=j+1){
//         cout<<"* ";
//     }
//      cout<<endl;
//     }
// }



//isme 8 ka 4 wala bhag print karega
// #include<iostream>
// using namespace std;
// int main() {
//     int num;
//     cin>>num;
//     int n = num/2;
//     for(int i = 0; i<n;i=i+1){
//         //for space
//         for(int j=0; j<n-i-1; j=j+1)
//     {
//         cout<<" ";
//     }
//     //star
//     for(int j=0; j<i+1; j=j+1){
//         cout<<"* ";
//     }
//      cout<<endl;

// }
//     for(int i = 0; i<n;i=i+1){
//         //for space
//         for(int j=0; j<i; j=j+1)
//     {
//         cout<<" ";
//     }
//     //star
//     for(int j=0; j<n-i; j=j+1){
//         cout<<"* ";
//     }
//      cout<<endl;
//     }
// }





//printing hollow pyramid
// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cin>>n;
//     //outer loop
//     for(int i=0; i<n; i=i+1){
//         //inner loop
//         //space
//         for(int j=0; j<n-i-1; j=j+1)
//         {
//             cout<<" ";

//         }
//         //star
//         for(int j=0; j<i+1; j=j+1){
//             if(j==0||j==i+1-1){
//                 cout<<"* ";
//             }
//             else{
//                 cout<<" ";
//             }
           
            
//         }
//          cout<<endl;
//     }
// }

//invertor
#include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cin>>n;
//     //outer loop
//     for(int i=0; i<n; i=i+1){
//         //inner loop
//         //space
//         for(int j=0; j<i; j=j+1)
//         {

//             cout<<" ";

//         }
//         //star
//         for(int j=0; j<n-i; j=j+1){
//             if(j==0||j==i-1){
//                 cout<<"* ";
//             }
//             else{
//                 cout<<" ";
//             }
           
            
//         }
//          cout<<endl;
//     }
// }

  

//print pyramid with space and either side stars
// #include<iostream>
// using namespace std;
// int main() {
//     int num=8;
//     int n=num
//     for(int i=0; i<n; i=i+1)
//     {//inverted pyramid 1
//         for(int j= 0; j<n-i; j=j+1){
//             cout <<"*";
//         }
//         //full pyramid
//         for(int j= 0;j<2*i+1; j=j+1){
//             cout <<" ";
//         }
//         //inverted pyramid 2
//         for(int j=0; j<n-i; j=j+1){
//             cout << "*";
//         }
//         cout <<endl;
//     }

// }