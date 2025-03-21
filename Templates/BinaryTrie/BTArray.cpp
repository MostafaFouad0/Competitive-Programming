struct node
{
    int nxt[2]{};
    int freq{};

    int& operator[](const int i)
    {
        return nxt[i];
    }
};

struct Trie
{
    vector<node> trie;

    int newNode()
    {
        trie.emplace_back();
        return trie.size() - 1;
    }

    Trie()
    {
        newNode();
    }

    void clear()
    {
        trie.clear();
        newNode();
    }

    void add(const int x, int op)
    {
        int idx{};
        for (int i = 29; i >= 0; i--)
        {
            bool f = x & (1ll << i);
            if (!trie[idx][f])trie[idx][f] = newNode();
            idx = trie[idx][f];
            trie[idx].freq += op;
        }
        trie[idx].ed += op;
    }

    int query(int cnt)
    {
        /// do something
    }
} t;
