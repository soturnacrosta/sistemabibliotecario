Software bibliotecário 

 

Desenvolvimento: 

O software bibliotecário foi desenvolvido na linguagem C através do ambiente Linux e IDE Visual Code Studio. A escolha se deve a facilidade do desenvolvedor com as ferramentas e a maneabilidade do ambiente Linux para programação. A linguagem C é também uma linguagem simples, porém desafiadora, ótima para aprendizagem. 

Os Sprints terão em média três dias de desenvolvimento, devido à baixa complexidade do projeto. Cada Sprint terá um objetivo claro definido, essa definição que separarão as Sprints. 

Product backlog: 

Criar um sistema simples de gerenciamento de um acervo de livros usando conceitos de alocação dinâmica, ponteiros e arquivos, com a possibilidade de atualizar, consultar e remover dados de livros; desenvolver um sistema que permita ao usuário cadastrar, listar, remover e atualizar livros de uma biblioteca. O sistema deve persistir os dados em um arquivo binário e permitir consulta e remoção de livros por título ou autor. 

1.Cadastro de livros: O sistema deve permitir ao usuário inserir as informações de vários livros.  

2.Atualização de dados: O sistema deve permitir ao usuário atualizar as informações de um livro já cadastrado (por exemplo, atualizar o título, autor ou número de páginas). 3.Consulta de livro: O sistema deve permitir a busca de um livro por título ou autor e exibir seus detalhes.  

4.Remoção de livro: O sistema deve permitir a remoção de um livro baseado no título ou autor.  

5.Persistência de dados: Os dados dos livros devem ser salvos em um arquivo binário e carregados do arquivo ao iniciar o programa.  

6.Estruturas e ponteiros: Utilize structs para armazenar as informações dos livros. Utilize ponteiros e alocação dinâmica para gerenciar a memória.  

7.Manipulação de arquivos: Os dados dos livros devem ser armazenados em um arquivo binário, com leitura e gravação dos dados. O sistema deve permitir atualizar o arquivo quando necessário. 

Sprint 1: 

Sprint Planning:  Esse foi o início do projeto. Nessa Sprint, serão abordadas implementações de funções de registro e consulta de livros, além de validações de escolhas. Será iniciado também a documentação do software; 

Ocorrerão implementações de função de registro e consulta de livros por título, autor e no caso de registro, também páginas; 

As funções de registro e consulta são as funções básicas desse sistema bibliotecário. Com ambos, poderemos também criar as funções de atualizar e remover cadastro – ambas utilizam e consultam registros já criados;  

Daily Scrum 1: Início de desenvolvimento das funções de registro e consultas de livros; 

- Testes em tempo real;	 

Daily Scrum 2:  - Desenvolvimento das funções de registro e consultas de livros, mas houveram problemas na execução do programa; 

- Estudos sobre alocação dinâmica; 

- Início de desenvolvimento da documentação; 

- Sincronização com repositório remoto para backup do projeto; 

- Testes em tempo real;	 

Daily Scrum 3:  - Finalização da construção das funções de registro e consultas. Agora são permitidas consultas de registros antigos e novos, sem quebrar o programa;  

- Início do desenvolvimento da função de atualizar cadastros de livros; 

- Implementada função de atualização de cadastros, porém a atualização de título de livro não está funcionando adequadamente; 

- Sincronização com repositório remoto para backup do projeto; 

- Testes em tempo real. 

Sprint Review: As funções de registrar livros e consultá-los foram devidamente implementadas. O uso de alocação dinâmica e ponteiros foram bem sucedidas até esse ponto. Foi entregue parcialmente a função de atualizar cadastros.  

Sprint Retrospective: A Sprint somou bastante como conhecimento. A utilização de alocação dinâmica me era obscuro até então e utilizá-lo em um projeto clareou bastante as coisas. Embora seja difícil e com muitos erros de controle de memória, torna o programa mais limpo.  

O Git foi realmente um problema. É confuso deixar sincronizado o repositório local e o repositório remoto, assim causando conflitos e muita dor de cabeça. Mas de certa forma deram certo as sincronizações. 

Embora todas as funções tenham seus desafios, o maior desafio até então foi o de atualizar cadastros.	 

Sprint 2: 

Sprint Planning: Esse Sprint sucede as implementações do primeiro Sprint: como registro e consulta foram sucesso, não haverá em um primeiro momento modificações nelas; mas a função de atualizar cadastro está com problema em retornar o novo valor na opção de atualizar títulos;  

Será corrigido o problema na função de atualizar cadastros e também implementação de remoção dos cadastros; 

A função de atualizar cadastros deve ocorrer sem problemas, tendo em vista que ela torna eficiente o processo de modificar registros, sem que o usuário tenha que remover registro X e depois criá-lo novamente. Apenas escolher e atualizar. A remoção de cadastros também é importante para controle de registros. 

Daily Scrum 1: - Desenvolvimento finalizado da função de atualizar cadastros; 

- Início do desenvolvimento da função remover cadastros de livros. O 	mesmo 	está funcional, mas ao aplicar testes via Valgrind, que 		verifica erros de memória 	em programas via MEMCHECK, ele aponta 	cerca de 70 erros gerados nessa função; 

- Testes via Valgrind; 

- Sincronização com repositório remoto para backup do projeto. 

 
