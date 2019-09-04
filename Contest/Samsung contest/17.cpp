#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
class trieNode
{
public:
    bool isLeaf;
    trieNode *next[26];
    trieNode()
    {
        isLeaf = 0;
    }
};

class Trie
{
private:
    trieNode *root;
public:
    Trie()
    {
        for (int i = 0; i < 26; i++)
        {
            root = new trieNode();
            root -> next[i] = NULL;
        }
    }
    bool Insert(string key)
    {

        trieNode *temp = root;
        for (int i = 0; i < key.size(); i++)
        {
            int index = key[i] - 'a';
            if (temp -> next[index] == NULL)
            {
                temp -> next[index] = new trieNode();
            }
            else
            {
                if(temp->next[index]->isLeaf)
                {
                    return false;
                }
            }

            temp = temp -> next[index];
        }
        temp->isLeaf=true;
        for (int i = 0; i < 26; ++i)
            if (temp->next[i] != NULL)
                return false;
        return true;
    }




};

int main()
{
    int n;
    Trie* trie = new Trie();
    cin>>n;
    for (int i = 0; i < n; ++i)
    {
        string s;
        cin>>s;
        if (! trie->Insert(s))
        {
            cout<<"BAD SET"<<endl<<s<<endl;
            return 0;
        }
    }
    cout<<"GOOD SET"<<endl;
    return 0;
}
