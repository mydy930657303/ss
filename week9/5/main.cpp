#include <iostream>

using namespace std;

int Read(int *x)
{

   int s=0;
   while(s<100)
   {
       cin>>*x;
       if(*x==0)
          break;
       x++;
       s++;
   }
}
void Print(int *x, int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<*x<<" ";
        x++;
    }
    cout<<endl;
}
void Swap(int *x, int m, int *y, int n)
{
    int a[100];
    for(int i=0;i<m;i++)
        {
            a[i]=*x;
            x++;
        }
    for(int i=0;i<n;i++)
    {
        *x=*y;
    }
    for(int i=0;i<m;i++)
    {
        *y=a[i];
    }
}

void Sort(int *x, int n)
{
    int a[100]=*x;
    int i,j,t;
    for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
    {
        if(a[i]>a[j])
        {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
    }
    *x=a;
}
int main()
{
    int t;
    int a[100],b[100];
    int *x=a,*y=b;
    Read(*x)=m;
    Read(*y)=n;
    Swap(*x,m,*y,n);
    t=m;
    m=n;
    n=t;
    Print(*x, m)
    Print(*y, n)
    Sort(*x,m);
    Sort(*y,n);
    Print(*x, m)
    Print(*y, n)
    return 0;
}



www
