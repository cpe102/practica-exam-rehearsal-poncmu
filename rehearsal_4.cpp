#include <iostream>
#include <string.h>

using namespace std;
//Write compress() here.
string compress(string m)
{
    int i=0;
    int L=m.size();
    string s;
    while(i<L)
    {
        s=s+m[i];
        i=i+3;
    }
    return s;
}

int main()
{
    string a = compress("ABCDEFGHIJKLMN");
    string b = compress("123456");
    string c = compress("HelloWorld");
    string d = compress("BNK48");
    string e = compress("COMPROG261102");
    string f = compress("A");
    string g = compress("AB");
    string h = compress("ABC");
    string i = compress("ABCD");
    string j = compress("CPECMU");
    string k = compress("X");
    
    cout << a << "\n" << b << "\n" << c << "\n" << d << "\n" << e << "\n" << f << "\n" << g << "\n" << h << "\n" << i << "\n";
    cout<<j<<endl;
    cout<<k<<endl;

}
