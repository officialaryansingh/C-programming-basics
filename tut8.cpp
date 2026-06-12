#include<iostream>
using namespace std;

int factorial(int n){
    if( n == (0 or 1) ){
        return 1;
    
    }
    return n * factorial(n-1);

}

// int main(){

//     int a;
//     cout<<"Enter the number : ";
//     cin>>a;
    
//     cout<<"a! = "<< factorial(a)<<endl;

//     return 0;
// }

int fib(int n){
    if(n<2){
        return 1;
    }
    return fib(n-2)+ fib(n-1);
}

int main(){
    cout<<"Fibonacci";

    int a ;

    cout << "Enter your number here : ";
    cin>> a;
    if (a){

    }
    cout << "the ath term in the fibonacci sequence at position" << a<< " is "<< fib(a) << endl ;




    return 0;
}