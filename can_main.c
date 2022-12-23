#include <stdio.h>
#include "can_controller.h"
#include "can_transceiver.h"

int main(void)
{
    test_controller();
    test_transceiver();

    return 0;
}