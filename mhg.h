#ifndef MHG_H_
#define MHG_H_


#include <stdio.h>

int calculate_sum(int len, char array[]);

int print_welcome_message() {
    return printf("La Inspectora Murillo, Please enter El Professor name (must end with a '!'):\n");
}

int print_Walter_White_sent() {
    return printf("\nEl Professor sent Walter White into the robbery!\n");
}

int print_Daenerys_sent() {
    return printf("\nEl Professor sent Daenerys Targaryen into the robbery!\n");
}

int print_Doron_Kabilio_sent() {
    return printf("\nEl Professor sent Doron Kabilio into the robbery!\n");
}

int print_no_player() {
    return printf("\nNO player has been sent into the robbery!\n");
}

bool is_doron(char array[], int len);

bool is_monotonous_series(int len, char professor_arr[]);

int ask_for_name(char professor_arr[]); /* ask for name of the professor and set it in array */

void which_player_to_sent(bool doron, bool daenerys, bool walter);

#endif /*MHG_H_ */
