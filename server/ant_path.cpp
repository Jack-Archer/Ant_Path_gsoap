#include <iostream>
#include <queue>
#include <algorithm>

#include "ant_path.h"
#include "check_move.h"

   Coordinates::Coordinates(int x, int y) :  x(x), y(y) {}


   AntPath::AntPath(Coordinates& now) : all_cells_() {
        all_cells_.insert(now);
        std::cout << "Starting position is : " << now.x << " , " << now.y << std::endl;
    }

   void  AntPath::Print() {
       for(auto &str : all_cells_) {
            std::cout << str.x << " - " << str.y << std::endl;
       }
   }

   int AntPath::GetCountCells() {
        return count_cells_;
   }

    void AntPath::ExploreWorld(){
        std::queue<Coordinates> to_explore;
        Coordinates stay_now = *all_cells_.begin();
        to_explore.push(stay_now);

        while(!to_explore.empty()) {
            Coordinates for_check = to_explore.front();
            to_explore.pop();

            MoveUp(for_check, to_explore);
            MoveDown(for_check, to_explore);
            MoveLeft(for_check, to_explore);
            MoveRight(for_check, to_explore);
        }
        std::cout << "Total available cells : "<< count_cells_ << std::endl;
    }

    void AntPath::MoveUp(Coordinates for_check, std::queue<Coordinates> &to_explore){
         if (IsPossible(for_check.x, for_check.y + 1)){
               Coordinates new_coord(for_check.x, for_check.y + 1);
               if(all_cells_.count(new_coord) == 0) {
                    to_explore.push(new_coord);
                    ++count_cells_;
                    all_cells_.insert(new_coord);
               }
            }
    }

    void AntPath::MoveRight(Coordinates for_check, std::queue<Coordinates> &to_explore) {
         if (IsPossible(for_check.x + 1, for_check.y)){
                Coordinates new_coord(for_check.x + 1, for_check.y);;
                if(all_cells_.count(new_coord) == 0) {
                    to_explore.push(new_coord);
                    ++count_cells_;
                    all_cells_.insert(new_coord);
               }
            }
    }

    void AntPath::MoveDown(Coordinates for_check, std::queue<Coordinates> &to_explore) {
            if (IsPossible(for_check.x, for_check.y - 1)){
                Coordinates new_coord(for_check.x, for_check.y - 1);
                 if(all_cells_.count(new_coord) == 0) {
                    to_explore.push(new_coord);
                    ++count_cells_;
                    all_cells_.insert(new_coord);
                }
            }
    }

    void AntPath::MoveLeft(Coordinates for_check, std::queue<Coordinates> &to_explore) {
         if (IsPossible(for_check.x - 1, for_check.y)){
                Coordinates new_coord(for_check.x - 1, for_check.y);
                if(all_cells_.count(new_coord) == 0) {
                    to_explore.push(new_coord);
                    ++count_cells_;
                    all_cells_.insert(new_coord);
               }
            }
    }

    bool operator<(const Coordinates& lhs, const Coordinates& rhs) {
         return (((((u_int64_t)(lhs.x)) << 32) | ((u_int64_t)(lhs.y))) < ((((u_int64_t)(rhs.x)) << 32) | ((u_int64_t)(rhs.y))));
    }
