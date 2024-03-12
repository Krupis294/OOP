#include "database.h"

Documents::Documents(){
    name = "";
    suffix = "";
    pages = 0;
}
Documents::Documents(string n){
    name = n;
    suffix = "";
    pages = 0;
}
Documents::Documents(string n, string s){
    name = n;
    suffix = s;
    pages = 0;
}
Documents::Documents(string n, string s, int p){
    name = n;
    suffix = s;
    pages = p;
}