// ******Inline Functions, Default Argument & Constant Argument***\\

#include<iostream>
using namespace std;

inline int product(int a,int b){
    // static int c = 0;this executes only once
    // c = c+1 next this function is run the value of c is c+1
    return a*b;
}
// NOTE: should not used inline func. with the :-
//      (i)recursions (ii) static variables
// inline should not be used large or complex code structure 
// only used with simple codes


int main(){
    int a,b;
    cout<<"Enter the value of a & b"<<endl;
    // cin>>a>>b;
    // cout<<"The product of a and b is: "<<product(a,b)<<endl;
    // Above product cammands can be done simply by int product() fucn. but takes more time to execute the same program

    return 0;
}