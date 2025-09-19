#include <bits/stdc++.h>
using namespace std;

int n, cnt;
vector<bool> prime(100005, 1);
vector<int> a;

int main(){
    
    cin >> n;
    
    if(n <= 1) {
        cout << "NO";
        return 0;
    }
    
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    
    return 0;
}
