#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ent;

    while(1)
    {
        cin>>ent;
        if(ent==0)
            break;

        if(ent>100)cout<<"f91("<<ent<<") = "<<(ent-10)<<endl;
        else cout<<"f91("<<ent<<") = "<<(91)<<endl;
    }

    return 0;
}
