#include <iostream>
#define V 500
using namespace std;
int weight[20 + 1];
int value[20 + 1];
int f[V + 1];
int max(int a, int b) {
    return a > b ? a : b;
}
int main() {
    int n, m;
    cout << "请输入物品个数:";
    cin >> n;
    cout << "请分别输入" << n << "个物品的重量和价值:" << endl; 
    for (int i = 1; i <= n; i++) {
        cin >> weight[i] >> value[i];
    }
    cout << "请输入背包容量:";
    cin >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = weight[i]; j <= m; j++) {
            f[j] = max(f[j], f[j - weight[i]] + value[i]);
        }
    }
    cout << "背包能放的最大价值为:" << f[m] << endl;
}
