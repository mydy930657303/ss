#include <iostream>

using namespace std;


int search(int list[], int n, int x);
int main()
{
    cout<<"Input n:"<<endl;
    int n,x,i,t;
    cin>>n;
    int list[n];
    cout<<"Input "<<n<<" integers:"<<endl;
    for(i=0;i<n;i++)
{
    cin>>list[i];
}
cout<<endl;
     cout<<"Input x:"<<endl;
     cin>>x;

     t=search(list,n,x);
     if(t==-1)
        cout<<"Not found";
     else
        cout<<"index = "<<t;
  return 0;
}
int search(int list[],int n, int x)
{
    int i=0;
    for(i;i<n;i++)
    {
        if(x==list[i])
            return i;
    }
    return -1;

}
