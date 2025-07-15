#pragma once

class Grid {
private:
    int width, height;

    char** cells;

public:
    Grid(int width, int height);
    ~Grid();

    void Print() const;
};
