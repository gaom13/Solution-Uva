#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cp,cpr,ch,cs,vh,ent,aux=9999995555;

    while(scanf("%d %d %d %d\n", &cp, &cpr, &ch, &cs) != EOF)
    {
        aux=2000000000;
        for(int i=0; i<ch; i++)
        {
            cin>>vh;
            for(int h=0; h<cs; h++)
            {
                cin>>ent;
                if(ent>=cp)
                {
                    aux=min(aux,(cp*vh));
                }
            }
        }
        if (aux != 2000000000 && aux <= cpr)
			cout << aux << endl;
		else
			cout << "stay home" << endl;
    }

    return 0;
}
