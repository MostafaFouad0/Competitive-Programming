int root = 1001, lx = 0, rx = -1; /// root = ceil(sqrt(n))

struct MO
{
    int l, r, idx, blc_idx;

    MO(int _l,int _r,int _idx)
    {
        this->l = _l, this->r = _r, this->idx = _idx;
        blc_idx = this->idx / root;
    }

    bool operator<(const MO& other) const
    {
        if (this->blc_idx != other.blc_idx)return this->blc_idx < other.blc_idx;
        return this->r < other.r;
    }
};

void add(int idx)
{
}

void del(int idx)
{
}

void query(int l,int r)
{
    while (lx < l)del(lx++);
    while (lx > l)add(++lx);
    while (rx < r)add(++rx);
    while (rx > r)del(rx--);
}
