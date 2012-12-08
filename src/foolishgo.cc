#include "def.h"

#ifndef FOO_TEST

int main(int argc, const char *argv[])
{
    printf("Hello\n");
    return 0;
}

#else

#include "board.h"
#include "board_in_gm.h"
#include "pos_cal.h"
#include "chain_set.h"
#include "board_in_gm.h"


int main(int argc, const char *argv[])
{
//    Board<9>::TEST();
//    PosCalculator<9>::TEST();
//    ChainSet<9>::TEST();
    BoardInGm<9>::TEST();
    return 0;
}

#endif
