class MyLinkedList {
public:
    struct Node {
        int val;
        Node* next;
        Node(int val) : val(val), next(nullptr) {}
    };

    Node* head;

    MyLinkedList() {
        head = nullptr;
    }

    int get(int index) {
        Node* temp = head;
        int cnt = 0;

        while (temp != nullptr && cnt < index) {
            temp = temp->next;
            cnt++;
        }

        if (temp == nullptr)
            return -1;
        return temp->val;
    }

    void addAtHead(int val) {
        Node* node = new Node(val);
        node->next = head;
        head = node;
    }

    void addAtTail(int val) {
        Node* node = new Node(val);
        if (head == nullptr) {
            head = node;
            return;
        }

        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = node;
    }

    void addAtIndex(int index, int val) {
        if (index == 0) {
            addAtHead(val);
            return;
        }

        Node* temp = head;
        int cnt = 0;

        while (temp != nullptr && cnt < index - 1) {
            temp = temp->next;
            cnt++;
        }

        if (temp == nullptr) return; // index out of range

        Node* node = new Node(val);
        node->next = temp->next;
        temp->next = node;
    }

    void deleteAtIndex(int index) {
        if (head == nullptr) return;

        if (index == 0) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node* temp = head;
        int cnt = 0;

        while (temp->next != nullptr && cnt < index - 1) {
            temp = temp->next;
            cnt++;
        }

        if (temp->next == nullptr) return; // index out of range

        Node* nodeToDelete = temp->next;
        temp->next = nodeToDelete->next;
        delete nodeToDelete;
    }
};

