/*
** EXPORTED TYPES
*/

typedef struct
{
  int key;
}TypeItem;

typedef struct cell
{
  TypeItem item;
  struct cell *next;
}TypeCell;

typedef struct 
{
  TypeCell *first;
  TypeCell *last;
}TypeList;

/*
** EXPORTED FUNCTIONS
*/

// create empty list
void createList(TypeList *list);

// make sure the list is empty
int checkEmptyList(TypeList *list);

// enter a new number in the list
void insertNumber(TypeList *list, TypeItem item);

// this function prints the entire list on the screen
void printList(TypeList *list);

// function to calculate the length of the list
int listLength(TypeList *list);

// print the list size on the screen
void printListLength(TypeList *list);
