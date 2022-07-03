


#include<iostream>

using namespace std;

int main()
{
    int size,i,j,n,temp,count;

    cin>>n;


    int array[n];

    for(i=1;i<=n;i++)
    {
        cin>>array[i];
    }

    for(i=2;i<=n;i++)
    {
        temp = array[i];

        count = 0;

        for(j=i-1;j>=1;j--)
        {
            if(temp==array[j])
            {
                count++;
            }
        }

        cout<<count<<endl;

    }

    for(i=1;i<=n;i++)
    {
        cout<<array[i]<<" ";
    }





}
