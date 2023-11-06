#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node() {
        this->next = NULL;
    }
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

void display(Node* root) {
    Node* temp = root;
    while (temp != NULL) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void insert_begin(Node* &root, int data) {
    if (root == NULL) {
        root = new Node(data);
    } else {
        Node* temp = new Node(data);
        temp->next = root;
        root = temp;
    }
}

void insert_end(Node* &root, int data) {
    if (root == NULL) {
        insert_begin(root, data);
    } else {
        Node* temp = root;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new Node(data);
    }
}

void insertAt_position(Node* &root, int pos, int data) {
    if (pos <= 0) {
        cout << "Invalid position" << endl;
        return;
    }
    if (pos == 1) {
        insert_begin(root, data);
    } else {
        Node* prev;
        Node* ptr = root;
        for (int i = 1; i < pos; i++) {
            prev = ptr;
            if (prev == NULL) {
                cout << "Index " << pos << " is not present" << endl;
                return;
            }
            ptr = ptr->next;
        }
        Node* newnode = new Node(data);
        newnode->next = ptr;
        prev->next = newnode;
    }
}

void delete_begin(Node* &root) {
    if (root == NULL) {
        return;
    }
    Node* temp = root;
    root = root->next;
    delete temp;
}

void delete_end(Node* &root) {
    Node* temp = root;
    if (root == NULL || root->next == NULL) {
        delete root;
        root = NULL;
        return;
    }
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    Node* ptr = temp->next;
    delete ptr;
    temp->next = NULL;
}

void delete_position(Node* &root, int pos) {
    if (pos <= 0) {
        cout << "Invalid position" << endl;
        return;
    }
    if (pos == 1) {
        delete_begin(root);
    } else {
        Node* prev = NULL;
        Node* temp = root;
        for (int i = 1; i < pos; i++) {
            prev = temp;
            temp = temp->next;
            if (temp == NULL) {
                cout << "Position not found" << endl;
                return;
            }
        }
        prev->next = temp->next;
        delete temp;
    }
}

void array_toList(Node* &root, int arr[], int n) {
    for (int i = 0; i < n; i++) {
        insert_end(root,arr[i]);
    }
}

int main() {
    Node* root = NULL;
    int choice, data, position;
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(int);
    cout << "Linked List Menu:" << endl;
    cout << "1. Insert at the beginning" << endl;
    cout << "2. Insert at the end" << endl;
    cout << "3. Insert at a specific position" << endl;
    cout << "4. Delete from the beginning" << endl;
    cout << "5. Delete from the end" << endl;
    cout << "6. Delete from a specific position" << endl;
    cout << "7. Display the linked list" << endl;
    cout << "8. Convert array to list" << endl;
    cout << "9. Exit" << endl;
    while (true) {
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter data to insert at the beginning: ";
                cin >> data;
                insert_begin(root, data);
                display(root);
                break;
            case 2:
                cout << "Enter data to insert at the end: ";
                cin >> data;
                insert_end(root, data);
                display(root);
                break;
            case 3:
                cout << "Enter position to insert: ";
                cin >> position;
                cout << "Enter data to insert at position " << position << ": ";
                cin >> data;
                insertAt_position(root, position, data);
                display(root);
                break;
            case 4:
                delete_begin(root);
                display(root);
                break;
            case 5:
                delete_end(root);
                display(root);
                break;
            case 6:
                cout << "Enter position to delete: ";
                cin >> position;
                delete_position(root, position);
                display(root);
                break;
            case 7:
                display(root);
                break;
            case 8:
                array_toList(root, arr, n);
                display(root);
                break;
            case 9:
                exit(0);
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
