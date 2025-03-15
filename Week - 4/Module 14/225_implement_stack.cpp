class myStack{
public:
    queue <int> q;
    myStack()
    {

    }
    void push(int x)
    {
        q.push(x);
    }
    int pop()
    {
        queue <int> newQ;
        int last_element = 0;
        while(!q.empty)
        {
            int k = q.front();
            q.pop();
            if(q.empty())
            {
                //last element a 
                last_element = k;
                break;
            }
            newQ.push(k);
        }
        q = newQ;
        return last_element;
    }
    int top()
    {
        queue <int> newQ;
        int last_element = 0;
        while(!q.empty)
        {
            int k = q.front();
            q.pop();
            if(q.empty())
            {
                //last element a 
                last_element = k;
            }
            newQ.push(k);
        }
        q = newQ;
        return last_element;
    }
    bool empty()
    {
        return q.empty();
    }

};