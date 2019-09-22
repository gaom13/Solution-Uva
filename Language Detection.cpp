#include <bits/stdc++.h>
using namespace std;
int main()
{
    string ent;
    int aux=1;
    while(1)
    {
        cin>>ent;
        if(ent=="#")
            break;

        if(ent=="HELLO")

            cout<<"Case "<<aux++<<": ENGLISH"<<endl;
        else if(ent=="HOLA")

            cout<<"Case "<<aux++<<": SPANISH"<<endl;
        else if(ent=="HALLO")

            cout<<"Case "<<aux++<<": GERMAN"<<endl;
        else if(ent=="BONJOUR")

            cout<<"Case "<<aux++<<": FRENCH"<<endl;
        else if(ent=="CIAO")

            cout<<"Case "<<aux++<<": ITALIAN"<<endl;
        else if(ent=="ZDRAVSTVUJTE")

            cout<<"Case "<<aux++<<": RUSSIAN"<<endl;
            else{
                 cout<<"Case "<<aux++<<": UNKNOWN"<<endl;
            }
    }

    return 0;
}
