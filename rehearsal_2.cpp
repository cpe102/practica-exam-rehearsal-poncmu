#include <iostream>

using namespace std;

int main()
{
    float sum=0;
    float x;
    while(x!=0)
    {
        cout<<"Enter x : ";
        cin>>x;
        if(x>0)
        sum=sum+x;
    }
    cout<<endl<<"Sum : "<<sum;

    return 0;
}