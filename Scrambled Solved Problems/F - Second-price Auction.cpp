
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T, N;
    int A[100], B[100];
    for(cin >> T; T--;) {
        cin >> N;
        for(int i = 0; i < N; ++i) {
            cin >> A[i];
            B[i] = A[i];
        }
        int ps = 0;
        sort(A, A + N);
        for(int i = 0; i < N; ++i)
            if(B[i] == A[N - 1]) ps = i + 1;
        cout << ps << ' ' << A[N - 2] << endl;
    }
}
