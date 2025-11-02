// #include<iostream>
// using namespace std;
// int main()  {
//     for(int i=0; i<=10; i=i+1)
//     {
//         cout<<"babber"<<endl;
//     }
// }

//nested loop
// #include<iostream>
// using namespace std;
// int main() {
//     for(int i=0; i<=4; i=i+1)
//     {
//         cout<<"romio"<<i<<endl;
//     }
//     for(int j=0; j<4; j=j+1)
//     {
//         cout<<"heroin"<<j<<endl;
//     }
// }

//######nested loop (loop ke ander loop)
// #include<iostream>
// using namespace std;
// int main() {
//     for(int i=0; i<=4; i=i+1)
//     {
//         cout<<"romio"<<i<<endl;
    
//     for(int j=0; j<4; j=j+1)
//     {
//         cout<<"heroin"<<j<<endl;
//     }
// }



//print name 11time
// #include<iostream>
//  using namespace std;
//  int main()  {
//    for(int i=1; i<12; i=i+1)
//    {
//          cout<<"Nandita"<<i<<endl;
//      }
// }


//print 19 ka table
// #include<iostream>
// using namespace std;
// int main() {
//     for(int i=1; i<=10; i = i+1)
//     {
//         cout<<19*i<<endl;
//     }
// }


//print even number between 1-100
// 

//pattern print squar
// #include<iostream>
// using namespace std;
// int main() {
//     //outer loop (row)
//     for(int i=0;i<3;i=i+1){
//         //inner loop(colum)
//         for(int j=0;j<3;j=j+1){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
   
    
// }
//rectangle
// #include<iostream>
// using namespace std;
// int main() {
//     //outer loop (row)
//     for(int i=0;i<3;i=i+1){
//         //inner loop(colum)
//         for(int j=0;j<10;j=j+1){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
   
    
// }
// #include<iostream>
// using namespace std;
// int main() {
//     for(int i=0; i<=500; i = i+1)
//     {
//         cout<<"kl rahul"<<endl<<i<<endl;

//     }
// }


// 

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i= 0; i<5; i= i+1)
//     {
//         for(int j=0; j<5; j=j+1)
//         if(i == 0||i == 4){
//             cout<<"*";

//         }
//         else{
//             if(j ==0||j ==4){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }

//         }
//         cout<<endl;
       
//     }
     
    
// }
//print hollow rectangle
#include<iostream>
using namespace std;
int main() {
    for(int i=0; i<5; i=i+1){
        for(int j=0; j<=10; j = j+1)
        if(i==0||i==4){
            cout<<"*";
        }
        else{
            if(j==0||j==10){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    }


