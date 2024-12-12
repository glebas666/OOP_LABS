#pragma once

#include <string>
#include <string_view>
#include <iostream>

using namespace std;

class String {
protected:
    string str;

public:
    String();
    String(std::string_view newStr);
    virtual ~String();

    virtual void SetStr(std::string_view newStr);
    virtual void STRING();
    virtual int Strcmp(std::string_view other) const;
    void Print() const;
    void Print_at(int x, int y) const;

    std::string_view GetStrView() const;
};
