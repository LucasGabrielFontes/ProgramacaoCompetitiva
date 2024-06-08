#include <iostream>
#include "Classes/Personagem.h"
#include "Classes/Canguru.h"

using namespace std;

int main() {

    Canguru *canguru = new Canguru("Lucas", 152, 100, 10);

    cout << canguru->alturaSalto << endl;

    return 0;
}
