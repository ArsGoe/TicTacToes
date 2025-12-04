#include <iostream>
#include "Player.hpp"
#include <string> // for string class
using namespace std;

namespace Player {
    player Player::create_player() {
        player player_construct;

        cout << "Quel est votre pseudo ?" << std::endl;
        cin >> player_construct.name;

        cout << "Quel est le symbole que vous utiliserez ?" << std::endl;
        cin >> player_construct.symbol;

        return player_construct;
    }
}
