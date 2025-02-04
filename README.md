Software bibliotecário 

 

Autor: Mailton Olinto de Oliveira Lemos 

 

Objetivo: 

Esse é um projeto que propõe pôr em prática tudo que o autor tem de conhecimento sobre programação e Engenharia de Software. Não obstante, será usado como portfólio pessoal. Os requisitos do projeto são do professor Jonatas de Araujo. 

Desenvolvimento: 

O software bibliotecário foi desenvolvido em linguagem C através do ambiente Linux e IDE Visual Studio Code. A escolha se deve a facilidade do desenvolvedor com as ferramentas e a maneabilidade do ambiente Linux para programação. A linguagem C é também uma linguagem simples, porém desafiadora, ótima para aprendizagem. 

O software teve sua documentação e desenvolvimento baseado em Métodos Ágeis, embora não há de fato um cliente a se entregar os incrementos, a ideia é estabelecer metas por Sprints.  

Os Sprints terão em média três dias de desenvolvimento, devido à baixa complexidade do projeto. Cada Sprint terá um objetivo claro definido, essa definição que separarão as Sprints. 

Definição de pronto: 

Os incrementos devem ser entregues quando atingirem o mínimo necessário, que é a implementação parcialmente funcional de uma função. Ao atingir um estado de funcionalidade, gerando retornos válidos, pode ser considerado pronto, mesmo que gere erros com uso insistente. 

A explicação para essa definição é o intuito do projeto que por ser um estudo, torna-se viável a entrega “parcial” da funcionalidade devida para correções de um suposto cliente/corretor. 

Requisitos: 

Criar um sistema simples de gerenciamento de um acervo de livros usando conceitos de alocação dinâmica, ponteiros e arquivos, com a possibilidade de atualizar, consultar e remover dados de livros; desenvolver um sistema que permita ao usuário cadastrar, listar, remover e atualizar livros de uma biblioteca. O sistema deve persistir os dados em um arquivo binário e permitir consulta e remoção de livros por título ou autor. 

1.Cadastro de livros: O sistema deve permitir ao usuário inserir as informações de vários livros.  

2.Atualização de dados: O sistema deve permitir ao usuário atualizar as informações de um livro já cadastrado (por exemplo, atualizar o título, autor ou número de páginas). 3.Consulta de livro: O sistema deve permitir a busca de um livro por título ou autor e exibir seus detalhes.  

4.Remoção de livro: O sistema deve permitir a remoção de um livro baseado no título ou autor.  

5.Persistência de dados: Os dados dos livros devem ser salvos em um arquivo binário e carregados do arquivo ao iniciar o programa.  

6.Estruturas e ponteiros: Utilize structs para armazenar as informações dos livros. Utilize ponteiros e alocação dinâmica para gerenciar a memória.  

7.Manipulação de arquivos: Os dados dos livros devem ser armazenados em um arquivo binário, com leitura e gravação dos dados. O sistema deve permitir atualizar o arquivo quando necessário. 

Sprint 1: 

Requisitos da Sprint: Nesse Sprint serão desenvolvidas as funções básicas do software: registro e consulta de livros. Para isso, serão feitos estudos sobre alocação dinâmica na internet e uso de IA para tal. Os itens do Product Backlog serão: 

1.Cadastro de livros: O sistema deve permitir ao usuário inserir as informações de vários livros. 

3.Consulta de livro: O sistema deve permitir a busca de um livro por título ou autor e exibir seus detalhes. 

5.Persistência de dados: Os dados dos livros devem ser salvos em um arquivo binário e carregados do arquivo ao iniciar o programa.  

6.Estruturas e ponteiros: Utilize structs para armazenar as informações dos livros. Utilize ponteiros e alocação dinâmica para gerenciar a memória.  

7.Manipulação de arquivos: Os dados dos livros devem ser armazenados em um arquivo binário, com leitura e gravação dos dados. O sistema deve permitir atualizar o arquivo quando necessário. 

Planejamento: Esse foi o início do projeto. Nessa Sprint, serão abordadas implementações de funções de registro e consulta de livros, além de validações de escolhas. Será iniciado também a documentação do software; 

Ocorrerão implementações de função de registro e consulta de livros por título, autor e no caso de registro, também páginas; 

As funções de registro e consulta são as funções básicas desse sistema bibliotecário. Com ambos, poderemos também criar as funções de atualizar e remover cadastro – ambas utilizam e consultam registros já criados;  

Dia 1: 

- Início de desenvolvimento das funções de registro e consultas de livros; 

- Testes em tempo real;	 

Dia 2:   

- Desenvolvimento das funções de registro e consultas de livros, mas houveram problemas na execução do programa; 

- Estudos sobre alocação dinâmica; 

