#include <iostream>

using namespace std;

int main()
{
    int n=0;
    int k=0;
    cin>>n;

    while(n--)
    {
        int p,v,t;

        cin>>p>>v>>t;
        if((p+v+t)>=2)
        {
            k++;
        }
    }
    cout<<k;
}
