
#include<iostream>
using namespace std;


int f()
{
long long i,j,n,count=0;
cin>>n;

long long arr[n];
long long sum[n];
long long output[n];

for(i=1;i<=n;i++){
    cin>>arr[i];
}


for(j=1;j<n;j++)
{
    sum[j] = arr[j] + arr[j+1];
    if(sum[j]%2==1){
        count++;
        if(arr[j]%2==1){
        arr[j]=0;
        }

        else{
        arr[j+1]=0;
        }
    }
}
return count;
}




int main()
{
long long i,n;
cin>>n;
for(i=0;i<n;i++){
cout<<f()<<endl;
}
}
