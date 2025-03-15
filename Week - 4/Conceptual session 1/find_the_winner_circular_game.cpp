class Solution
{
public:
    queue <int> q;

    int findTheWinner(int n, int k)
    {
        for(int i=1; i<=n; i++)
        {
            q.push(i);
        }

        int count = 0;
        while(q.size() > 1)
        {
            int x = q.front();
            q.pop();
            count++;

            if(count == k) count = 0;
            else q.push(x);
        }
        return q.front();
    }

};