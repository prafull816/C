#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
struct Node* createNode(int data);
struct Node* insertNode(struct Node* head, int data, int position);
struct Node* deleteNode(struct Node* head, int data);
struct Node* reverseList(struct Node* head);
int searchNode(struct Node* head, int data);
int countNodes(struct Node* head);
void displayList(struct Node* head);
void freeList(struct Node* head);
int main() {
    struct Node* head = NULL;
    int choice, data, position;
     do {
        printf("\n----- Singly Linked List Menu -----\n");
        printf("1. Create a node\n");
        printf("2. Insert a node\n");
        printf("3. Delete a node\n");
        printf("4. Reverse the list\n");
        printf("5. Search for a node\n");
        printf("6. Count nodes\n");
        printf("7. Display the list\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
   switch (choice) {
            case 1:
                printf("Enter data for the new node: ");
                scanf("%d", &data);
                head = createNode(data);
                printf("Node created successfully.\n");
                break;
               case 2:
                printf("Enter data for the new node: ");
                scanf("%d", &data);
                printf("Enter position to insert the node: ");
                scanf("%d", &position);
                head = insertNode(head, data, position);
                break;

            case 3:
                printf("Enter data to delete: ");
                scanf("%d", &data);
                head = deleteNode(head, data);
                break;

            case 4:
                head = reverseList(head);
                printf("List reversed successfully.\n");
                break;

            case 5:
                printf("Enter data to search: ");
                scanf("%d", &data);
                if (searchNode(head, data))
                    printf("Node found in the list.\n");
                else
                    printf("Node not found in the list.\n");
                break;

            case 6:
                printf("Number of nodes in the list: %d\n", countNodes(head));
                break;

            case 7:
                displayList(head);
                break;

            case 8:
                freeList(head);
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 8);

    return 0;
}
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
struct Node* insertNode(struct Node* head, int data, int position) {
    struct Node* newNode = createNode(data);

    if (position == 1) {
        newNode->next = head;
        return newNode;
    }

    struct Node* temp = head;
    for (int i = 1; i < position - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Invalid position. Insertion failed.\n");
        free(newNode);
    } else {
        newNode->next = temp->next;
        temp->next = newNode;
        printf("Node inserted successfully.\n");
    }

    return head;
}
struct Node* deleteNode(struct Node* head, int data) {
    struct Node* temp = head;
    struct Node* prev = NULL;

    while (temp != NULL && temp->data != data) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Node not found. Deletion failed.\n");
    } else {
        if (prev == NULL) {
            head = temp->next;
        } else {
            prev->next = temp->next;
        }
        printf("Node deleted successfully.\n");
        free(temp);
    }

    return head;
}
struct Node* reverseList(struct Node* head) {
    struct Node* prev = NULL;
    struct Node* current = head;
    struct Node* next = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    return prev;
}
int searchNode(struct Node* head, int data) {
    struct Node* temp = head;

    while (temp != NULL) {
        if (temp->data == data) {
            return 1; 
        }
        temp = temp->next;
    }

    return 0; 
}
int countNodes(struct Node* head) {
    int count = 0;
    struct Node* temp = head;

    while (temp != NULL) {
        count++;
        temp = temp->next;
    }

    return count;
}
void displayList(struct Node* head) {
    struct Node* temp = head;

    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
void freeList(struct Node* head) {
    struct Node* temp;

    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}
