#include<iostream>
#define max 1000
using namespace std;
int main()
{
    int t,n,a[max],x;
    float ans;
    cin>>t;
    while(t--)
    {
        int m,c=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        m=a[0]+a[1];
        for(int j=0;j<n-1;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if((a[j]+a[k])>m)
                    m=a[j]+a[k];
            }
        }

        for(int j=0;j<n-1;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if((a[j]+a[k])==m)
                    c++;
            }
        }


        //cout<<"Max: "<<m<<endl<<"C: "<<c<<endl;
        x=(n*(n-1))/2;
        ans=(float)c/x;
        cout<<ans<<endl;
    }
}
