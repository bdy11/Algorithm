struct Node
{
    int data;
    struct Node *next;
};

class linked_list
{
private:
    Node *head;
    Node *tail;

public:
    linked_list()
    {
        head = NULL;
        tail = NULL;
    }


    // insert a new node at the end of the list
    void push_back(int node_data);

    void push_front(int node_data);

    // insert new node after a given node
    void insertAfter(struct Node *prev_node, int node_data);

    // delete a node after a given node
    void del(Node *before_del);

    Node* get_head();

    Node* get_tail();

    // display linked list contents
    void displayList(struct Node *node);

    // reverse linked list
    Node* reverselinkedList(Node* node);
};
