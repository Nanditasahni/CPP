// #include<iostream>
// using namespace std;
// int main() {
//     int a=2;
//     int b=3;
//     cout<<(a&b)<<endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main() {
//     int a=2;
//     int b=3;
//     cout<<(a|b)<<endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main() {
//     int a=5;
//     int b=10;
//     cout<<(a|b)<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main() {
//     int a=5;
//     int b=10;
//     cout<<(a|b)<<endl;
//     int c=1;
//     cout<<~c<<endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main() {
//     int a=5;
//     int b=5;
//     cout<<(a^b)<<endl;
    
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main() {
//     int a=5;
//     int b=10;
//     cout<<(a^b)<<endl;
    
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main() {
//     int a = 7;
//     cout<<(a<<1)<<endl;
//     cout<<(a<<2)<<endl;
//     cout<<(a<<3)<<endl;
//     cout<<(a<<4)<<endl;
//     return 0;
// }



//practice....................
//&
// #include<iostream>
// using namespace std;
// int main() {
//     int a=4;
//     int b=5;
//     cout<<(a&b)<<endl;
//     return 0;

// }

//or(|)
// #include<iostream>
// using namespace std;
// int main() {
//     int a=4;
//     int b=5;
//     cout<<(a|b)<<endl;
//     return 0;

// }

//not(~)
// #include<iostream>
// using namespace std;
// int main() {
//     int a=4;
//     cout<<(~a)<<endl;

//     return 0;

// }

// #include<iostream>
// using namespace std;
// int main() {
//     int a=6;
//     cout<<(~a)<<endl;

//     return 0;

// }


//XOR(^)
// #include<iostream>
// using namespace std;
// int main() {
//     int a=4;
//     int b=6;
//     cout<<(a^b)<<endl;

//     return 0;

// }

//LEFT SHIT
// #include<iostream>
// using namespace std;
// int main() {
//     int a=2;
//     cout<<(a<<1)<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main() {
//     int a=7;
//     cout<<(a<<1)<<endl;
//      cout<<(a<<2)<<endl; 
//      cout<<(a<<4)<<endl;



//     return 0;

// }


//RIGHT SHIFT..........
// #include<iostream>
// using namespace std;
// int main(){
//     int a= 6;
//     cout<<(a>>1)<<endl;
//     return 0;
// }

//PRE/POST...............................................................................
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a=6;
//     cout<<++a<<endl;
//     int b=8;

//     cout<<b++<<endl;
//     cout<<b<<endl;
//     return 0;
// }


//BREAK AND CONTINEUW......................................................................
// #include<iostream>
// using namespace std;
// int main() {
//     for(int i=0; i<=10; i++){
    
    
//     if(i==2)
    
//     break;
    
//         cout<< i <<endl;
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main() {
//     for(int i=0; i<=10; i++){
    
    
//     if(i==6)
    
//     break;
    
//         cout<< i <<endl;
//     }
//     return 0;
// }

///contineu
// #include<iostream>
// using namespace std;
// int main() {
//     for(int i = 0; i<=10; i++)
//     {
//         if(i==4)
//         continue;
//         cout<<i<<endl;
//     }
//     return 0;
// }

//home work
// #include<iostream>
// using namespace std;
// int main() {
//     int a= 10;
//     cout<<(++a)*10<<endl;
//     cout<<(a++)*10<<endl;
//     cout<<a;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main() {
//     int a= 10;
//     cout<<(++a)*5<<endl;
//     cout<<(a++)*5<<endl;
//     cout<<a;
//     return 0;
// }

#include<iostream>
using namespace std;
int main() {
    int a= 10;
    cout<<(++a)*(++a)<<endl;
    cout<<(++a)*(a++)<<endl;
    cout<<(a++)*(a++)<<endl;
    cout<<a;
    return 0;
}