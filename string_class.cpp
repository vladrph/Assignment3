//
// Created by VladR on 9/22/2021.
//

#include "string_class.h"
#include <iostream>
#include <cstring>
using namespace std;


string_class::string_class() {

   this->current_string = "";
   // current_string = "";



}

string_class::string_class(const string& current_string) {

 this->current_string =current_string;

}

bool string_class::palindrome(){
    int capacity = current_string.length();

    char char_array[capacity + 1];


    strcpy(char_array, current_string.c_str());


    int flag =0;
    int x = capacity -1;
    for (int i = 0; i < capacity; i++)
    {


        if(char_array[i] != char_array[x])
        {
            flag =1;
            break;
        }
        else
        {
            flag =0;
            break;
        }

    }
    if(flag ==1){
        return false;
    }
    else{
        return true;
    }


}
void string_class::replace_all(std::string old_substring,std::string new_substring){



}

ostream &operator<<( ostream &out, const string_class& current_string){
    return out;
}



/*
const string &string_class::getCurrentString() const {
    return current_string;
}

void string_class::setCurrentString(const string &currentString) {
    current_string = currentString;
}
*/