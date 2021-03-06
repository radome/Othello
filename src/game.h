#ifndef GAME_H
#define GAME_H

#include "board.h"
#include "scoreboard.h"
#include "color.h"
#include "player.h"
#include "disk.h"
#include "coordinates.h"
#include <list>
#include <vector>
#include <string>

using std::list;
using std::vector;
using std::string;


class Game {
    public:
    Board<Disk> board;
    Scoreboard scoreboard;
    Player* player_d;
    Player* player_l;
    vector<string> x_labels;
    vector<string> y_labels;
    
    void set_up();
    void play();
    void move(Player* player);
    bool game_over();
    void register_player(Player* player, Color color);
    void print();

    protected:
    list< coord > _available;
    void _print_hline(size_t dim);
    void _print_board();
    void _update_score(int d_flipped, Color color);
    int _update_board(coord coords, Color color);
    void _board_set_up();

        
};

#endif
