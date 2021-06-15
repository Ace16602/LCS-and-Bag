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
    cout << "��������Ʒ����:";
    cin >> n;
    cout << "��ֱ�����" << n << "����Ʒ�������ͼ�ֵ:" << endl; 
    for (int i = 1; i <= n; i++) {
        cin >> weight[i] >> value[i];
    }
    cout << "�����뱳������:";
    cin >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = weight[i]; j <= m; j++) {
            f[j] = max(f[j], f[j - weight[i]] + value[i]);
        }
    }
    cout << "�����ܷŵ�����ֵΪ:" << f[m] << endl;
}
