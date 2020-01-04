/*-------------------------------------------------------------------------
  Include files:
--------------------------------------------------------------------------*/

#include <stdlib.h>
#include <stdbool.h>
#include "mhg.h"

/*=========================================================================
  Constants and definitions:
==========================================================================*/




/*-------------------------------------------------------------------------
  The main program.
 -------------------------------------------------------------------------*/


int main()
{
    char professor_arr[50] = {'\0'};
    bool daenerys= false, doron = false, walter = false;
    int len = ask_for_name(professor_arr);
    int sum = calculate_sum(len, professor_arr);
    daenerys = is_monotonous_series(len, professor_arr);
    doron = is_doron(professor_arr, len);
    walter = (bool)(sum%5 || len > 4);
    which_player_to_sent(doron, daenerys, walter);
    return 0;
}


bool is_monotonous_series(int len, char professor_arr[]) {
    for (int i=0; i < len-1; i++) // i < length-1 cause otherwise it will be out of bound
    {
        if (professor_arr[i] < professor_arr[i+1])
        {
            continue;
        }
        return false;
    }
    return true;
}

bool is_doron(char array[], int len) {
    for (int i=0; i< len; i++)
    {
        if (array[i] == 'r')
        {
            return false;
        }
    }
    return (len < 6);
}
int calculate_sum(int len, char array[]) {
    int sum = 0;
    for(int i=0;i < len; i++)
    {
        sum += (int)(array[i]);
    }
    return sum;

}

/* asking for name of the professor and looking for r and ! */
int ask_for_name(char professor_arr[]) {
    char current ='\0';
    int len=0;
    print_welcome_message();
    for (;scanf("%c", &current)!= EOF;++len)
    {
        if (current == '!')
        {
            break;
        }
        professor_arr[len] = current;
    }
    return len;
}


void which_player_to_sent(bool doron, bool daenerys, bool walter) {
    if (daenerys)
    {
        print_Daenerys_sent();
    }
    else if (doron)
    {
        print_Doron_Kabilio_sent();
    }
    else if (walter)
    {
        print_Walter_White_sent();
    }
    else
    {
        print_no_player();
    }

}


