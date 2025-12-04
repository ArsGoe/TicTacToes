#include <iostream>
#include <vector>
using namespace std;


void draw_game_board(vector<vector<char>>& tableau) {
    for (vector<char> tableau_ligne : tableau)
    {
        cout << "| ";
        for (char character : tableau_ligne) 
        {
            cout << character << ' |';
        }
        cout << endl;
    }
    
}

vector<vector<char>> init_tableau(int size) {
    vector<vector<char>> tableau;
    
    for (int i = 0; i < size; i++)
    {
        vector<char> ligne(size, 'Ø');
        tableau.push_back(ligne);
    }
    
    return tableau;
}