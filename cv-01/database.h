#ifndef database_h
#define database_h

#include <iostream>
#include <string>

using namespace std;

class Email{
    private:
        string from,to,message;
    public:
        Email(){
            from = "";
            to = "";
            message = "";
        }   
        Email(string f){
            from = f;
            to = "";
            message = "";
        }
        Email(string f, string t){
            from = f;
            to = t;
            message = "";
        }
        Email(string f, string t, string m){
            from = f;
            to = t;
            message = m;
        }

        string ShowFrom() { return from;};
        string ShowTo() { return to;};
        string ShowMessage() { return message;};
        
};

class Person{
    private:
        string name;
        int age;
        float height;
    public:
        Person(){
        name = "";
        age = 0;
        height = 0.0;
        }
        Person(string n){
            name = n;
            age = 0;
            height = 0.0;
        }
        Person(string n, int a){
            name = n;
            age = a;
            height = 0.0;
            }
        Person(string n, int a, float h){
            name = n;
            age = a;
            height = h;
        }

        string ShowName() { return name;};
        int ShowAge() { return age;};
        float ShowHeight() { return height;};
};

class Documents{
    private:
        string name, suffix;
        int pages;
    public:
        Documents(){
            name = "";
            suffix = "";
            pages = 0;
        }
        Documents(string n){
            name = n;
            suffix = "";
            pages = 0;
        }
        Documents(string n, string s){
            name = n;
            suffix = s;
            pages = 0;
        }
        Documents(string n, string s, int p){
            name = n;
            suffix = s;
            pages = p;
        }

        string ShowName() { return name;};
        string ShowSuffix() { return suffix;};
        int ShowPages() { return pages;};
};

#endif