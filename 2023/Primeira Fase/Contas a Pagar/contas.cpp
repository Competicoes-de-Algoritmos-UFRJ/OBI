#include <bits/stdc++.h>

using namespace std;

int main(){
    int valor, contas[3];

    cin >> valor;

    for(int i=0; i<3; i++){
        cin >> contas[i];
    }

    sort(contas, contas+3);

    int resp=0;

    for(int i=0; i<3; i++){
        if(valor>=contas[i]){
            valor-=contas[i];
            resp++;
        }
    }
    cout << resp << endl;
    return 0;
}
