#include "database.h"

int main() {
    Email e("jakub.leng@seznam.cz","petr.novak@gmail.com","Ahoj Petre ...");
    Person p("Jakub",22,183);
    Documents d("main","cpp",50);
    cout << "Email od:" << e.ShowFrom() << endl << "pro:" << e.ShowTo()<<endl << "obsah:" << e.ShowMessage() << endl;
    cout << "Jmeno Vlastnika emailu:" << p.ShowName() << endl << "Vek:" << p.ShowAge() << endl << "Vyska:" << p.ShowHeight() << endl;
    cout << "Dokument:" << d.ShowName() << "." << d.ShowSuffix() << " ma " << d.ShowPages() << " kB" << endl;
    return 0;
}
