
#include<iostream>

using namespace std;

int main()
{
    int j,i,n,m,output,c,sum = 0,t;

    cin>>t;

    for(j=1;j<=t;j++)
    {

    output = 0;
    sum = 0;

    cin>>n>>m;

    int a[n];



    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        if(i!=1)
        {
            sum = sum + a[i];
        }
    }


    c = m - a[1];

    if(c>=sum)
    {
        output = 0;
    }
    else
    {
        output = sum - (m-a[1]) ;
    }


    cout<<output<<endl;
    }




}
