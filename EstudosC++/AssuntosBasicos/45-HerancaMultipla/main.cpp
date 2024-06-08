#include <iostream>
#include "Classes/FilhaDasMaes.h"

using namespace std;

int main() {

    FilhaDasMaes *filhaDasMaes = new FilhaDasMaes("P1", "P2");

    cout << "Variavel de instancia herdada da primeira classe: " << filhaDasMaes->variavelDeInstancia1 << endl;
    cout << "Variavel de instancia herdada da segunda classe: " << filhaDasMaes->variavelDeInstancia2 << endl;

    return 0;
}
