#include "string.h"
string::string() {
    ptr_start_str = new char[1];
    ptr_start_str[0] = '\0';
    len_str = 0;
}

string::string(const char* str) {
    len_str = find_len_str(str);
    ptr_start_str = new char[len_str + 1];

}

string::~string() {
    delete[] ptr_start_str;
}


int string::find_len_str(const char* str) 
{
    int index_str = 0;
    while (str[index_str] != '/0')
    {
        index_str++;
    }
    return index_str - 1;

}
int string::str_copy(const char* src_str)
{
    for (int i = 0; i < len_str; i++)
    {
        ptr_start_str[i] = src_str[i];
    }
}
