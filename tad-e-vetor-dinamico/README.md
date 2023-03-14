## Estrutura de Dados

Estrutura de Dados é a forma de armazenar e organizar os dados na memoria de um computador de modo que possam ser usados de forma eficiente. Elas podem ser
homogêneas ou heterogêneas.

As homogêneas são conjuntos formados por dados do mesmo tipos: Vetores, Matrizes e Strings.

As heterogêneas são conjuntos formados por tipos de dados diferentes: Registros (Structs).

---

## TAD - Tipo Abstrato de Dados

Um Tipo Abstrato de Dados, ou TAD, é um conjunto de dados estruturados e as operações que podem ser executadas sobre esses dados.

Os dados armazenados podem ser manipulados apenas pelas operações/métodos. 

Vantagens: 
- Ocultamento dos detalhes de representação e implementação, apenas funcionalidades são conhecidas;
- Encapsulamento: Implementação é ocultada, fornece somente interface/operações possíveis do TAD;
- Seguraça: Acesso somente às interface/operações, e não diretamente aos dados;
- Reutilização e flexibilidade: TAD pode ser usado em diferentes aplicações.

Operações mais comuns utilizadas são:
- Criação da estrutura;
- Inclusão/Atualização de um elemento;
- Busca de um elemento;
- Remoção de um elemento.
- Destruição da estrutura;

Modularização: 
- Por convenção os TADs são construídos em arquivos separados. Utilizam-se arquivos de cabeçalho (.h) e de código fonte (.c) para modularizar; 
- O arquivo de cabeçalho e de código fonte devem ter o mesmo nome, alterando apenas a extensão. vetor_dinamico.h e vetor_dinamico.c;
- Possibilidade de “esconder” a implementação de quem usa o TAD;
- Quem utiliza o TAD precisa conhecer apenas as funcionalidades que ele implementa; 
- Arquivo .h: definiçao dos novos tipos de dados, protótipos das funções e variáveis globais;
- Arquivo .c: declaração dos novos tipos de dados e implementação das funções.


![TAD](https://github.com/edersonschmeing/estrutura-de-dados-em-c-1/blob/main/tad-e-vetor-dinamico/tad.png)

<!-- ### Padrões Criacionais

#### - Factory Method -->
