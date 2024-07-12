#include "check_move.h"

#include <cmath>

const static int MAX_MOVE_ = 25;

   bool IsPossible (int x, int y) {
       if(DigitsSum(x, y) <= MAX_MOVE_) {
            return true;
       }
       return false;
   }

   int DigitsSum(int x, int y){
       int result = 0;
       x = std::abs(x);
       while(x != 0) {
            result += x % 10;
            x = x / 10;
       }
       y = std::abs(y);
       while(y != 0) {
            result += y % 10;
            y = y / 10;
       }
       return result;
   }
