#define TAM 1000

/*
            COOP-ALUNOS
  Mateus Santos de Azevedo - 2020100086
  Rhuan Gonzaga Cunha Francisco - 2020100052
  Victor A. Santos Dionizio - 2020101250
  Vinícius Silva de Oliveira - 2020101398
  Bruno Sanches - 2015102356
*/

typedef struct {
  int chave;
} TipoItem;

typedef struct {
  TipoItem itens[TAM];
  int primeiro, ultimo;
} TipoLista;


void CriaListaVazia(TipoLista *lista);

int TestaListaVazia(TipoLista *lista);

void InsereLista(TipoLista *lista, TipoItem item);

void ImprimeLista(TipoLista *lista);

int quantos_iguais(TipoLista *lista, int aux, int ultimo, int numero);

void remove_lista_num(TipoLista *lista, int num);
