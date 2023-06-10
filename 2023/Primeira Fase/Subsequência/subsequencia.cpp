#include <bits/stdc++.h>

using namespace std;

int a, b, sa[100005], sb[100005];

int main(){
    cin >> a >> b;

    for(int i=1; i<=a; i++){
        cin >> sa[i];
    }

    for(int i=1; i<=b; i++){
        cin >> sb[i];
    }

    int pont_a = 1;
    int pont_b = 1;

    while(pont_a<=a && pont_b<=b){
        
        if(sa[pont_a] == sb[pont_b]){
            pont_b++;
        }

        pont_a++;
    }

    if(pont_b == b+1){
        cout << 'S' << endl;
    }else{
        cout << 'N' << endl;
    }

    return 0;
}
