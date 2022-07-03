#include<iostream>
using namespace std;


int *twoSum(int *arr, int size, int target){

    int *indeces,i,j,a,b,sum;

    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            sum = arr[i]+arr[j];
            if(sum == target)
            {
                indeces[0] = i;
                indeces[1] = j;
                break;
            }
        }
    }

    return indeces;

}



int main()
{
    int i,j,target;

    int nums[3] = {3,2,4};

    target = 6;

    int *indeces = twoSum(nums,3,target);

    cout<<"["<<indeces[0]<<","<<indeces[1]<<"]"<<endl;




}



