#include<stdio.h>
int main()
{
    char a[123]; // which is a string 
    scanf("%s", a); // don need any '&' address hehe 😉 

    // duita loop ek sathe calay dilam 
    for (int i = 0, j = 5; i < j; i++, j--) {
        // ebar swap kora jak
        char tmp = a[i]; // array r index gulake tmp e rakhlam
        a[i] = a[j]; // you know na?
        a[j] = tmp;
        // swap done 😜
    }
    // ekhn print kori 
    for (int i = 0; i < 5; i++) {
        printf("%c", a[i]);
    }
    printf("\n");
    return 0;
}