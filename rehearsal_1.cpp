#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string name;
    float gpa;

    cout<<"What is your name?:";
    cin>>name;
    cout<<endl;
    cout<<"What is your GPA?:";
    cin>>gpa;
    if(gpa>=3.5)
    cout<<name<<" Inw Jrim Jrim!!!";
    else
    {
        cout<<"Try harder, "<<name<<"!!!";
    }
    


    return 0;
}
