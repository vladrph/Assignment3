//
// Created by VladR on 9/22/2021.
//

#ifndef ASSIGNMENT3_STRING_CLASS_H
#define ASSIGNMENT3_STRING_CLASS_H
#pragma once
#include <string>
using namespace std;


class string_class {


    public:
        string_class();
        string_class(const string &);

    const string &getCurrentString() const;

    void setCurrentString(const string &currentString);
    bool palindrome();

    void replace_all(string old_substring, string new_substring);

private:
        string current_string;
    friend std::ostream  & operator<<(std::ostream & out, string_class& org)
        {
            return out;
        }



};


#endif //ASSIGNMENT3_STRING_CLASS_H
