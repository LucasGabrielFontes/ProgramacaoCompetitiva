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
		string strCRA = ss.str(); // Atualmente, na biblioteca string, j? ? poss?vel utilizar o metodo to_string para transformar qualquer numero em string
		return "Aluno: " + nome + "\nMatricula: " + matricula + "\nCurso: " + curso + "\nCRA: " + strCRA + "\n";
	}
	
};

int main () {

    estudante *estudantes = new estudante[5];
    estudante estudante1, estudante2, estudante3, estudante4, estudante5;
    
    estudantes[0] = estudante1;
    estudantes[1] = estudante2;
    estudantes[2] = estudante3;
    estudantes[3] = estudante4;
    estudantes[4] = estudante5;
    
    estudantes[0].setAll("A", "0000000000", "Psicologia", 5);
    estudantes[1].setAll("B", "1111111111", "Engenharia da Computacao", 10);
    estudantes[2].setAll("C", "2222222222", "Odontologia", 8);
    estudantes[3].setAll("D", "3333333333", "Engenharia de Pesca", 0);
    estudantes[4].setAll("E", "4444444444", "Direito", 9);
    
    for (int i = 0; i < 5; i++) {
    	cout << estudantes[i].toString() << endl;
	}

    return 0;

}

