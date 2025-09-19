#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, x, y[1005];
    cin >> n;

    while(n--){
        int x;
        cin >> x;

        int y[1005];
        memset(y, -1, sizeof(y));

        int pos = 0;
        for (int cur = 1; cur <=x; cur++ ){
            int count = cur + 1;
            while(true){
                if(y[pos] == -1){
                    count--;
                    if(count == 0){
                        y[pos] = cur;
                        break;
                    }
                }
                pos++;
                if (pos == x ) pos = 0;
            }
        }
        for(int i = 0; i < x; i++) cout << y[i] << ' ';
        cout << endl;
    }
    return 0;
}