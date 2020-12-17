#include <iostream>

using namespace std;

int main()
{
    int m;
    int n;
    cin>>m>>n;

    if((m*n)%2==1)
    {
        cout<<((m*n)-1)/2;
    }
    else
    {
        cout<<(m*n)/2;
    }
}
