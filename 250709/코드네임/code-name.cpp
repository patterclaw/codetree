#include <iostream>

#define MAX_N 5

using namespace std;
class Agent{

    public: 
    char codename;
    int score;
    Agent(char codename,int score){
        this->codename=codename;
        this->score=score;
    }
    Agent(){
        
    }
};

int main() {
    Agent agent[5];
    char cd;
    int sc;
    for (int i = 0; i < MAX_N; i++) {
        cin >> cd >> sc;
        agent[i]=Agent(cd,sc);
    }
    Agent min=agent[0];
    for(int i=1;i<5;i++){
        if(agent[i].score<min.score)
        min=agent[i];
    }
    cout<< min.codename <<" "<< min.score;

    
    // Please write your code here.

    return 0;
}
