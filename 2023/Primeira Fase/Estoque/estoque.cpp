#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m, estoque[505][505];

    cin >> n >> m;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin >> estoque[i][j];
        }
    }
    
    int p;
    cin >> p;

    int resp=0;

    for(int i=0; i<p; i++){
        int a, b;
        cin >> a >> b;
        if(estoque[a][b]>0){
            estoque[a][b]--;
            resp++;
        }
    }
    cout << resp << endl;
    return 0;
}
