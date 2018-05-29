#include<cstdio>
#include<stack>

using namespace std;

int n, c;
stack<int> rail;

void marshal() {
    for(;;) {
        while(rail.size() > 0) rail.pop();
        int j = 0;
        for(int i = 0; i < n; i++) {
            scanf("%d", &c);
            if(c == 0) return;

            while(j < n && j != c) {
                if(rail.size() > 0 && rail.top() == c) break;
                j++;
                rail.push(j);
            }
            if(rail.top() == c) rail.pop();
        }
        if(rail.size() == 0) printf("Yes\n");
        else printf("No\n");
    }
}

int main() {
    for(;;) {
        scanf("%d", &n);
        if(n == 0) break;

        marshal();
        printf("\n");
    }
}
