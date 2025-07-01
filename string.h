#ifndef STRING_H
#define STRING_H

class string

    // a class that represent a string
{
public:
    string();
    string(const char* s);
    ~string();
private:
    char* ptr_start_str;
    int len_str;
    int find_len_str(const char* str);
    int str_copy(const char* src_str);
};


#endif