#include <iostream>
#include <conio.h>
#include <algorithm>
#include <iterator>

using namespace std;
template<typename T>
class List {
private:
    class ListNode {
    public:
        T data;
        ListNode* next;
        ListNode* prev;
        ListNode(T data) {
            this->data = data;
            next = prev = nullptr;
        }
    };
    ListNode* head;
    ListNode* tail;
    int length = 0;
    void output(ListNode* cur) {
        while (cur->next != nullptr) {
            cout << cur->data << " ";
            cur = cur->next;
        }
    }

public:
    List(T v);
    ~List();
    void insert(T data);
    void deletefirst();
    bool compared(List l2) {
        ListNode* e1 = this->head;
        ListNode* e2 = l2.head;

        while (e1 != NULL && e2 != NULL)
        {
            if (e1->data == e2->data) {
                e1 = e1->next;
                e2 = e2->next;
                return true;
            }
            else return false;

        }
    }
    void clear();


    void show() {
        ListNode* cur = head;
        output(cur);
    }

};


template <typename T>
void List<T>::insert(T ndata)
{
    if (head != NULL)
    {
        ListNode* A;
        A = new ListNode(ndata);
        A->next = head;
        A->prev = NULL;
        head->prev = A;
        head = A;
        length++;
    }
    else
    {
        ListNode* A;
        A = new ListNode(ndata);
        A->next = NULL;
        A->prev = NULL;
        head = A;
        tail = A;
        length++;
    }
}


template <typename T>
void List<T>::clear()
{
    ListNode* temp;
    if (head != NULL && tail != NULL)
    {
        do {
            temp = head;
            head = head->next;
            delete temp;
        } while (head != NULL);
    }
}

template<typename T>
List<T>::~List()
{
    clear();
}

template <typename T>
void List<T>::deletefirst()
{
    ListNode* temp = head;
    head = head->next;
    head->prev = nullptr;
    delete temp;
}

template <typename T>
List<T>::List(T v) {
    head = new ListNode(v);
    length++;
}



int main() {
    cout << "lists before using methods" << endl;
    List<int>list1(1);
    list1.insert(5);
    list1.insert(0);
    list1.insert(9);
    list1.insert(8);
    list1.insert(7);
    list1.show();
    cout << endl;

    List<int>list2(1);
    list2.insert(5);
    list2.insert(0);
    list2.insert(9);
    list2.insert(8);
    list2.insert(7);
    list2.insert(6);
    list2.show();
    cout << endl;
    cout << "lists after using methods" << endl;
    list1.insert(23);
    list1.show();
    cout << endl;

    list2.deletefirst();
    list2.show();
    cout << endl;

    bool equals = list1.compared(list2);

    if (equals) {
        cout << "Lists are equal" << endl;
    }
    else
        cout << "Lists aren't equal" << endl;
    list1.clear();
    cout << "list1 deleted" << endl;
    list2.clear();
    cout << "list2 deleted" << endl;
}

