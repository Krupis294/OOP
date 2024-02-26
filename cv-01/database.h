#ifndef database_h
#define database_h

#include <iostream>

using namespace std;

class Email{
    private:
        string from,to,message;
    public:
        Email();
        Email(string f);
        Email(string f, string t);
        Email(string f, string t, string m);

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
        Person();
        Person(string n);
        Person(string n, int a);
        Person(string n, int a, float h);

        string ShowName() { return name;};
        int ShowAge() { return age;};
        float ShowHeight() { return height;};
};

class Documents{
    private:
        string name,suffix;
        int pages;
    public:
        Documents();
        Documents(string n);
        Documents(string n, string s);
        Documents(string n, string s, int p);

        string ShowName() { return name;};
        string ShowSuffix() { return suffix;};
        int ShowPages() { return pages;};
};

#endif