#include<iostream>
using namespace std;

// struct employee
// {
//     /*  data   */
//     int eId;
//     char favChar;
//     float salary;

// };

typedef struct employee
{

    /*  data  */
    
    int eId;
    char favChar;
    float salary;


}ep;

int main(){ 

    struct employee NoOne;
    NoOne.eId = 1;
    NoOne.favChar = 'c';
    NoOne.salary = 120000000;

    cout<<"The value is "<<NoOne.eId<<endl;
    cout<<"The value is "<<NoOne.favChar<<endl;
    cout<<"The value is "<<int(NoOne.salary)<<endl;
    return 0;

}
