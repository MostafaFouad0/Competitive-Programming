struct BT
{
    struct Node
    {
        Node* child[2];
        int freq[2];

        Node()
        {
            child[0] = child[1] = NULL;
            freq[0] = freq[1] = 0;
        }
    };

    Node* root;

    BT()
    {
        root = new Node();
        // insert(0); // it depends
    }


    void rem(int x,int i, Node* cur)
    {
        if (i < 0)return;
        bool bit = (1ll << i) & x;
        rem(x, i - 1, cur->child[bit]);
        cur->freq[bit]--;
        if (!cur->freq[bit])
        {
            delete cur->child[bit];
            cur->child[bit] = NULL;
        }
    }

    void insert(int x)
    {
        Node* cur = root;
        for (int i = 30; i >= 0; i--)
        {
            bool bit = (1ll << i) & x;
            if (cur->child[bit] == NULL)cur->child[bit] = new Node();
            cur->freq[bit]++;
            cur = cur->child[bit];
        }
    }

    int query(int x)
    {
      // max XOR if we use number x
        Node* cur = root;
        int ret{};
        for (int i = 30; i >= 0; i--)
        {
            bool bit = (1ll << i) & x;
            if (cur->child[bit ^ 1] != NULL)cur = cur->child[bit ^ 1], ret |= (1ll << i);
            else cur = cur->child[bit];
        }
        return ret;
    }
};
