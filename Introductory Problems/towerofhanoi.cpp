#include<iostream>
#include<vector>
using namespace std;

void moveDisk(int n,int s,int d,int a,vector<vector<int>> &moves)
{

   
    if(n==1)
    {
        moves.push_back({s, d});
        return;
    }

    moveDisk(n - 1, s, a, d, moves);
    moves.push_back({s, d});

    moveDisk(n - 1, a, d, s, moves);
}

void towerhanoi(int n)
{
    vector<vector<int>> moves;

    int source = 1;
    int destination = 3;
    int auxiliary = 2;

    moveDisk(n, source, destination, auxiliary, moves);

    cout << moves.size() << endl;

    for(auto move :moves)
    {
        cout << move[0] << " " << move[1] << endl;
    }
}

int main()
{

    int n;
    cin >> n;
    towerhanoi(n);
}