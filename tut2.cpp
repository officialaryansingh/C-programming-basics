#include <iostream>
using namespace std;
int glo = 6;//this is global value 
void sum(){
    cout<<"Now we are inside of sum void \n";
    int a;
    cout<< glo;
    }
int main(){
    cout<<"we are in main. \nFrom here the programm starts it's execution.\n";
    int glo = 9;//This is the local value which is prioretized over the global one
    glo = 78; // local and global variable can be of same names 
            // here the last local varible will be considered 
    // int a = 12;
    // int b = 76;
    /*or it can be written as*/ 
    int a=12, b= 76;
    
    float pi = 3.14; //we use float notation for small decimal no.s 
    double pi2 = 3.14457969258714; // double for larger decimal no.s
    char c = 'd';//use it to store a single character 
    bool is_boolean = false;
    cout<<glo<<" :this is is 1st exicution done in the main void\n";
    sum();
    cout<<glo<<" "<<is_boolean<<"-hello boolean data type here"<<endl;
    cout<<"This is tuttorial 4.\nHere the value of a is "<<a<<".\nThe value of b is "<<b;
    return 0;

}