#include "bot.h"

bot::bot(string name, int max_mem = 8):bot_name(name),MAX_MEM(max_mem)
{
//    this->discarded = new int[NUM_DISCARD];
//    this->recieved = new int[NUM_DISCARD];
}

string bot::get_name(){
    return this->bot_name;
}



