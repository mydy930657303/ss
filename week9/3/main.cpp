#include <iostream>

using namespace std;

int main()
{
    int n,x,y;
    cin>>n;
    x=(n-1)/2;
    y=0;
    int a[n][n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
    {
        a[i][j]=0;
    }
    for(int b=1;b<=n*n;b++)
{
    a[y][x]=b;
    x=(x-1+n)%n;
    y=(y-1+n)%n;
    if(a[y][x]!=0)
    {
        x=(x+1+n)%n;
        y=(y+1+1+n)%n;
    }

    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
    {
        if(a[i][n-j-1]<10)
        cout<<"   "<<a[i][n-j-1];
        if(9<a[i][n-j-1]&&a[i][n-j-1]<100)
            cout<<"  "<<a[i][n-j-1];
        if(99<a[i][n-j-1]&&a[i][n-j-1]<1000)
            cout<<" "<<a[i][n-j-1];
        if(999<a[i][n-j-1]&&10000>a[i][n-j-1])
            cout<<a[i][n-j-1];
    }
    cout<<endl;
    }
    return 0;
}

