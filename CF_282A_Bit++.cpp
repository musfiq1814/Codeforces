#include<iostream>

using namespace std;

int main()
{
    int n,i,t=0;

    cin>>n;

    string command[n];


    for(i=0;i<n;i++)
    {
        cin>>command[i];

        if(command[i][0]=='+' || command[i][2]=='+')
        {
            t++;
        }
        else
        {
            t--;
        }
    }

    cout<<t<<endl;

}
