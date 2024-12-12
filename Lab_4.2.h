#pragma once

#include "Lab_4.h"

class DautherString : public String {

public:
    DautherString();
    DautherString(std::string_view newStr);

    void SetStr(std::string_view newStr) override;
    int Strcmp(std::string_view other) const override;
    void STRING() override;
    void Print_at(int x, int y) const;
};


