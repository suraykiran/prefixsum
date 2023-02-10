//prefix sum of ringe adding
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    
    int arr[8]={2,4,7,5,1,3,8,9};
    int arr1[9]={0,0,0,0,0,0,0,0,0};
    int Q;
    cin>>Q;
    while(Q--)
    {
        int l,r,x;
        cin>>l>>r>>x;
        arr1[l]=x;
        arr1[r+1]=-x;


    }
    int prefix[8];
    prefix[0]=arr1[0];
    for(int i=1;i<8;i++)
    {
        prefix[i]=arr1[i]+prefix[i-1];
    }

    for(int i=0;i<8;i++)
    {
        cout<<prefix[i]+arr[i]<<endl;
    }
    
}
//3 lines for faster input and output
ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cout.tie(NULL);
