#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {

    char *titulo;
    char *autor;
    int paginas; 

} livro;

typedef struct {
    char *tituloBusca;
    char *novos_dados;
    int opcao; 

} buscarDados;

void liberarLivro (livro *book){

    free (book->titulo);
    free (book->autor);

}

void atualizarCadastro(FILE *arquivoBin, char* tituloBusca, char* novos_dados, int opcao);

int main () {

    /* Leia os dados de um conjunto de pessoas (nome, idade, altura).
    Grave esses dados em um arquivo binário.
    Leia os dados do arquivo e os exiba no console.*/

    char condicao = 0;
    char *pesquisaLivro;
    int encontrado; 
    livro cadastro; //lembre-se de criar uma variável para a typedef 

    pesquisaLivro = malloc (50* sizeof (char));

        FILE *arquivoBin = fopen ("biblioteca.dat", "rb+");

        if (arquivoBin == NULL){

            printf ("Erro ao abrir arquivo!");
            arquivoBin = fopen ("biblioteca.dat", "wb+"); //não devemos declarar novamente o FILE, apenas chamar a variável arquivo

            return 1;

        }

        printf ("Olá, digite 'R' para registrar uma pessoa, 'C' para consultar, 'A' para atualizar cadastro e 'F' para finalizar: \n");
        scanf (" %c", &condicao);


            if (condicao == 'f' || condicao == 'F'){

                printf ("Fechando...\n");

            }

            while (condicao == 'r' || condicao == 'R'){

                cadastro.titulo = malloc (50 * sizeof (char));
                cadastro.autor = malloc (50 * sizeof (char));
                
                printf("Digite o título do livro: \n");
                scanf(" %49[^\n]", cadastro.titulo);  // Usar %[^\n] para ler a string com espaços

                printf("Digite o autor do livro: \n");
                scanf(" %49[^\n]", cadastro.autor);

                printf("Digite o número de páginas: \n");
                scanf("%d", &cadastro.paginas);

                printf ("Digite 'R' para continuar, 'C' para consultar cadastros e 'F' para encerrar: \n");
                scanf (" %c", &condicao);

                printf ("Cadastro realizado.\n");

                //REPOSICIONAR O CURSOR APÓS ENTRADA DE DADOS PARA GRAVAR
                fseek(arquivoBin, 0, SEEK_END);

                //dessa vez, é necessário escrever um por um pois são ponteiros para variáveis
                //gravar as strings e não os ponteiros
                //Ao gravar as strings no arquivo, é necessário usar o strlen(cadastro.titulo) + 1 para garantir que a string seja escrita com a terminação nula.
                //UTILIZE SITE_T PARA ESPECIFICAR O TAMANHO DA STRING ANTES DE DECLARA
                size_t len_titulo = strlen(cadastro.titulo) + 1;  // Inclui o caractere nulo
                fwrite(&len_titulo, sizeof(size_t), 1, arquivoBin);
                fwrite(cadastro.titulo, sizeof(char), len_titulo, arquivoBin);

                // Gravar o autor
                size_t len_autor = strlen(cadastro.autor) + 1;
                fwrite(&len_autor, sizeof(size_t), 1, arquivoBin);
                fwrite(cadastro.autor, sizeof(char), len_autor, arquivoBin);

                // Gravar o número de páginas
                fwrite(&cadastro.paginas, sizeof(int), 1, arquivoBin);
                printf ("paginasss %d", cadastro.paginas);

                printf ("%s, %s, %d\n", cadastro.titulo, cadastro.autor, cadastro.paginas);

                liberarLivro (&cadastro);
                
                if (condicao == 'f' || condicao == 'F'){

                    break;

                }

            }

            while (condicao == 'c' || condicao == 'C'){

                encontrado = 0; 

                printf ("Digite do livro ou ator que deseja pesquisar os dados: \n");
                scanf(" %49[^\n]", pesquisaLivro);

                rewind(arquivoBin);

                //ELE PRECISA PERCORRER TODO O ARQUIVO ATRAVÉS DE LOOP PARA RECONHECER CADASTRO POR CADASTRO E MOSTRAR A CONSULTA. SE NÃO USAR LOOP, ELE SÓ VAI PEGAR
                //O ÚLTIMO CADASTRO!!
                while (1){

                    size_t len_titulo;
                    size_t len_autor;
                        
                    cadastro.titulo = malloc (50 * sizeof (char));
                    cadastro.autor = malloc (100* sizeof (char));

                            if (cadastro.autor == NULL) {
                                printf("Erro de alocação de memória para autor!\n");
                                free(pesquisaLivro);  // Libera a memória antes de sair
                                return 1;
                            }

                        //leitura um por um e só para se tornar verdadeiro
                        if (fread(&len_titulo, sizeof(size_t), 1, arquivoBin) != 1) break;
                        cadastro.titulo = realloc(cadastro.titulo, len_titulo * sizeof(char));
                        fread(cadastro.titulo, sizeof(char), len_titulo, arquivoBin);

                        if (fread(&len_autor, sizeof(size_t), 1, arquivoBin) != 1) break;
                        cadastro.autor = realloc(cadastro.autor, len_autor * sizeof(char));
                        fread(cadastro.autor, sizeof(char), len_autor, arquivoBin);

                        if (fread(&cadastro.paginas, sizeof(int), 1, arquivoBin) != 1) {
                                
                                free(cadastro.titulo);
                                free(cadastro.autor);
                                break;
                        }

                    //strcmp deve ser usado duas vezes para duas comparações no laço
                    if  (strcmp(pesquisaLivro, cadastro.titulo) == 0 || strcmp (pesquisaLivro, cadastro.autor) == 0){

                        printf ("Título: %s, Autor: %s, Número de páginas: %d.\n", cadastro.titulo, cadastro.autor, cadastro.paginas);

                            printf ("Digite 'C' para continuar e 'F' para sair.\n");
                            scanf (" %c", &condicao);
                        
                        encontrado = 1;
                        
                        break;

                    }

                    liberarLivro(&cadastro);
 
                }

                    //ambos devem ser verdadeiros
                    if (strcmp(pesquisaLivro, cadastro.titulo) != 0 && strcmp (pesquisaLivro, cadastro.autor) != 0) {

                        printf ("Livro não encontrado.\n");
                        printf ("Digite 'C' para continuar e 'F' para sair.\n");
                        scanf (" %c", &condicao);

                    }

                if (condicao == 'F' || condicao == 'f'){

                    printf ("Fechando...\n");

                    liberarLivro (&cadastro);

                }
            
            }

            while (condicao == 'a' || condicao == 'A') {
                
                buscarDados busca;
                busca.tituloBusca = malloc(50 * sizeof(char));
                busca.novos_dados = malloc(50 * sizeof(char));


                printf("Digite o título atualização: ");
                scanf(" %49[^\n]", busca.tituloBusca);
                printf("Digite os novos dados para atualização: ");
                scanf(" %49[^\n]", busca.novos_dados);
                printf("Digite a opção de atualização: ");
                scanf("%d", &busca.opcao);

                atualizarCadastro(arquivoBin, busca.tituloBusca, busca.novos_dados, busca.opcao);

                printf("Digite 'A' para continuar a atualizar ou 'F' para finalizar: ");
                scanf(" %c", &condicao);

                free(busca.tituloBusca);
                free(busca.novos_dados);

            }

        
    
    fclose (arquivoBin);
    free(pesquisaLivro);
    
    return (0);

}

