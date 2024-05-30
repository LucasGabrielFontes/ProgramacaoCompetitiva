#include <iostream>

using namespace std;

struct estudante {

    string nome;
    string matricula;
    string curso;
    float cra;

};

int main () {

    estudante estudante1;
    
    estudante1.nome = "Lucas Gabriel Fontes da Silva";
    estudante1.matricula = "20210029225";
    estudante1.curso = "Ciencia da Computacao";
	estudante1.cra = 9.47;
	
	cout << estudante1.nome << ": " << endl << endl << "Matricula: " << estudante1.matricula << endl << "Curso: " << estudante1.curso << endl << "CRA: " << estudante1.cra << endl;    

    return 0;
    
    // Mesma coisa de C basicamente

}
