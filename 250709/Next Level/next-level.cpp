#include <iostream>
#include <string>

    
using namespace std;
class GameInfo{
    public:
    string user2_id;
    int user2_level;
    GameInfo(string user2_id="codetree",int user2_level=10){
        this->user2_id=user2_id;
        this->user2_level=user2_level;
    }
};


int main() {
    GameInfo gameInfo=GameInfo();
    cout << "user "<< gameInfo.user2_id << " lv " << gameInfo.user2_level <<  '\n';
    string id;
    int level;
    cin >> id >> level;
     gameInfo.user2_id = id;
    gameInfo.user2_level = level;
    cout << "user "<< gameInfo.user2_id << " lv " << gameInfo.user2_level;
    // Please write your code here.

    return 0;
}