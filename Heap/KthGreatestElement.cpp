#include<iostream>
#include<queue>
using namespace std;

// find kth greatest element...........
int getKthGreatestElement(int arr[],int n, int k)
{
    
    // create min heap...
    priority_queue<int, vector<int>, greater<int> >pq;

    // first k element ko process karo...
    // so that initial state maintain rhe...
    for(int i=0;i<k;i++)
    {
        int element=arr[i];
        pq.push(element);
    }

    // remaining elements ko tabhi insert karenege jab vo root se chota honge..
    for(int i=k;i<n;i++)
    {
        int element=arr[i];
        if(element>pq.top())
        {
            pq.pop();
            pq.push(element);
        }
    }

    int ans=pq.top();
    return ans;
}


int main()
{
    int arr[]={3,5,4,6,9,8,7};
    int n=7;
    int k=3;
    cout<<"3th greatest no is: "<<getKthGreatestElement(arr,n,k)<<endl;
}