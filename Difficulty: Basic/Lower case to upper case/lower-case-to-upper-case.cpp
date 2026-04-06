
string to_upper(string str) {
    // code
    for(char &c :str) c =toupper(c);
    return str;
}