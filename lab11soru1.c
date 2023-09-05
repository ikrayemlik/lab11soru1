#include <stdio.h>
#include <stdlib.h>

struct nodes {
    int num;
    struct nodes* next;
};

typedef struct nodes node;

node* head = NULL;

void bastir(void) {
    node* p;
    p = head;
    while (p != NULL) {
        printf("%d\n", p->num);
        p = p->next;
    }
}

int main() {
    int num;

    printf("Lutfen bir sayi giriniz (-1 cikis icin): ");
    scanf("%d", &num);

    while (num != -1) {
        node* newnode = (node*)malloc(sizeof(node));
        newnode->num = num;
        newnode->next = NULL;

        if (head == NULL) {
            head = newnode;
        } else {
            if (num % 2 == 1) {
                newnode->next = head;
                head = newnode;
            } else {
                node* p = head;
                while (p->next != NULL) {
                    p = p->next;
                }
                p->next = newnode;
            }
        }
  printf("Lutfen bir sayi giriniz (-1 cikis icin): ");
    scanf("%d", &num);
    }

    printf("Liste:\n");
    bastir();


    return 0;
}
