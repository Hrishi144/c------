#include <stdio.h>
#include <stdlib.h>

struct poly {
    int coeff;
    int expo;
    struct poly *link;
};

struct poly* create_node(int coeff, int expo) {
    struct poly *new_node = (struct poly*)malloc(sizeof(struct poly));
    new_node->coeff = coeff;
    new_node->expo = expo;
    new_node->link = NULL;
    return new_node;
}

struct poly* insert_node(struct poly *head, int coeff, int expo) {
    struct poly *new_node = create_node(coeff, expo);
    if (head == NULL) {
        return new_node;
    }
    struct poly *ptr = head;
    while (ptr->link != NULL) {
        ptr = ptr->link;
    }
    ptr->link = new_node;
    return head;
}

void display_poly(struct poly *head) {
    if (head == NULL) {
        printf("0");
        return;
    }
    struct poly *ptr = head;
    while (ptr != NULL) {
        printf("%dx^%d", ptr->coeff, ptr->expo);
        ptr = ptr->link;
        if (ptr != NULL) {
            printf(" + ");
        }
    }
    printf("\n");
}

struct poly* poly_add(struct poly *p1, struct poly *p2) {
    struct poly *result = NULL;
    while (p1 != NULL && p2 != NULL) {
        if (p1->expo > p2->expo) {
            result = insert_node(result, p1->coeff, p1->expo);
            p1 = p1->link;
        } else if (p1->expo < p2->expo) {
            result = insert_node(result, p2->coeff, p2->expo);
            p2 = p2->link;
        } else {
            result = insert_node(result, p1->coeff + p2->coeff, p1->expo);
            p1 = p1->link;
            p2 = p2->link;
        }
    }
    while (p1 != NULL) {
        result = insert_node(result, p1->coeff, p1->expo);
        p1 = p1->link;
    }
    while (p2 != NULL) {
        result = insert_node(result, p2->coeff, p2->expo);
        p2 = p2->link;
    }
    return result;
}

int main() {
    struct poly *poly1 = NULL, *poly2 = NULL, *result = NULL;
    int fnterm, snterm, coeff, expo;

    printf("Enter the number of terms in the first polynomial: ");
    scanf("%d", &fnterm);
    for (int i = 0; i < fnterm; i++) {
        printf("Enter coefficient and exponent for term %d: ", i + 1);
        scanf("%d %d", &coeff, &expo);
        poly1 = insert_node(poly1, coeff, expo);
    }

    printf("Enter the number of terms in the second polynomial: ");
    scanf("%d", &snterm);
    for (int i = 0; i < snterm; i++) {
        printf("Enter coefficient and exponent for term %d: ", i + 1);
        scanf("%d %d", &coeff, &expo);
        poly2 = insert_node(poly2, coeff, expo);
    }

    printf("\nFirst Polynomial: ");
    display_poly(poly1);
    printf("Second Polynomial: ");
    display_poly(poly2);

    result = poly_add(poly1, poly2);

    printf("Resultant Polynomial after Addition: ");
    display_poly(result);

    return 0;
}
