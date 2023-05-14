## Árvore Rubro-Negra

Uma árvore rubro-negra é uma árvore de busca binária com um atributo extra de armazenamento por nó: sua cor, que pode ser VERMELHO ou PRETO. Ao restringir as cores dos nós em qualquer caminho simples desde a raiz até uma folha, as árvores rubro-negras garantem que nenhum caminho tenha mais do que o dobro do comprimento de qualquer outro, de modo que a árvore fique aproximadamente balanceada/equilibrada. 
<!-- De fato, como veremos, a altura de uma árvore rubro-negra com n chaves é no máximo 2 lg(n + 1), que é O(lg n). -->

Ela foi originalmente criada por Rudolf Bayer, em 1972 e chamadas de árvores binárias simétricas. Em 1978 em um trabalho de Leonidas J. Guibas e Robert Sedgewick recebeu o nome atual. 

Cada nó da árvore agora contém os atributos cor, chave, esquerda, direita e pai. Se um filho ou pai de um nó não existir, o atributo de ponteiro correspondente do nó conterá o valor NIL(NADA) ou NULL.
Pense nesses NILs como ponteiros para as folhas (nós externos) da árvore de pesquisa binária e os nós normais, portadores de chaves, como nós internos da árvore.
Uma árvore rubro-negra é uma árvore de busca binária que satisfaz as seguintes propriedades rubro-negras:

1. Cada nó é vermelho ou preto.
2. A raiz é preta.
3. Cada folha (NIL) é preta.
4. Se um nó é vermelho, então ambos os seus filhos são pretos, ou seja, não existem nós vermelhos consecutivos.
5. Para cada nó, todos os caminhos simples do nó ao descendente as folhas contêm o mesmo número de nós pretos.

Denominamos o número de nós pretos em qualquer caminho simples de um nó, sem incluir esse nó, até uma folha, por altura preta do nó.
Pela propriedade 5, a noção de altura preta é bem definida, já que todos os caminhos simples descendentes que partem do nó têm o mesmo número de nós pretos.
Definimos a altura preta de uma árvore vermelho-preto como a altura preta de sua raiz.

Um exemplo de uma Árvore Rubro-Negra é mostrado na figura abaixo.

![](https://github.com/edersonschmeing/estrutura-de-dados-em-c-1/blob/main/arvore-LLRB/imagens/rbt-cormen.png)


## Árvore Rubro-Negra Caída Para a Esquerda (Left-Leaning Red–Black Tree - LLRB) 

Desenvolvida por Robert Sedgewick em 2008, a árvore rubro-negra caída para a esquerda é uma variante da árvore rubro negra. 
Além de satisfazer todas as propriedades da árvore rubro-negra, ela possui uma propriedade extra que dever ser respeitada.

1. Se um nó é vermelho, ele é o filho esquerdo.

<!--
### Rotações

As operações de INSERÇÃO e REMOÇÃO de uma árvores binária de busca, executadas em uma árvore rubro-negra modificam a árvore, violando assima as suas propriedades
Para restabelecer essas propriedades, devemos mudar as cores de alguns nós na árvore e também mudar a estrutura de ponteiros. 
-->

---
