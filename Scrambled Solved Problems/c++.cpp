#include<cstdio>
#include<iostream>

int main(){
    register unsigned n,i,j,k;
    unsigned blank = 0;

    scanf("%u", &n);
    while (n--){
        unsigned w,t;
        scanf("%u%u", &w, &t);

        char **s = new char *[t + 1];
        unsigned *inv = new unsigned[t + 1];

        for (i = 0; i < t; ++i){
            s[i] = new char[w + 1];
            scanf("%s", s[i]);
            inv[i] = j = 0;
            for (; j < w; ++j){
                for (k = j + 1; k < w; ++k){
                    if (s[i][j] > s[i][k])
                        ++inv[i];
                }
            }
        }

        for (i = 0; i < t - 1; ++i){
            for (j = 0; j < t - i - 1; ++j){
                if (inv[j] > inv[j+1]){
                    std::swap(inv[j], inv[j+1]);
                    std::swap(s[j], s[j+1]);
                }
            }
        }

        if (blank) printf("\n");
        blank = 1;

        for (i = 0; i < t; ++i)
            printf("%s\n", s[i]);
    }
    return 0;
}
