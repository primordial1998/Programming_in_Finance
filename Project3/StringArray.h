#pragma once
#include <iostream>

#ifndef STRINGARRAY
#define STRINGARRAY

class StringArray
{
public:
    StringArray();
    StringArray(const char *str);
    StringArray(const StringArray &);
    ~StringArray();

    size_t size() const;

    StringArray &operator=(const StringArray &);
    StringArray &operator=(const char *);
    bool operator==(const StringArray &) const;
    bool operator!=(const StringArray &) const;
    friend std::ostream &operator<<(std::ostream &, const StringArray &);

private:
    int my_size;
    char *my_pdata;
};

#endif
