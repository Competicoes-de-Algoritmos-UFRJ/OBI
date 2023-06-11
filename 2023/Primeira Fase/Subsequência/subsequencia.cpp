#include <bits/stdc++.h>

using namespace std;

int a, b, sa[100005], sb[100005];

int main(){
    cin >> a >> b;

    for(int i=0; i<a; i++){
        cin >> sa[i];
    }

    for(int i=0; i<b; i++){
        cin >> sb[i];
    }

    int pont_a = 0;
    int pont_b = 0;

    while(pont_a<a && pont_b<b){
        
        if(sa[pont_a] == sb[pont_b]){
            pont_b++;
        }
        pont_a++;
    }

    if(pont_b == b){
        cout << 'S' << endl;
    }else{
        cout << 'N' << endl;
    }
    return 0;
}
