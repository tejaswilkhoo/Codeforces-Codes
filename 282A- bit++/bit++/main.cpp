#include <iostream>

using namespace std;

int main()
{
    int X=0;
    int n;
    string operation;

    cin>>n;

    while(n>0)
    {
        cin>>operation;

        if( (operation == "X++") || (operation == "++X"))
        {

            X++;
        }

        else
        {
            X--;
        }
        n--;
    }
    cout<<X;
}
