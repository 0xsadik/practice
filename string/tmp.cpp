// ekdom basics 

// #include<iostream>
// using namespace std;

// int main()
// {
//     char greeting[6] = {'h', 'e', 'l', 'l', 'o', '\0'};
//     cout << greeting << '\n'; // hello

//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main()
// {
//     char str1[10] = "hello";
//     char str2[10] = "wordl";
//     char str3[10];
//     int len;

//     // copy str1 into str3
//     strcpy(str3, str1);
//     cout << str3 << '\n';

//     // concatenate str1 and str2
//     strcat(str1, str2);
//     cout << str1 << '\n';

//     len = strlen(str1);
//     cout << len << '\n';

//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;

int numAlphas(const char* s) {
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (isdigit(s[i])) {
            count++;
        }
    }
    return count;
}

int main()
{
    char str[] = "a12bc3d";
    cout << numAlphas(str);

    return 0;
}