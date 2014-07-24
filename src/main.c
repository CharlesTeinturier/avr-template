#include <avr/io.h>
#include <util/delay.h>

int main (void)
{
    unsigned int i;
    // set all PORTB pins for output
    DDRB = 0xFF;

    for (;;) {
        /* toggle PORTB.2 pins */
        PORTB ^= 0xFF;

        for (i = 0; i < 50; i++) {
            _delay_loop_2(30000);
        }
    }

    return 0;
}
