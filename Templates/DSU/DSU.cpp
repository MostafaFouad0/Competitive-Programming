struct DSU {
    vector<int> par;
    vector<int> groupSize;

    DSU(int size) {
        par = vector<int>(size);
        groupSize = vector<int>(size, 1);
        for (int i = 0; i < size; ++i) {
            par[i] = i;
        }
    }

    int findLeader(int node) {
        if (par[node] == node)return node;
        return par[node] = findLeader(par[node]); /// merging
    }

    bool sameGroup(int u, int v) {
        return findLeader(u) == findLeader(v);
    }

    void merge(int x, int y) { /// merging two groups toghether based on the size 
        int leader1 = findLeader(x);
        int leader2 = findLeader(y);
        if (groupSize[leader1] > groupSize[leader2]) {
            groupSize[leader1] += groupSize[leader2];
            par[leader2] = leader1;
        } else {
            groupSize[leader2] += groupSize[leader1];
            par[leader1] = leader2;
        }
    }

    int getSize(int x) {
        return groupSize[findLeader(x)];
    }
};
