#include<iostream>
using namespace std;

// 1.Static Data Member 
class Employee {
    int id;
    // int count = 0; it can be any value
    static int count;// if we want to start the diffrent count value, we can't do it here 
    // as it will syntactic error i.e. static int count = 1000;--> X (wrong) 
    
    public:
    void setData(void){
        cout<< "Enter the employee id :"<<endl;
        cin>> id;
        count++;
    }
    void getData(void){
        cout<<"The id of this employee is : "<<id<<" and this employee number " <<count<<endl;
    }
    
    // 2. Static Data Functoin - 
    // -it a function which is vreated to access all static variables
    
    static void getCount(void){
        // cout<<"The Employee id : "<< id <<endl;//this will through an error as id is not static 
        // thus, only static data is allowed in output

        cout<< "The value of count is "<<count<<endl;
    }


};

/*if wouldn't have used the static variable and the below line
the the shall still run but now each object will have it's own count 
then the output would have been diffrent : in getData the value of count always will be equal to
the assigned value in int count (if int count is not assinged a value it will take the
garbage value)*/ 

// count is the static data member of the class employee

int Employee :: count; // default value is -> 0, but we assign another values for count from here 


int main(){
    Employee No,One,NoOne;

    No.setData();
    No.getData();

    One.setData();
    One.getData();

    NoOne.setData();
    NoOne.getData();
    
    return 0;
}