#include <stdlib.h>
#include <time.h>
#include "Player.h"
#include "Console.h"

int main()
{
    SetConsoleSize(30, 30);
    Player player(14, 28);

    GotoXY(14, 28);
    srand(time(NULL));

    player.run();
    
    return 0;
}