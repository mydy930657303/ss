#include <iostream>

using namespace std;

void Sort(int *a[],int n);
int main()
{
    int n,x,i,t;
    cout<<"Input n:"<<endl;
    cin>>n;
    cout<<"Input array of "<<n<<" intergers:"<<endl;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
     Sort(a[],n);
    cout<<"After sorted the array is:";
    for(t=0;t<n;t++)
    {
        cout<<a[t]<<" ";
    }

}
void Sort(int *a[],int n)
{
    int s;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<=n-i;j++)
        {
            if(a[j]>a[j+1])
            {
                s=*a[j];
                *a[j]=*a[j+1];
                *a[j+1]=s;
            }
        }
    }
}
