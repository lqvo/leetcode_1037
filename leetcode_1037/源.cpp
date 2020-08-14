#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool isBoomerang(vector<vector<int>>& points) {
        int x1 = points[0][0];
        int y1 = points[0][1];
        int x2 = points[1][0];
        int y2 = points[1][1];
        int x3 = points[2][0];
        int y3 = points[2][1];
        cout << x1 << " " << y1 << endl;
        cout << x2 << " " << y2 << endl;
        cout << x3 << " " << y3 << endl;
        if (x1 == x2 && y1 == y2)return false;
        if (x1 == x3 && y1 == y3)return false;
        if (x2 == x3 && y2 == y3)return false;
        if ((x2 - x1) == 0 && (x3 - x1) == 0)return false;
        else if ((x2 - x1) == 0 || (x3 - x1) == 0) return true;
        int k1 = (y2 - y1) * (x3 - x1);
        int k2 = (y3 - y1) * (x2 - x1);
        return (k1 != k2);
    }
};

int main() {
    

    return  0;
}