//#include <iostream>
//#include <string>
//using namespace std;
//
//
//string convert();
//
//int main() {
//    convert(); // Call the convert function
//    return 0;
//}
//
//
//string convert()
// {
//    char str[32] = "Pakistan Zindabad";
//    for (int i = 0; str[i] != '\0'; i++) {
//        // Convert uppercase to lowercase
//        if (str[i] >= 'A' && str[i] <= 'Z') {
//            str[i] = str[i] + 32;
//        } else if (str[i] >= 'a' && str[i] <= 'z') {
//            // Convert lowercase to uppercase
//            str[i] = str[i] - 32;
//        }
//    }
//    cout << "The string in converted case is:\n" << str << endl;
//}
#include <iostream>
#include <string>
using namespace std;

char str[32] = "Pakistan Zindabad";
string convert();

int main() {
	char convert(); // Call the convert function
    return 0;
}


string convert()
 {
    
    for (int i = 0; str[i] != '\0'; i++) {
        // Convert uppercase to lowercase
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        } else if (str[i] >= 'a' && str[i] <= 'z') {
            // Convert lowercase to uppercase
            str[i] = str[i] - 32;
        }
    }
    return str;
}
