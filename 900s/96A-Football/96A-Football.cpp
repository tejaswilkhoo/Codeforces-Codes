#include <iostream>

using namespace std;

int main()
{
    string pos;

    cin>>pos;

    if ( (pos.find("0000000") != string::npos) || (pos.find("1111111") != string::npos) )
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }

}
