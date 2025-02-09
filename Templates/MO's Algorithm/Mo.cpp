int root = 1001, lx = 0, rx = -1; /// root = ceil(sqrt(n))

struct MO
{
    int l, r, idx, blc_idx;

    MO(int l, int r, int idx)
    {
        this->l = l, this->r = r, this->idx = idx;
        blc_idx = this->l / root;
    }

    MO()
    {
    }

    bool operator<(const MO& other) const
    {
        if (this->blc_idx != other.blc_idx)return this->blc_idx < other.blc_idx;
        return this->r < other.r;
    }
};

void add(int idx)
{
    /// do something
}

void del(int idx)
{
    /// do something
}

void query(int l,int r)
{
    while (rx < r)add(++rx);
    while (lx > l)add(--lx);
    while (lx < l)del(lx++);
    while (rx > r)del(rx--);
}
