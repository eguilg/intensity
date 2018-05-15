#ifndef BOT_H
#define BOT_H

#include <vector>
using namespace std;

class bot
{
private :
    vector<int> mem;
    const string bot_name;
    const int MAX_MEM; // Max num of played cards bot can remember
//    int *discarded;
//    int *recieved;


public:
    static const int NUM_DISCARD = 3;

    bot(string bot_name, int max_mem);

    string get_name();
    int choose_card_to_forget(const vector<int>& hands, int other_played_card);
    int choose_card_to_play(const vector<int>& hands, const vector<int>& played_r);







};
#endif // BOT_H
