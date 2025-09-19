#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    string abc;
    cin >> abc;

    if (abc.empty()) {
        cout << "NO";
        return 0;
    }

    stack<char> st;
    st.push(abc[0]);

    for (int i = 1; i < abc.size(); i++) {
        char current = abc[i];
        if (!st.empty() && st.top() == current)
            st.pop();
        else
            st.push(current);
    }

    if (st.empty()) cout << "YES";
    else cout << "NO";

    return 0;
}
