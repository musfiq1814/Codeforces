
#include<iostream>

using namespace std;


int oddFunc()
{
    int i,n;

    cin>>n;

    int a[n],count=0;

    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }


    for(i=1;i<n;i++)
    {
        if(a[i]%2==0 && a[i+1]%2==1)
        {
            count++;
        }
    }
    return count;
}


int main()
{
    int c;
    cin>>c;
    for(int i = 1;i<=c;i++){
        cout<<oddFunc()<<endl;
    }
}

