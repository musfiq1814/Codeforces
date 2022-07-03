
#include<iostream>
using namespace std;


int main()
{
    char arr[9][9];

    int i,j;


    int k,t;

    cin>>t;

    for(k=1;k<=t;k++)
    {


    for(i=1;i<=8;i++)
    {
        for(j=1;j<=8;j++)
        {
            cin>>arr[i][j];

        }
    }

    for(i=2;i<=7;i++)
    {
        for(j=2;j<=7;j++)
        {
            if(arr[i][j]=='#' && arr[i-1][j-1]=='#' && arr[i-1][j+1]=='#' && arr[i+1][j-1]=='#' && arr[i+1][j+1]=='#')
            {
                cout<<i<<" "<<j<<endl;
            }

        }
    }

    }


}
