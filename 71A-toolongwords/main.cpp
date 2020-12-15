#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    string word;
    int n;
    int counter=0;
    cin>>n;
    while(i<n)
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
        counter++;
    }
}
