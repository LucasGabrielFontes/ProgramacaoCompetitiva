class Solution{
public:
    bool isSubsequence(string s, string t) {

        if (s == "") // Nada esta contido em qualquer coisa (olha Matematica Discreta ai, meu amigo)
            return true;

        char currentLetter = s[0]; // Letra atual da string s que será verificada na string t
        unsigned int count = 0; // Contador para a quantidade de correspondencias e indice para a proxima letra
        const unsigned int limit_count = s.size(); // Tamanho da string s, que sera tratado como limite para o contador count
        for (auto letter: t) {
            if (letter == currentLetter) // Mais uma correspondencia
                count++;

            if (count < limit_count) // O indice da proxima letra ainda e valido
                currentLetter = s[count];
            else if (count == s.size()) // O contador count atingiu seu limite, e todas as letras de s foram encontradas em sequencia na string t. Retorna true
                return true; 
        }

        return false; // Nao e subsequencia, rapaz. Retorna false
    }
};