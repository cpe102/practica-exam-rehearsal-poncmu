#include <iostream>
#include <math.h>
//Write sumSqrt() here.
using namespace std;

double sumSqrt(int N)
{
    if(N<=0)
    return 0;
    else
    {
        double sum=0;
        int i=1;
        while(i<=N)
        {
            sum=sum+pow(i,-0.5);
            i++;
        }
        return sum;
    }
}

int main()
{
    double a = sumSqrt(20);
    double b = sumSqrt(10);
    double c = sumSqrt(5);
    double d = sumSqrt(2);
    double e = sumSqrt(1);
    double f = sumSqrt(0);
    double g = sumSqrt(-1);
    double h = sumSqrt(-5);
    double i = sumSqrt(3);
    
    cout << a << "\n" << b << "\n" << c << "\n" << d << "\n" << e << "\n" << f << "\n" << g << "\n";
    cout<<h<<endl;
    cout<<i<<endl;

}
