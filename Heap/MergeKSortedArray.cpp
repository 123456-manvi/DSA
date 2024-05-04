#include<iostream>
#include<vector>
using namespace std;


class Info{
    public:

    bool operator()(Info* a, Info* b)
    {
        return a->data > b->data;
    }
    int data;
    int rowIndex;
    int colIndex;

    Info(int a, int b, int c)
    {
        this->data=a;
        this->rowIndex=b;
        this->colIndex=c;
    }
};


void mergeKSortedArrays(int arr[][4], int n, int k, vector<int> &ans)
{
    priority_queue<Info*, vector<Info*>, compare pq;
    // process first  elements
    for(int row=0;row<k;row++)
    {
        int element=arr[row][0];
        Info* temp=new Info(element,row,0);
    }
}
int main()
{
    int arr[3][4]={
        {1,4,8,11},
        {2,3,6,10},
        {5,7,12,14}
    };

    int n=4;
    int k=3;

    vector<int> ans;
    mergeKSortedArrays(arr,n,k,ans);

    cout<<"printing ans array: "<<endl;
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }

    return 0;
}