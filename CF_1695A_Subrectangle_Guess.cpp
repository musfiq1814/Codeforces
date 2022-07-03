
#include<iostream>
#include<math.h>
using namespace std;


void maxcount()
{


    int i,j,h,w;

    cin>>h>>w;

    int box[h][w];



    for(i=1;i<=h;i++)
    {
        for(j=1;j<=w;j++)
        {
            cin>>box[i][j];
        }
    }

    int max = box[1][1],maxindexh=1,maxindexw=1;


    for(i=1;i<=h;i++)
    {
        for(j=1;j<=w;j++)
        {
                if(box[i][j]>max)
                {
                    max = box[i][j];
                    maxindexh = i;
                    maxindexw = j;
                }
        }
    }



    if(maxindexh>maxindexw)
    {
    cout<<pow(maxindexh,2)<<endl;
    }
    else
    {
        cout<<pow(maxindexw,2)<<endl;
    }


}

int main()
{
    int count;
    cin>>count;
    for(int i=1;i<=count;i++)
    {
        maxcount();
    }








}




