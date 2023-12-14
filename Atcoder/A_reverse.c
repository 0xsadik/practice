#include<stdio.h>
#include<string.h>

const int mx = 1e5 + 123;
char s[mx];

int main()
{
    int l, r;
    scanf("%d %d", &l, &r);
    scanf("%s", s);

    for (int i = l - 1, j = r - 1; i < j; i++, j--) {
        char tmp = s[i];
        s[i] = s[j];
        s[j] = tmp;
    }
    int n = strlen(s);
    for (int i = 0; i < n; i++) {
        printf("%c", s[i]);
    }

    return 0;
}