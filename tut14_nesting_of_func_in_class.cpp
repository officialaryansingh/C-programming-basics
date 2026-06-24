/**********NESTING OF MEMBER FUNCTION**********/

#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s; // herer s is private
    // because by default in class every thing stays private
    // private:
    //   string s; the program will still work
public:
    void read(void);
    void chk_bin(void);
    void ones_complement(void);
    void display(void);
};

void binary ::read(void)
{

    cout << "Enter the binary : ";
    cin >> s;
}

void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Icorrect binary format" << endl;
            exit(0);
        }
    }
}

/*suppose if i want to check if the number is a binary or not
in that case can do thee nesting of the function like chk_bin() in the ones_complement function
so that it can it can check the number before running the functoin
in this way time can be saved by not working on lardge numbers unnecessarily*/

void binary ::ones_complement(void)
{
    chk_bin();

    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary ::display(void)
{
    chk_bin();
    cout << "Displaying your number : ";
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{

    binary b;
    b.read();

    // IMPORTANT NOTE:
    // b.chk_bin(); since i have done nesting of this function in ones_complement function
    //              - once a functoin in a class in nested it can't be called individually 
    //                or the functoin is now 'Private'

    b.display();
    b.ones_complement();
    b.display();
    return 0;
}