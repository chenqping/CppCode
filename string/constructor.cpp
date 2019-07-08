#include<iostream>
#include<string>
using namespace std;

/*
* reference: http://www.cplusplus.com/reference/string/string/string/
*/

int main(){
    string s("abcdefg"); //using string(const char *s)
    string s1(s.data(), s.size()); //using constructor: string(const char*s, size_t n)
    string s2({s.data(), s.size()});// using constructor: string(initializer_list<char>, il)
    cout << s << endl;
    cout << s1 << endl;
    cout << s2 << endl;
    return 0;
}
