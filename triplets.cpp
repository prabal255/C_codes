#include<iostream>

using namespace std;

int main()
{
    int n,alice=0,bob=0;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        cin>>b[i];    
    for(int i=0;i<n;i++)
    {
        if(a[i] > b[i])
            alice++;
        else if(a[i] < b[i])
            bob++;
        else
            continue;
    }
    cout<<alice<<" "<<bob;
    return 0;
}

