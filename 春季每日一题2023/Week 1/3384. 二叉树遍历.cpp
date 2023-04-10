#include <iostream>

using namespace std;

int k;
string str;

void dfs() {
    if (str[k] == '#') {
        k++;
        return;
    }

    char c = str[k++];  //根节点

    dfs();              //左子树
    cout << c << " ";
    dfs();              //右子树
}

int main() {

    cin >> str;

    dfs();

    return 0;
}