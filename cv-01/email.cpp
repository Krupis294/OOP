#include"database.h"

Email::Email(){
    from = "";
    to = "";
    message = "";
}

Email::Email(string f){
    from = f;
    to = "";
    message = "";
}
Email::Email(string f, string t){
    from = f;
    to = t;
    message = "";
}
Email::Email(string f, string t, string m){
    from = f;
    to = t;
    message = m;
}