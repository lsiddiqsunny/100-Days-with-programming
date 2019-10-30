#include<bits/stdc++.h>
using namespace std;

class trieNode
{
public:
    int val;
    trieNode *next[26];
    trieNode()
    {
        val = 0;
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
    void Insert(string key)
    {

        trieNode *temp = root;
        for (int i = 0; i < key.size(); i++)
        {
            int index = key[i] - 'a';
            if (temp -> next[index] == NULL)
            {
                temp -> next[index] = new trieNode();
            }
            temp -> next[index] -> val++;
            temp = temp -> next[index];
        }
    }

    int Search(string key)
    {

        trieNode *temp = root;
        for (int i = 0; i < key.size(); i++)
        {
            int index = key[i] - 'a';
            if (temp -> next[index] == NULL)
            {
                return 0;
            }
            temp = temp -> next[index];
        }
        return temp -> val;
    }


};

int main()
{
    int n;
    cin >> n;
    Trie* trie = new Trie();

    while(n--)
    {
        string key, op;
        cin >> op >> key;
        if (op == "add")
        {
            trie->Insert(key);
        }
        else
        {
            cout << trie->Search(key) << endl;
        }
    }
    return 0;
}
