//TAD arvore binaria de busca com alocacao encadeada (dinamica)

//tipo exportado
//define o TipoItem que eh o tipo dos elementos do TAD arvore binaria de busca (classica, AVL e B)
typedef struct
{
    int chave;
    char pacote;
    //outros campos
}TipoItem;

//tipo exportado
//define o TipoCelula que eh o tipo das celulas que contem os elementos que sao manipulados pelo TAD arvore binaria de busca (classica ou AVL)
typedef struct celula
{
    TipoItem item;
    struct celula *esquerda;
    struct celula *direita;
    int balanco; // para o caso de a arvore ser AVL
}TipoCelula;

//-----TAD arvore binaria de busca-----

//funcoes exportadas
//cria uma arvore binaria de busca vazia
void CriaArvoreBinariaBuscaVazia(TipoCelula **arvore);

//testa se a arvore binaria de busca eh vazia
int TestaArvoreBinariaBuscaVazia(TipoCelula **arvore);

//busca por um elemento na arvore binaria de busca
TipoItem * BuscaArvoreBinariaBusca(TipoCelula **arvore, int chave);

//insere um elemento do tipo TipoItem na arvore binaria de busca
void InsereArvoreBinariaBusca(TipoCelula **arvore, TipoItem item);

//remove um elemento do tipo TipoItem da arvore binaria de busca
void RemoveArvoreBinariaBusca(TipoCelula **arvore, TipoItem item);

//imprime os elementos da arvore binaria de busca
void ImprimeArvoreBinariaBusca(TipoCelula **arvore, int l);
