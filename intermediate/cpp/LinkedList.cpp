template <typename T>
class LinkedListNode{
    public:
        T Value;
        LinkedListNode<T>* Next;

        LinkedListNode(){ this->Next = nullptr; }

        LinkedListNode(T Val){
            this->Value = Val;
            this->Next = nullptr;
        }

        LinkedListNode(T Val, LinkedListNode<T>* Node){
            this->Value = Val;
            this->Next = Node;
        }
};

template <typename T>
class LinkedList{
    public:
        int Length = 0;
        LinkedListNode<T>* Head = nullptr;

        LinkedList(){}
        LinkedList(T value){
            this->Add(value);
        }

        void Add(T value){
            if(this->Head == nullptr){
                this->Head = new LinkedListNode<T>(value);
                this->Length = 1;
                return;
            }

            LinkedListNode<T>* Node = this->Head;
            while (Node != nullptr)
            {
                if(Node->Next == nullptr){
                    Node->Next = new LinkedListNode<T>(value);
                    break;
                }
                Node = Node->Next;
            }
            this->Length++;
        }

        void ForEach(void (*callback)(T)){
            LinkedListNode<T>* Node = this->Head;
            if(Node == nullptr){
                return;
            }

            while (Node != nullptr)
            {
                callback(Node->Value);
                Node = Node->Next;
            }
        }

        void Clear(){
            while (Head)
            {
                LinkedListNode<T>* pHead = this->Head;
                this->Head =this->Head->Next;
                delete pHead;
            }
            this->Length = 0;
        }

        ~LinkedList(){
            this->Clear();
        }
};
