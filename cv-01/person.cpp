#include"database.h"

Person::Person(){
    name = "";
    age = 0;
    height = 0.0;
}
Person::Person(string n){
    name = n;
    age = 0;
    height = 0.0;
}
Person::Person(string n, int a){
    name = n;
    age = a;
    height = 0.0;
}
Person::Person(string n, int a, float h){
    name = n;
    age = a;
    height = h;
}