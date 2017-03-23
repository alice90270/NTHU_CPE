#include "function.h"
using namespace std;
set<State> SwapSort::extend(State s)
{
    set<State> SS;

    // your code here
    swap(s[0], s[1]);
    SS.insert(s);
    swap(s[0],s[1]);
    swap(s.back(),s[0]);
    SS.insert(s);
    return SS;
}

void SwapSort::solve(int steps)
{
    while (steps>0) {
        set<list<State>> oldPaths;
        set<list<State>> newPaths;

        for (auto p : _paths) {

            // your code here
            oldPaths.insert(p);
            //2 1 3 //4 1 3 2

            //auto path = p; //2 1 3 //4 1 3 2,1 4 3 2,2 4 3 1, 4 2 3 1
            //list<State> path
            _explored.insert(p.back()); //2 1 3 //4 1 3 2, 1 4 3 2, 2 4 3 1, 4 2 3 1
            for (auto s : extend(p.back())) {//1 2 3, 3 1 2//(1 2 3 4, 2 4 3 1)
            //State s
                p.push_back(s);//1 2 3|3 1 2//
                if (is_sorted(s.begin(),s.end()))
                    _solutions.insert(p);//1 2 3|___ //___|___
                else if (_explored.find(s) == _explored.end())
                    newPaths.insert(p);//___|3 1 2 //4 1 2 3, 1 4 3 2, 2 4 3 1, 4 2 3 1,
                p.pop_back();//___|___
            }
        }

        for (auto p : oldPaths) {//p:list<State>
            _paths.erase(p);
        }
        for (auto p : newPaths) {
            _paths.insert(p);//(<1 4 3 2>,<2 1 3 4>,<2 4 3 1>,<4 2 3 1>)
        }
        --steps;
    }
}
