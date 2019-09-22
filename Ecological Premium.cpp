#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);

    float T,cg,sal1,sal2,sal3,aux;

    cin >> T;
    while(T--)
    {
        aux=0;
        cin>>cg;//Cantidad de Granjeros
        while(cg--)
        {
            cin>>sal1>>sal2>>sal3;//sal1:Metros cuadrados, sal2:Cantidad de animles
            //sal3: Respeto al medio ambiente del agricultor
            aux+=(sal1/sal2)*sal3*sal2;
        }
        cout<<aux<<endl;
    }
    return 0;
}
