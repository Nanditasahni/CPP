//print 10 time o my friend ganesha
// #include<iostream>
// using namespace std;
// void printLine(){
//     for(int i=0; i<10; i++){
//         cout<<"o my friend ganesha"<<endl;
//     }
// }
// int main() 
// {
//     //call function
//     printLine();
//     return 0;
// }

//.ager hum pahale function ko call karte hai fir define karte hai toh ye UNDECLARD(not declared) ANSWER AAGE GA   
//LET SEE
// #include<iostream>
// using namespace std;


// int main() 
// {
//     //call function
//     printLine();
//     return 0;
// }
// void printLine(){
//     for(int i=0; i<10; i++){
//         cout<<"o my friend ganesha"<<endl;
//     }
// }




//Lekin ager function declared kar de toh let see  ye hre code ko print kar raha hai
// #include<iostream>
// using namespace std;
// //function is declared
// void printLine();


// int main() 
// {
//     //call function
//     printLine();
//     return 0;
// }
// void printLine(){
//     for(int i=0; i<10; i++){
//         cout<<"o my friend ganesha"<<endl;
//     }
// }

//QUETION..............
//write a function to print the sum of 3 number
//isme hame print karne ko kaha gya hai toh VOID ka use karenge


//tarika 1:

// #include<iostream>
// using namespace std;
// void printSum(int a,int b, int c){
//     int answer = a+b+c;
//     cout<<"print sum:"<<answer<<endl;
// }
// int main()
// {
//     printSum(2,3,4);
//     return 0;
//}


//tarika2:

// #include<iostream>
// using namespace std;
// void printSum( int a,int b,int c);

// int main()
// {
//     //call function
//      printSum(3,4,5);
//     return 0;

// }
// void printSum( int a,int b,int c){
//     int answer = a+b+c;
//     cout<<"sum of:"<<answer<<endl;
// }


//practice
// #include<iostream>
// using namespace std;
// void printMul(int a ,int b, int c)
// {
//     int ans= a*b*c;
//     cout<<"mul:"<<ans<<endl;

// }
// int main() {
//     printMul(2,4,6);
//     return 0;
// }



//write a function to print the multiple of three no.
// #include<iostream>
// using namespace std;
// //declared the function
// void printMul(int a ,int b, int c);


// int main() {
//     printMul(2,4,6);
//     return 0;
// }
// void printMul(int a ,int b, int c)
// {
//     int ans= a*b*c;
//     cout<<"mul:"<<ans<<endl;

//}



//find max of three no...............................chalo print hi kar lete hai
// let's assume all three no. are diffrent if any number are same the we use equal to ka sign(=)

// #include<iostream>
// using namespace std;

//     void printMaximum(int num1,int num2, int num3){
//     if(num1>num2 && num1>num3){
//         cout<<"maximum no:"<<num1<<endl;
//     }
//     else if(num2>num1 && num2>num3){
//         cout<<"maximum no:"<<num2<<endl;
//     }
//     else{
//         cout<<"maximum no:"<<num3<<endl;
//     }
    
// }
// int main() {
//     printMaximum(4,80,10);
//     return 0;
// }

//this is the old mathod



//now using correct mathod:-----------------------------
//find max of thre no
// #include<iostream>
// using namespace std;
// void printMaximum(int num1, int num2, int num3){
//     int ans = max(num1,num2);//isme sirf do parameter use hota haiisiliye third wale ke liye ek aur interger lenea padega
//     int finalans = max(ans,num3);
//     cout<<"final answer is:"<<finalans<<endl;
// }
// int main() {
//     printMaximum(10,20,30);
//     return 0;
// }



//ab hame return karana hai :-------
// #include<iostream>
// using namespace std;
// int printMax(int num1,int num2, int num3){
//     int ans= max(num1,num2);
//     int finalans = max(ans,num3);
//     return finalans;
// }
// int main(){
//      int finalmax = printMax(10,20, 30);
//      cout<<"maximum no is:"<<finalmax<<endl;
//      return 0;

// }



//question no.2:------function to print counting from 1 to N
//print karana hai toh void ka use karenge
//method1:>>>>>>
// #include<iostream>
// using namespace std;
// void printCounting(int n){
//     for(int i=1; i<=n; i++){
//         cout<<i<<endl;
//     }
// }
// int main() {
//     printCounting(10);
//     return 0;
// }


