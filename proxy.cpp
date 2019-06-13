#include <bits/stdc++.h>
using namespace std;
bool condition(string a,int index)
{
    if((a[index-1]=='P'||a[index-2]=='P')&&(a[index+1]=='p'||a[index+2]=='P'))
    return true;
    else 
    return false;
}
int main()
{ios::sync_with_stdio(false);
cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int days, present=0, absent=0, ans=0;
        cin>>days;
        string att;
        cin>>att;
        for(int i=0;i<days;i++)
        {
            if(att[i]=='P')
                present++;
        }
        absent=days-present;
        int per = ceil(0.75*days);
        if(present>=per)
        {
            cout<<0<<endl;
            continue;
        }
        else 
        {
            for(int i=2;i<=(days-2);i++)
            {
                if(att[i]=='A' && condition(att,i))
                {
                    ans +=1;
                    present +=1;
                }
                if(present<per)
                    continue;
                else
                break;
            }
        if(ans>0)
        cout<<ans<<endl;
        else
        cout<<"-1"<<endl;
        }
    }
}
