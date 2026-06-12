// There are two types of header files:
// 1.System header files: It comes with the compiler 
#include<iostream>
// 2.User defined header files: It is written by the programmer.
#include"this.h" //the user defined header must first created eg."this.h" in current directory
                // else it will show error.

using namespace std;
int main(){
    int a=4, b=5;
    cout<<"Operators in C++ :"<<endl;
    cout<<"Following are the types of operators in C++ "<<endl;
    // Arithmetic operstors
    cout<<"The value of a+b is : "<<a+b<<endl;
    cout<<"\nThe value of a-b is : "<<a-b<<endl;
    cout<<"\nThe value of a*b is : "<<a*b<<endl;
    cout<<"\nThe value of a/b is : "<<a/b<<endl;//output: 0 , as its rsult will be only integer part,i.e. 4/5 = 0.8 -> from it will take only integer part,i.e.'0'
    cout<<"\nThe value of a%b is : "<<a%b<<endl;
    cout<<"\nThe value of a++ is : "<<a++<<endl;//output: 4 but in this process it add 1 after 4 is printed
    cout<<"\nThe value of after a++ is :"<<a<<endl;// output:5 as in earlier process a++ added 4+1->5 
    cout<<"\nThe value of a-- is : "<<a--<<endl;//output:5 and then after in backend it 5-1->4 = a is saved
    cout<<"\nThe value of ++a is : "<<++a<<endl;//output: 5; here first 1 is added and then a is printed
    cout<<"\nThe value of --a is : "<<--a<<endl;//output:4; opposite of above
    cout<<endl;

    // Assingment operators
    // int a = 3,b=5;
    // char d='d';
  
    
    // Comparison operators 
    cout<<"The following are the comparison operators in C++"<<endl;
    cout<<"The value of a==b is: "<<(a==b)<<endl;
    cout<<"The value of a<=b is: "<<(a<=b)<<endl;
    cout<<"The value of a>=b is: "<<(a>=b)<<endl;
    cout<<"The value of a!=b is: "<<(a!=b)<<endl;
    cout<<"The value of a>b is: "<<(a>b)<<endl;
    cout<<"The value of a<b is: "<<(a<b)<<endl;
    cout<<endl;
      
    // logical operators operators 
    cout<<"The following are the logical operators in C++"<<endl;
    cout<<"The value of ((a==b) && (a<b)) logical 'and' operators in C++ : "<<((a==b)&&(a<b))<<endl;
    cout<<"The value of ((a==b) || (a<b)) logical 'or' operators in C++ : "<<((a==b)||(a<b))<<endl;
    cout<<"The value of (!(a==b))  logical 'not' operators in C++ : "<<(!(a==b))<<endl;
      
    return 0;

}