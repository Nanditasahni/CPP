#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>v){
    int size = v.size();
    for(int i=0; i<size; i++){
        cout<<"print vector"<<" "<<v[i]<<" "<<endl;
    }

}
int main() {
     vector<int>v;
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(4);
    // v.pop_back(); //use to remove element & pop alwayse remove the elemenet from end
    // v.pop_back();
     //print(v);
    // cout<<"clear the vector"<<endl;
    // v.clear();// use to lear the vector
    // print(v);
    // v.push_back(60);
    // print(v);
    // cout<<"front element"<<v[0]<<endl; //find front elemenet
    // cout<<"end elemenet"<<v[v.size()-1]<<endl;//find end elemenet
//HOW TO TAKE INPUT FROM USER
int n;
cin>>n;
for(int i=0; i<n; i++){
    int d;
    cin>>d;
    v.push_back(d);
}
// for(int i=0; i<10; i++) //if we add one or more element than we use loop
// v.push_back(40);
print(v);
}





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
//function to find max of three number
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

//find factorial 
// #include<iostream>
// using namespace std;
// int main(){
 
//     long long fact = 1;
//     int n;
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         fact = fact*i;
//     }
//     cout<<"factorial of"<<n<<"="<<fact<<endl;
//     return 0;

// cout<<"hi"<<endl;
// }
