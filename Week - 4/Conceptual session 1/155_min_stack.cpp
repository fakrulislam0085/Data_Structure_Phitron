class MinStack
{
public:
    stack <int> st, mnSt;

    MinStack() 
    {

    }

    void push(int val)
    {
        if(st.empty())
        {
            st.push(val);
            mnSt.push(val);
            return;
        }

        st.push(val);
        int v = min(val, mnSt.top());  //checking minimum value
        mnSt.push(v);  //pushing minimum value in minSt
    }

    void pop()
    {
        if(st.empty()) return;
        else 
        {
            st.pop();
            mnSt.pop();
        }
    }

    int top()
    {
        return st.top();
    }

    int getMin()
    {
        return mnSt.top();
    }    
    
};