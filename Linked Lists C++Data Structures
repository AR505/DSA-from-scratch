#include <iostream>
using namespace std;

class Node {
public:
    int Data;
    Node* next;
};

class LinkedList {
public:
    Node* head;

    LinkedList() {
        head = NULL;
    }

    bool isempty() {
        return head == NULL;
    }

    void insertfirst(int user_input) {
        Node* newnode = new Node();
        newnode->Data = user_input;

        if (isempty()) {
            newnode->next = NULL;
            head = newnode;
        } else {
            newnode->next = head;
            head = newnode;
        }
    }

    void print() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->Data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    int count() {
        int counter = 0;
        Node* temp = head;
        while (temp != NULL) {
            counter++;
            temp = temp->next;
        }
        return counter;
    }

    bool isfound(int user_input) {
        Node* temp = head;
        while (temp != NULL) {
            if (temp->Data == user_input) {
                return true;
            }
            temp = temp->next;
        }
        return false;
    }

    void itemaddinitems(int item, int data) {
        if (isempty()) {
            cout << "List is empty\n";
            return;
        }

        if (head->Data == item) {
            insertfirst(data);
            return;
        }

        if (isfound(item)) {
            Node* temp = head;
            Node* newnode = new Node();
            newnode->Data = data;

            while (temp != NULL && temp->next != NULL && temp->next->Data != item) {
                temp = temp->next;
            }

            if (temp->next != NULL) {
                newnode->next = temp->next;
                temp->next = newnode;
            }
        } else {
            cout << "Item not found\n";
        }
    }

    void append(int D) {
        if (isempty()) {
            insertfirst(D);
        } else {
            Node* newnode = new Node();
            newnode->Data = D;
            newnode->next = NULL;
            Node* temp = head;

            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newnode;
        }
    }

    void deleteItem(int item) {
        if (isempty()) {
            cout << "List is empty\n";
            return;
        }

        if (head->Data == item) {
            Node* delptr = head;
            head = head->next;
            delete delptr;
            return;
        }

        Node* temp = head;
        while (temp->next != NULL && temp->next->Data != item) {
            temp = temp->next;
        }

        if (temp->next != NULL) {
            Node* delptr = temp->next;
            temp->next = temp->next->next;
            delete delptr;
        } else {
            cout << "Item not found to delete\n";
        }
    }
};

int main() {
    LinkedList list;

    list.insertfirst(20);
    list.insertfirst(10);

    list.append(30);
    list.append(50);

    cout << "Original List: ";
    list.print();
    cout << "Total Elements: " << list.count() << "\n\n";

    list.itemaddinitems(50, 40);
    cout << "After adding 40 before 50: ";
    list.print();

    list.deleteItem(20);
    cout << "After deleting 20: ";
    list.print();
    cout << "\n";

    if (list.isfound(40)) {
        cout << "Item 40 is found in the list.\n";
    } else {
        cout << "Item 40 is NOT found.\n";
    }

    return 0;
}
