#include "StringArray.h"
#include <cstring>
using namespace std;

StringArray::StringArray()
{
    // create a new data which takes 1 byte
    my_pdata = new char[1];
    my_pdata[0] = '\0';
}

StringArray::StringArray(const char *str)
{
    if (str)
    {
        my_size = strlen(str);
        my_pdata = new char[my_size + 1];
        strncpy(my_pdata, str, my_size);
        my_pdata[m_size] = '\0';
    }
    else
    {
        // create a new data which takes 1 byte
        my_pdata = new char[1];
        my_ypdata[0] = '\0';
    }
}
StringArray::StringArray(const StringArray &inString)
{
    int len = strlen(inString.my_pdata);
    my_pdata = new char[len + 1];
    strncpy(my_pdata, inString.my_pdata, len);
    my_pdata[len] = '\0';
}

StringArray::~StringArray()
{
    delete[] my_pdata;
    my_pdata = nullptr;
}

StringArray &StringArray::operator=(const StringArray &instring)
{
    //if it is the same object, return directly
    if (this == &instring)
    {
        return *this;
    }

    //create a temporary object
    StringArray tmpString(instring);
    char *tmpData = tmpString.my_pdata;
    tmpString.m_pdata = my_pdata;
    my_pdata = tmpData;
    return *this;
}

StringArray &StringArray::operator=(const char *str)
{
    delete my_pdata;
    if (str)
    {
        my_size = strlen(str);
        my_pdata = new char[my_size + 1];
        strncpy(my_pdata, str, my_size);
        my_pdata[my_size] = '\0';
    }
    else
    {
        // create a new data which takes 1 byte
        my_pdata = new char[1];
        my_pdata[0] = '\0';
    }
    return *this;
}

ostream &operator<<(ostream &os, const StringArray &instring)
{
    os << instring.my_pdata;
    return os;
}

size_t StringArray::size() const
{
    return my_size;
}
