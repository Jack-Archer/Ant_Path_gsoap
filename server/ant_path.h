#pragma once

#include <set>
#include <queue>

struct Coordinates {
    Coordinates(int x, int y);
    Coordinates() = default;
    int x = 1000;
    int y = 1000;
};

class AntPath {
public:
    AntPath(Coordinates& now);
    void ExploreWorld();
    void MoveUp(Coordinates for_check, std::queue<Coordinates> &to_explore);
    void MoveRight(Coordinates for_check, std::queue<Coordinates> &to_explore);
    void MoveDown(Coordinates for_check, std::queue<Coordinates> &to_explore);
    void MoveLeft(Coordinates for_check, std::queue<Coordinates> &to_explore);


    void Print();

    int GetCountCells();

private:
    std::set<Coordinates> all_cells_;
    int count_cells_ = 1;
};

bool operator<(const Coordinates& lhs, const Coordinates& lh);
