typedef struct aluno Aluno;

Aluno *criarAluno(char *nome, char *prontuario);
char *obterProntuario(Aluno *aluno);
char *obterNome(Aluno *aluno);
void liberarAluno(Aluno *aluno);