- Início de desenvolvimento da documentação; 

- Sincronização com repositório remoto para backup do projeto; 

- Testes em tempo real;	 

Dia 3:  - Finalização da construção das funções de registro e consultas. Agora são permitidas consultas de registros antigos e novos, sem quebrar o programa;  

- Início do desenvolvimento da função de atualizar cadastros de livros; 

- Implementada função de atualização de cadastros, porém a atualização de título de livro não está funcionando adequadamente; 

- Sincronização com repositório remoto para backup do projeto; 

- Testes em tempo real. 

Incrementos:  

- Registrar livros entregue funcionalmente; 

- Consultar livros entregue funcionalmente; 

- Atualizar livros entregue funcionalmente. 

Revisão: As funções de registrar livros e consultá-los foram devidamente implementadas. O uso de alocação dinâmica e ponteiros foram bem sucedidas até esse ponto. Foi entregue a função de atualizar cadastros com erros. O uso de arquivo binário e structs também foi entregue. 

Retrospectiva: A Sprint somou bastante conhecimento. A utilização de alocação dinâmica era obscura até então e utilizá-lo em um projeto clareou bastante as coisas. Embora seja difícil e com muitos erros de controle de memória, torna o programa mais limpo.  

O Git foi realmente um problema. É confuso deixar sincronizado o repositório local e o repositório remoto, assim causando conflitos e muita dor de cabeça. Mas de certa forma deram certo as sincronizações. 

Embora todas as funções tenham seus desafios, o maior desafio até então foi o de atualizar cadastros.	 

Sprint 2: 

Requisitos da Sprint: Esse Sprint tem como objetivo entregar as funções de atualização e remoção de livros, bem como correção de erros. Para tal, será utilizado canais de pesquisa online como StakOverflow e IA. Os itens do Product Backlog são: 

2.Atualização de dados: O sistema deve permitir ao usuário atualizar as informações de um livro já cadastrado (por exemplo, atualizar o título, autor ou número de páginas). 

4.Remoção de livro: O sistema deve permitir a remoção de um livro baseado no título ou autor. 

Planejamento: Esse Sprint sucede as implementações do primeiro Sprint: como registro e consulta foram sucesso, não haverá em um primeiro momento modificações nelas; mas a função de atualizar cadastro está com problema em retornar o novo valor na opção de atualizar títulos;  

Será corrigido o problema na função de atualizar cadastros e será implementada a função de remoção dos cadastros; 

A função de atualizar cadastros deve ocorrer sem problemas, tendo em vista que ela torna eficiente o processo de modificar registros, sem que o usuário tenha que remover registro X e depois criá-lo novamente. Apenas escolher e atualizar. A remoção de cadastros também é importante para controle de registros. 

Dia 1:  

- Desenvolvimento finalizado da função de atualizar cadastros; 

- Início do desenvolvimento da função remover cadastros de livros. O mesmo está funcional, mas ao aplicar testes via Valgrind, que verifica erros de memória em programas via MEMCHECK, ele aponta cerca de 70 erros gerados nessa função; 

- Testes via Valgrind; 

- Sincronização com repositório remoto para backup do projeto. 

Dia 2:  

- Finalização das implementações das funções de atualizar e remover cadastro; 

- Correção de bugs nas funções atualizar e remover cadastro; 

- Testes via Valgrind , ADRESS SANITIZER e de compilação no VSCODE; 

- Programa encontra-se funcional; 

- Avanço na documentação; 

- Sincronia com o repositório remoto; 

- Release da versão 1.0.	 

Incrementos: - Atualizar livro entregue funcionalmente; 

- Remover livro entregue funcionalmente; 

- Versão 1.0 do software entregue. 

Revisão Essa Sprint teve como maior resultado o lançamento da versão 1.0 do Sistema Bibliotecário. Para isso, as funções de atualizar e remover cadastro foram implementadas funcionalmente. Os problemas de gerenciamento de memória foram quase todos erradicados. Atendidas os requisitos de utilização de ponteiros, alocação dinâmica, structs e arquivo binário. 

Retrospectiva: Os maiores problemas encontrados foram no gerenciamento de memória, através de diagnósticos do Valgrind e ADRESS SINTETIZER. Houve enormes avanços quantos esses leaks na memória, mas restou uma (1) mensagem de erro a ser revisada. Mas o programa encontra-se funcional, com resultado satisfatório. 

O uso de softwares para diagnóstico de gerenciamento de memória foi de suma importância para entender o que havia de errado na estrutura do algoritmo. 

Evolução: Agora o software está completamente funcional, com todas as funções requisitadas atendidas e com validações de escolhas claras. 

Versão 1.0.1: 

- Retirados mensagens de depuração. 
