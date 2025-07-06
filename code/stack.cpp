/**
 * @file stack.cpp
 * @mainpage Dokumentasi Project Stack Linked List
 * @section Deskripsi
 * Program ini merupakan implementasi struktur data stack (tumpukan)
 * mendukung operasi dasar seperti:
 * -push
 * -pop
 * -display
 *
 * @section cara penggunaan
 * jalankan program dan dipilih menu:
 * 1.push
 * 2.pop
 * 3.display
 * 4.exit
 *
 * @section Penulis
 * Nama : Khoirul Arif Pratama
 * NIM  : 20240140011
 */

/**
 * @file stack.cpp
 * @author Khoirul Arif Pratama (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2025.06.23
 *
 * @copyright Copyright (c) 2025
 *
 */

/**
 * @file stack.cpp
 * @author Khoirul Arif Pratama (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2025-06-23
 *
 * @copyright Copyright (c) 2025
 *
 */

#include <iostream>
using namespace std;

// node class representing a single node in the linked list
class Node
{
public:
    int data;   ///< variabel data dengan tipe integer
    Node *next; ///< variabel untuk menyimpan alat memori
    /**
     * @brief Construct a new Node object
     *
     */

    Node()
    {
        next = NULL;
    }
};

// stack class
/**
 * @class stack
 * @brief Class stack
 *
 */
class Stack
{
private:
    Node *top; ///< pointer to the top node of the stack

public:
    Stack()
    {
        top = NULL; ///< initialize the stack with a null top pointer
    }

    // push operation insert an element into the top of the stack
    /**
     * @brief
     *
     * @param value menerima input
     * @return int
     */

    int push(int value)
    {
        Node *newNode = new Node(); /// < 1.Allocate memory for the new node
        newNode->data = value;      /// < 2.assign value
        newNode->next = top;        /// < 3.set the next pointer of the new node to the current top
        top = newNode;              /// < 4.update the top pointer to the new node
        cout << "Push value: " << value << endl;
        return value;
    }

    // isEmpty operation Check if the stack is empty
    /**
     * @brief mengecek apakah stack nya kosong
     *
     * @return true
     * @return false
     */

    bool isEmpty()
    {
        return top = NULL; ///< return true if the top pointer is NULL, idicating an empty
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack is Empty. " << endl;
            return;
        }

        // pop operation : remove the topmost element from the stack
        /**
         * @brief menghapus element paling atas di dalam stack
         *
         */
        cout << " Popped value: " << top->data << endl;
        top = top->next;
    }

    // peek/top operation: retrieve the value of the topmost element without removing it
    /**
     * @brief mengambil nilai dari tempat ter atas tanpa menghapus nilai nya
     *
     */

    void peek()
    {
        if (isEmpty())
        {
            cout << " List is empty. " << endl;
        }
        else
        {
            Node *current = top;
            while (current != NULL)
            {
                cout << current->data << " " << endl;
                current = current->next;
            }
            cout << endl;
        }
    }
};
/**
 * @brief Fungsi utama untuk menjalankan program
 *
 * membuat menu yang dapat membuat pengguna dapat berinteraksi
 *
 * @return int
 */
int main()
{
    Stack stack;

    int choice = 0;
    int value;

    while (choice != 4)
    {
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Exit\n";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << " Enter the value to push: ";
            cin >> value;
            stack.push(value);
            break;
        case 2:
            stack.pop();
            break;
        case 3:
            stack.peek();
            break;
        case 4:
            cout << " Exit program." << endl;
            break;
        default:
            cout << " Invalid choice. Try again." << endl;
            break;
        }
        cout << endl;
    }
    return 0;
}
