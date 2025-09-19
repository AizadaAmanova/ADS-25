#include <bits/stdc++.h>
using namespace std;
int main(){
    string x, y, a, b;
    cin >> x >> y;

    for(int i = 0; i < x.size(); i++){
        if(x[i] == '#'){
            a.pop_back();
        }
        else a += x[i];
    }
    for(int i = 0; i < y.size(); i++){
        if(y[i] == '#'){
            b.pop_back();
        }
        else b += y[i];
    }
    if(a == b) cout <<"Yes";
    else cout << "No";

    return 0;
}