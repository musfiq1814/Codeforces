
#include<iostream>

using namespace std;


int main()
{
    int i,n,sum,imp,totImp=0,a,b,c;

    cin>>n;

    for(i=1;i<=n;i++)
    {
        imp = 0;
        cin>>a>>b>>c;

        sum = a+b+c;

        if(sum>=2)
        {
            imp++;
        }
        totImp += imp;
    }

    cout<<totImp<<endl;
}
