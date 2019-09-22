#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);

    int tc = 1,T,ent,r,cs,sa,sb;
    vector<int> ans;
    string s;

    cin >> T;
    while(T--)
    {
        ans.clear();
        sa=sb=0;
        cin>>cs;
        while(cs--)
        {
            cin>>ent;
            ans.push_back(ent);
        }
        for(int i=0; i<ans.size()-1; i++)
        {
            if(ans[i]>ans[i+1])
            {
                sb++;
            }
            else if(ans[i+1]>ans[i])
            {
                sa++;
            }
        }
        cout<<"Case "<<(tc++)<<": "<<sa<<" "<<sb<<endl;
    }
    return 0;
}
