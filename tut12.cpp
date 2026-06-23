#include<iostream>
using namespace std;

// struct: Allocates separate memory for every member.
// All members can hold values simultaneously.
typedef struct employee
{

    /*data*/
    int eId; //4
    char favChar; //1
    float salary; //4

} ep;


// union: Allocates one shared memory block for all members.
// Only one member can hold a value at a time.
union money //
{
    /*data*/
    int rice; //4
    char car; //1
    float pounds; //4
    
};    



int main(){
    
    ep Shubham;
    struct employee NoOne;
    NoOne.eId = 1;
    NoOne.favChar = 'c';
    NoOne.salary = 120000000;
    cout<<"The value is "<<NoOne.eId<<endl;
    cout<<"The value is "<<NoOne.favChar<<endl;
    cout<<"The value is "<<NoOne.salary<<endl;
    
    union money m1;
    m1.rice = 34 ; 
    m1.car = 'c';
    cout<<m1.rice<<endl; // this gives a garbage value.
    // at a time only one member can hold a value 
    
    cout<<m1.car<<endl;// return : c 
    
    
    enum meal{breaking,crushing,smashing};
    meal s1= smashing;
    cout<<(s1 == 3)<<endl;
    
    



    return 0;
}



