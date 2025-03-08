/*1472 Design Browser History*/
class BrowserHistory {
public:
    class Node {
    public:
        string data;
        Node* prev;
        Node* next;
    
    Node(int data)
    {
        this->prev = NULL;
        this->data = data;
        this->next = NULL;
    }
    };


    Node* current = new Node("");  //Gloval variable


    BrowserHistory(string homepage)
    {
        current->data = homepage;
    }


    void visit(string url)
    {
        Node* newNode = new Node(url);
        current->next = newNode;
        newNode->prev = current;
        current = newNode;  //current page update
    }


    string back(int steps)
    {
        for(int i=0; i<steps; i++)
        {
            if(current->prev != nullptr)
            {
                current = current->prev;
            }
        }
        return current->data;
    }


    string forward(int steps)
    {
        for(int i=0; i<steps; i++)
        {
            if(current->next != nullptr)
            {
                current = current->next;
            }          
        }
        return current->data;
    }
};