#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_set<int> s;

        for (int candy : candyType) {
            s.insert(candy);
        }

        int differentTypes = s.size();
        int candiesSheCanEat = candyType.size() / 2;

        return min(differentTypes, candiesSheCanEat);
    }
};