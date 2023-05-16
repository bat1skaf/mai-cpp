std::pair<int, int>  lilbig(const char* s) {
    int small = 0, big = 0;
    for (int i = 0; s[i]; i++) {
        if (('a' <= s[i] && s[i] <= 'z'))
            ++small;
        else if (('A' <= s[i] && s[i] <= 'Z'))
            ++big;
    }
    return { small, big };

}

//тогда  программа будет болше защищена от ошибок
int main() {  
    char s[100];   
    cout << "Enter the string: ";
    gets_s(s);
    auto[s, b] = lilbig(s);
    cout << "The number of capital letters per line: " << b << endl;
    cout << "Number of lowercase letters per line: " << s << endl;
    return 0;
}
