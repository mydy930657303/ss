#include <iostream>

using namespace std;

int main()
{
    int a[100];
    int b[100];
    int x,y;
    for(x=0;x<100;x++)
    {
        cin>>a[x];
        if(a[x]==0)
            break;
    }
    for(y=0;y<100;y++)
    {
        cin>>b[y];
        if(b[y]==0)
            break;
    }
    for(int i=0;i<y;i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<x;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    int i,j,s;
    for(i=0;i<y-1;i++)
        for(j=i+1;j<y;j++)
        {
            if(b[i]>b[j])
                {s=b[i];
                b[i]=b[j];
                b[j]=s;}
        }
     for(i=0;i<x-1;i++)
        for(j=i+1;j<x;j++)
        {
            if(a[i]>a[j])
                {s=a[i];
                a[i]=a[j];
                a[j]=s;}
        }
    for(int i=0;i<y;i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<x;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
