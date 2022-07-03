
#include<iostream>

using namespace std;



int main()
{
    string a;
    string b;

    cin>>a;
    cin>>b;


    int i,k[a.length()],temp,isEqual=0,isSmaller=0;

    for(i=0;i<a.length();i++)
    {
        if(a[i]==b[i])
        {
            isEqual += 1; // isEqual will be equal to length if a==b
        }
        else
        {
            cout<<a[i]-b[i]<<endl;
        }
    }


    for(i=0;i<a.length();i++)
    {
        if(a[i]<b[i])
        {
            isSmaller = 1;
            break;
        }
    }
    cout<<a.length()<<endl;
    cout<<isEqual<<isSmaller<<endl;


    if(isEqual==a.length())
    {
        cout<<"o"<<endl;
    }
    else if(isSmaller==1)
    {
        cout<<"-1"<<endl;

    }













}
