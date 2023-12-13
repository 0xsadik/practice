
// create your own strlen function 

// #include<iostream>
// using namespace std;

// int myStrlen(char str[]) {
//     int i = 0;
//     while(str[i] != '\0') {
//         i++;
//     }
//     return i;
// }

// int main()
// {
//     char s[] = "hellow world";
//     cout << myStrlen(s);

//     return 0;
// }


// ------------------------------------------------


// #include<iostream>
// using namespace std;

// int myStrlen(char *str) {
//     char *first = str;
//     while(*str != '\0') {
//         str++;
//     }
//     return str - first;
// }

// int main()
// {
//     char s[] = "hellow world";
//     cout << myStrlen(s);

//     return 0;
// }


// --------------------------------------------------

#include<iostream>
using namespace std;

int myStrlen(char *str) {
    char *first = str;
    while(*str) {
        str++;
    }
    return str - first;
}

int main()
{
    char s[] = "hellow world";
    cout << myStrlen(s) << '\n';

    return 0;
}