//function to return counting from 1toN
//method2()
// #include<iostream>
// using namespace std;
// int printCounting(int n){
//     for(int i=1; i<n; i++){
//         cout<<i<<endl;

//     }
// }
// int main(){
//     int finalcounting = printCounting(10);
//     cout<<"counting from 1 to 10"<<finalcounting<<endl;
//     return 0;
// }

//Quetion3:--------check even or odd 
// #include<iostream>
// using namespace std;
// void checkEvenOdd(int n){
//     if(n%2==0){
//         cout<<"number is even:"<<endl;
//     }
//     else{
//         cout<<"number is odd:"<<endl;
//     }
// }
// int main(){
//     checkEvenOdd(6);
//     return 0;

// }


// check even or odd using return funcion
// #include<iostream>
// using namespace std;
// string printEvenOdd(int n)
// {
//    if(n%2==0)
//    return"even";
//    else
//    return"odd";

//    }
//    int main() {
//     string checkEvenOdd =  printEvenOdd(8);
//     {
//         cout<<checkEvenOdd<<endl;
//     }
//     return 0;
//    }
    

//Check prime number or not
// #include<iostream>
// using namespace std;
// bool checkPrime(int n)
// {
//     for(int i=2; i<n; i++){
//         if(n%i==0){
//             return false;
//         }
//     }
//     return true;
// }
// int main(){
//     bool prime =  checkPrime(5);
//     if(prime){
//         cout<<"its a prime number"<<endl;
//     }
//     else{
//         cout<<"its nt a prime number"<<endl;
//     }
//     return 0;

// }





//HOME WOREK222---------------------------------------------------------------------------

//Question;-1
//function to find the area of circle
// #include<iostream>
// using namespace std;
// void printArea(int rad){
//     int areaCircle = 3.14*rad*rad;
//     {
//         cout<<areaCircle<<endl;
//     }
// }
// int main() {
//     printArea(2);
//     return 0;

// }
 //function find area of circle using return
//  #include<iostream>
//  using namespace std;
//  int PrintArea(int rad)
//  {
//     int AreaCircle = 3.14*rad*rad;

// return AreaCircle;
//  }
//  int main() {
//     int area = PrintArea(2);
//     {
//         cout<<"area of circle is:"<<area<<endl;
//     }
//     return 0;
//  }



//question no;-2
//function to find the factorial of function
// #include<iostream>
// using namespace std;
// void PrintFactorial(int n){
//    int facto = 1;
//    for(int i=1; i<=n;i++){
//       facto=facto*i;
//          cout<<facto<<endl;
      
//    } 
// }
// int main(){
//    PrintFactorial(10);
//    return 0;


// }



//question no;3
//print all prime number from 1 to n
// #include<iostream>
// using namespace std;
// bool printPrime(int n){
//    for(int i = 2; i<=n; i++){
//       return true;
//       for(int j = 2; j<i; j++){
//          return false;
//       }
//    }
// }
// int main(){
//    bool prime = printPrime(10);
//    if(prime){
//       cout<<"its a prime number"<<endl;
//    }
//    else{
//       cout<<"its not aprime number"<<endl;
//    }
//    return 0;
// }
 


//question number 7
//convert km to miles
// #include<iostream>
// using namespace std;
// void ConvertKmtomiles(int n){
// int numbersofkm = n;
// int numbersofmiles = (numbersofkm/1.6);
// cout<<numbersofmiles<<endl;
// }
// int main(){
//    ConvertKmtomiles(4);
//    return 0;
// }


//isme hame float lena hoga kyu ki value hari decimal me aagega isiliye
// #include<iostream>
// using namespace std;
// void ConvertKmtomiles(int n){
// float numbersofkm = n;
// float numbersofmiles = (numbersofkm/1.6);
// cout<<numbersofmiles<<endl;
// }
// int main(){
//    ConvertKmtomiles(4);
//    return 0;
// }

//question no.8
//convert farhenheit in to celcius
// #include<iostream>
// using namespace std;
// void ConvertFartoCel(int n)
// {
//    float numbersofar = n;
//    float numbersofcel = ((numbersofar -32)*(5.0/9));
//    cout<<numbersofcel<<endl;
   
// }
// int main(){
//     ConvertFartoCel(98.6);
//     return 0;
// }

//question:-9
//count all set bits of a number
//  
#include<iostream>
using namespace std;










