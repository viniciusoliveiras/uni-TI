
typedef struct
{
    int chave;

} TipoItem;

typedef struct arvore
{
    TipoItem item;
    struct arvore *esquerda;
    struct arvore *direita;
} TipoArvore;

typedef struct celula
{
    TipoArvore **item;
    struct celula *proximo;
} TipoCelula;

//-----TAD arvore binaria-----

//cria uma arvore binaria vazia
void CriaArvoreBinariaVazia(TipoArvore **arvore);

//testa se a arvore binaria e vazia
int TestaArvoreBinariaVazia(TipoArvore **arvore);

//cria uma arvore binaria
void CriaArvoreBinaria(TipoItem item, TipoArvore **arvore, TipoArvore **esquerda, TipoArvore **direita);

//libera a arvore binaria
TipoArvore *LiberaArvoreBinaria(TipoArvore **arvore);

//verifica se um elemento pertence a arvore binaria
int PertenceArvoreBinaria(TipoArvore **arvore, TipoItem item);

int AlturaDoNo(TipoArvore **arvore, TipoItem item);

//imprime os elementos da arvore binaria
void ImprimeArvoreBinaria(TipoArvore **arvore, int l);

//percorre os elementos da arvore binaria em pre-ordem
void PercorreArvoreBinariaPreOrdem(TipoArvore **arvore);

//percorre os elementos da arvore binaria em ordem simetrica / em-ordem
void PercorreArvoreBinariaOrdemSimetrica(TipoArvore **arvore);

//percorre os elementos da arvore binaria em pos-ordem
void PercorreArvoreBinariaPosOrdem(TipoArvore **arvore);

//percorre os elementos da arvore binaria em nivel
void PercorreArvoreBinariaLargura(TipoArvore **arvore);

//percorre os elementos da arvore binaria em nivel
void PercorreArvoreBinariaProfundidade(TipoArvore **arvore);

//calcula a altura de um no da arvore binaria
int CalculaAlturaArvoreBinaria(TipoArvore **arvore);
