#include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
        string name;
        int roll;
        int marks;
    Student(string n, int r, int m)
    {
        this->name = n;
        this->roll = r;
        this->marks = m;
    }
};
class cmp
{
    public:
        bool operator()(Student a, Student b)
        {
            if(a.marks < b.marks)
                return true;
            else if(a.marks == b.marks)
            {
                if(a.roll > b.roll)
                    return true;
                else    
                    return false;
            }
            else
                return false;
        }
};
int main()
{
    int n;
    cin >> n;

    priority_queue< Student, vector<Student>, cmp> pq;
    for(int i=0; i<n; i++)
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        Student obj(name, roll, marks);
        pq.push(obj);
    }

    int q;
    cin >> q;
    while(q--)
    {
        int y;
        cin >> y;
    
        if(y==0)
        {
            string name;
            int roll, marks;
            cin >> name >> roll >> marks;
            Student obj(name, roll, marks);
            pq.push(obj);

            if(!pq.empty())
            {
                cout << pq.top().name <<" " << pq.top().roll << 
                " " << pq.top().marks << endl;
            }
            else
                cout << "Empty" << endl;

        }
        else if(y==1)
        {
            if(!pq.empty())
            {
                cout << pq.top().name <<" " << pq.top().roll << 
                " " << pq.top().marks << endl;
            }
            else
                cout << "Empty" << endl;
        }
        else if(y==2)
        {
            if(!pq.empty())
            {
                pq.pop();

                if(!pq.empty())
                {  
                    cout << pq.top().name <<" " << pq.top().roll << 
                    " " << pq.top().marks << endl;
                }
                else
                {
                    cout << "Empty" << endl;
                }
            }
            else
                cout << "Empty" << endl;
        }
    }
    return 0;
}