void atualizarCadastro(FILE *arquivoBin, char* tituloBusca, char* novos_dados, int opcao) {
    
    livro cadastro;
    size_t len_titulo, len_autor;
    rewind(arquivoBin);

        while (fread(&len_titulo, sizeof(size_t), 1, arquivoBin) == 1) {
            cadastro.titulo = malloc(len_titulo * sizeof(char));
            fread(cadastro.titulo, sizeof(char), len_titulo, arquivoBin);

            fread(&len_autor, sizeof(size_t), 1, arquivoBin);
            cadastro.autor = malloc(len_autor * sizeof(char));
            fread(cadastro.autor, sizeof(char), len_autor, arquivoBin);

            fread(&cadastro.paginas, sizeof(int), 1, arquivoBin);

            if (strcmp(tituloBusca, cadastro.titulo) == 0 || strcmp(tituloBusca, cadastro.autor) == 0) {
                printf("Livro encontrado: %s, %s, %d\n", cadastro.titulo, cadastro.autor, cadastro.paginas);

                if (opcao == 1) {
                    free(cadastro.titulo);
                    len_titulo = strlen(novos_dados) + 1;
                    cadastro.titulo = malloc(strlen(novos_dados) + 1);
                    strcpy(cadastro.titulo, novos_dados);

                }

                else if (opcao == 2) { // Atualizar autor

                    free(cadastro.autor);
                    cadastro.autor = malloc(strlen(novos_dados) + 1);
                    strcpy(cadastro.autor, novos_dados);
                    len_autor = strlen(cadastro.autor) + 1; // Atualiza o tamanho do autor

                } else if (opcao == 3) { // Atualizar número de páginas

                    cadastro.paginas = atoi(novos_dados); // Converte o novo dado para inteiro
                }

                long deslocamento = -(long)(sizeof(size_t) + len_titulo + sizeof(size_t) + len_autor + sizeof(int));
                fseek(arquivoBin, deslocamento, SEEK_CUR);

                fwrite(&len_titulo, sizeof(size_t), 1, arquivoBin);
                fwrite(cadastro.titulo, sizeof(char), len_titulo, arquivoBin);

                fwrite(&len_autor, sizeof(size_t), 1, arquivoBin);
                fwrite(cadastro.autor, sizeof(char), len_autor, arquivoBin);

                fwrite(&cadastro.paginas, sizeof(int), 1, arquivoBin);

                printf("Cadastro atualizado.\n");
                break;
            }

        liberarLivro(&cadastro);
    }

}