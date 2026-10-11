#include <iostream>
using namespace std;

const int MIN_NR = 10, MAX_NR = 99, MIN_LS = 5, MAX_LS = 20;

class Goat {
    private:
        int age;
        string name;
        string color;
        string names[15] = {"Apple", "Blueberry", "Mango", "Banana", "Sherman", "Grizzly", "Klaus", "Fredderick", "Charcuterie",
        "Noodle", "Cutiepie", "Biscuit", "Basket", "Billy", "Gertrude"}; 
        // not a task that requires AI if you have one morsel of creativity
        string colors[15] = {"Red", "Orange", "Yellow", "Green", "Blue", "Purple", "Indigo", "Cream", "Brown", "Black",
        "Light gray", "Dark gray", "Pink", "White", "Jade", "Maroon"}; 
        // wouldn't you rather imagine colorful goats than make an AI imagine regular goat colors? 
        // I sure hope people are still capable of thinking of 15 colors or there's been sone serious brain deterioration from AI
    public:
        // default constructor
        Goat() {
            age = ((rand() & 20) + 1); // random age from 1-20
            name = names[rand() & 16]; // random name from index 0-15
            color = colors[rand() & 16]; // random color from index 0-15 
        }
        Goat(int a, string n, string c) { age = a; name = n; color = c; }

        // defines == opertaor for use in functions
        Goat operator==(const Goat& g) {
            if (age == g.age && name == g.name &&)
        }
}

class DoublyLinkedList {
private:
    struct Node {
        Goat data;
        Node* prev;
        Node* next;
        Node(Goat val, Node* p = nullptr, Node* n = nullptr) {
            data = val; 
            prev = p;
            next = n;
        }
    };

    Node* head;
    Node* tail;

public:
    // constructor
    DoublyLinkedList() { head = nullptr; tail = nullptr; }

    void push_back(Goat value) {
        Node* newNode = new Node(value);
        if (!tail)  // if there's no tail, the list is empty
            head = tail = newNode;
        else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    void push_front(Goat value) {
        Node* newNode = new Node(Goat);
        if (!head)  // if there's no head, the list is empty
            head = tail = newNode;
        else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    /*void insert_after(Goat value, int position) {
        if (position < 0) {
            cout << "Position must be >= 0." << endl;
            return;
        }

        Node* newNode = new Node(value);
        if (!head) {
            head = tail = newNode;
            return;
        }

        Node* temp = head;
        for (int i = 0; i < position && temp; ++i)
            temp = temp->next;

        if (!temp) {
            cout << "Position exceeds list size. Node not inserted.\n";
            delete newNode;
            return;
        }

        newNode->next = temp->next;
        newNode->prev = temp;
        if (temp->next)
            temp->next->prev = newNode;
        else
            tail = newNode; // Inserting at the end
        temp->next = newNode;
    }*/

    void delete_node(Goat value) {
        if (!head) return; // Empty list

        Node* temp = head;
        while (temp && temp->data != value)
            temp = temp->next;

        if (!temp) return; // Value not found

        if (temp->prev) {
            temp->prev->next = temp->next;
        } else {
            head = temp->next; // Deleting the head
        }

        if (temp->next) {
            temp->next->prev = temp->prev;
        } else {
            tail = temp->prev; // Deleting the tail
        }

        delete temp;
    }

    /*void print() {
        Node* current = head;
        if (!current) return;
        while (current) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }

    void print_reverse() {
        Node* current = tail;
        if (!current) return;
        while (current) {
            cout << current->data << " ";
            current = current->prev;
        }
        cout << endl;
    }

    ~DoublyLinkedList() {
        while (head) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }*/
};

// Driver program
int main() {
    cout << "meow\n";

    return 0;
}
