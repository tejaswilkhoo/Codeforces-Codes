#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    string word;
    int n;
    int i;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>word;
        if(word.length()>10)
        {
            cout<<word[0]<<word.length()-2<<word[word.length()-1]<<endl;
        }
        else
        {
            cout<<word<<endl;
        }
    }
}
