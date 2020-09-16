#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int x,y;
        cin>>x>>y;
        int f;
        if(x<=y) f=y*4;
        else if(x>y) f=(2*x-y)*4;
        cout<<"Case "<<i<<": "<<f+19<<endl;
    }
}
