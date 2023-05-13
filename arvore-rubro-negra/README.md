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


![](caminho até a imagem)

---

