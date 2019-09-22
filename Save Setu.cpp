#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cc,n,aux=0;

    string ent;
    cin>>cc;
    while(cc--)
    {
        cin>>ent;

        if(ent=="donate")
        {
           cin>>n;
        aux+=n;
        }
        else if(ent=="report")
            cout<<aux<<endl;

    }
    return 0;
}
