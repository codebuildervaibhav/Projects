#include <bits/stdc++.h>
using namespace std;
class Nde
{
public:
    int num;
    Nde *pointr;
    Nde(int x)
    {
        num = x;
        this->pointr = NULL;
    }
};
bool palindmfn(Nde *head)
{
    Nde *slw = head;
    stack<int> s;
    while (slw != NULL)
    {
        s.push(slw->num);
        slw = slw->pointr;
    }
    while (head != NULL)
    {
        int i = s.top();
        s.pop();
        if (head->num != i)
        {
            return false;
        }
        head = head->pointr;
    }
    return true;
}
int main()
{
    Nde *root = new Nde(2);
    root->pointr = new Nde(6);
    root->pointr->pointr = new Nde(5);
    root->pointr->pointr->pointr = new Nde(6);
    root->pointr->pointr->pointr->pointr = new Nde(2);
    int result = palindmfn(root);
    if (result == 1)
        cout << "\nIT IS A PALINDROME\n\n";
    else
        cout << "NOT A PALINDROME\n";
    return 0;
}