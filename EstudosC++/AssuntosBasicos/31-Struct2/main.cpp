#include <iostream>
#include <sstream>

using namespace std;

struct estudante {
	
	string nome;
	string matricula;
	string curso;
	float CRA;
	
	void setNome (string stNome) {
		nome = stNome;
	}
	
	void setMatricula (string stMatricula) {
		matricula = stMatricula;
	}
	
	void setCurso (string stCurso) {
		curso = stCurso;
	}
	
	void setCRA (float stCRA) {
		CRA = stCRA;
	}
	
	void setAll (string stNome, string stMatricula, string stCurso, float stCRA) {
		nome = stNome;
		matricula = stMatricula;
		curso = stCurso;
		CRA = stCRA;
	}
	
	string toString () {
		stringstream ss;
		ss << CRA;
		string strCRA = ss.str(); // Atualmente, na biblioteca string, já é possível utilizar o metodo to_string para transformar qualquer numero em string
		return "Aluno: " + nome + "\nMatricula: " + matricula + "\nCurso: " + curso + "\nCRA: " + strCRA + "\n";
	}
	
};

int main () {

    estudante estudante1;
    
    estudante1.setAll("Lucas Gabriel Fontes da Silva", "25895547859", "Ciencia da Computacao", 9.47);
    
    cout << estudante1.toString();

    return 0;

}
