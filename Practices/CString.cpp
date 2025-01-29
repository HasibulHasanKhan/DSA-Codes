#include <iostream>
#include <cstring>
using namespace std;

// int main () {
//     char myStr [] = "Hello World";
//     char* myPtr  = (char*)memchr(myStr, 'o', 12);
//     cout << myPtr;

//     return 0;
// }

int main () {
    char myStr1[] = "ABCD";
    char myStr2[] = "ABCE";

    int cmp = memcmp(myStr1, myStr2, 4);
    if (cmp > 0) {
        cout << myStr1 << " is greater than " << myStr2 << endl;
    } else if (cmp < 0){
      cout << myStr2 << " is greater than  " << myStr1 << endl;
    } else {
        cout << myStr1 << " is equal to " << myStr2 << "\n";
    }
    return 0;
}