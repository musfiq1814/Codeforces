#include<iostream>

using namespace std;


int main()
{

    int QT,i;

    cin>>QT;

    string a,b,c,d,result[QT+1];
    int N,M,g;


    for(i=1;i<=QT;i++)
    {
        cin>>a>>b>>c>>d;
        cin>>N>>M;
        if((N+M)%2==0)
        {
            result[i] = "PAR";
        }
        else
        {
            result[i] = "IMPAR";
        }
        if(b==result[i])
        {
            cout<<a<<endl;
        }
        else
        {
            cout<<c<<endl;
        }
    }
}
