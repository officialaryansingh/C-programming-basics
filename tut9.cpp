// function overloding 
#include<iostream>
using namespace std;

int sum(int a , int b){
    cout<<" sum of two numbers a & b "<< endl;
    return (a+b);
}

int sum(int a ,int b , int c){

    cout<<" sum of three numbers a,b & c"<<endl;
    return (a+b+c);
}

int cylinder( double r , int h){
    cout<< "volume of cylinder when ";
    return ((22/7) * r*r *h  );
}

int main(){

    cout<<"The sum of the numbers 3 and 6 is : "<<sum(3,6)<< endl;
    cout<<"The sum of numbers 3,6 & 9 = "<< sum(3,6,9)<<endl ;
    cout<<"r = 2.500 and h = 100 :  "<<cylinder( 2.500 , 100);
    return 0 ;
}
