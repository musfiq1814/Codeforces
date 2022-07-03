
#include<iostream>

using namespace std;


int main()
{
    int i,n,k,count = 0;
    cin>>n>>k;

    int score[n];

    for(i=1;i<=n;i++)
    {
        cin>>score[i];
    }

    int temp = score[k];

    for(i=1;i<=n;i++)
    {
        if(score[i]>=temp && score[i]>0)
        {
            count++;
        }
    }
    cout<<count<<endl;







}
