#include <bits/stdc++.h>

using namespace std;

int s, t, matriz[1005][1005];

int main(){
    cin >> s >> t;

    for(int i=0; i<t; i++){
        int a, b;
        
        cin >> a >> b;

        matriz[a][b]=1;
        matriz[b][a]=1;
    }

    int p;
    cin >> p;

    int resp=0;

    for(int i=0; i<p; i++){
        int k;
        cin >> k;

        vector<int> passeio(k);

        for(int j=0; j<k; j++){
            cin >> passeio[j];
        }

        int valido = 1;

        for(int j=0; j<k-1; j++){
            int a = passeio[j];
            int b = passeio[j+1];

            if(matriz[a][b]==0){
                valido = 0;
                break;
            }
        }

        if(valido==1){
            resp++;
        }
    }
    cout << resp << endl;
    return 0;
}
