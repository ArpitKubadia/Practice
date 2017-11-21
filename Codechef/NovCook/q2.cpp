#include<iostream>
#include<stdio.h>
#include<string.h>
#include<string>
using namespace std;
#define max 100
struct player
{
int r,rmin,rmax,time,stat=1;
string rate,colour;

}p[max];

int check_rating(int a, int b)
{
    if(p[a].r>=p[b].rmin&&p[a].r<=p[b].rmax)
        return 1;
    else
        return 0;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>p[i].r
            >>p[i].rmin
            >>p[i].rmax
            >>p[i].time
            >>p[i].rate
            >>p[i].colour;

        }

        for(int i=0;i<n;i++)
        {
            int flag=1;
            for(int j=0;j<i;j++)
            {

                if(check_rating(i,j)&&check_rating(j,i))
                {
                    if(p[i].rate==p[j].rate)
                    {
                        if(p[i].time==p[j].time)
                        {
                            if((p[i].colour=="white"&&p[j].colour=="black")||(p[i].colour=="black"&&p[j].colour=="white")||(p[i].colour=="random"&&p[j].colour=="random"))
                            {
                                if(p[j].stat&&p[j].stat)
                                {
                                    cout<<j+1<<endl;
                                    p[j].stat=0;
                                    p[i].stat=0;
                                    flag=0;
                                    break;
                                }
                            }
                        }
                    }
                }
            }
            if(flag==1)
            cout<<"wait"<<endl;
        }
    }

}
