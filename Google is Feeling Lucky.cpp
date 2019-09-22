#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);

    int tc = 1,T,best,r;
    vector<string> ans;
    string s;

    cin >> T;

    while(T--){
        best = -1;
        ans.clear();

        for(int i = 0;i < 10;++i){
            cin >> s >> r;

            if(r > best){//Compara con el mayor puntaje con el que entra
                best = r;
                ans.clear();//Borrar todo el contenido que contega el vector
                ans.push_back(s);//Inserta el nombre de la pagina web
            }else if(r == best) ans.push_back(s);
        }

        cout << "Case #" << tc++ << ":\n";

        for(int i = 0;i < ans.size();++i)
            cout << ans[i] << '\n';//Muestra todas aquellas página que tuvieon una mayor califiación
    }
    return 0;
}
