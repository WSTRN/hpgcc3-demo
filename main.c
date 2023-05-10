#include "include/main.h"
#include "ggl.h"
#include "keyb.h"
#include "sys.h"
#include <hpgcc3.h>

gglsurface s;
int main()
{
    ggl_initscr(&s);
    lcd_setmode(MODE_16GRAY, s.addr);

    int x = 20, y = 20;
    ggl_rect(&s, x, y, x + 8, y + 8, ggl_mkcolor(8));

    unsigned int keys;
    while (1)
    {
        keys = keyb_getmsg();
        if (keys == (KB_ON | KM_KEYDN))
            return 0;
        /*if (keys == (KB_UP | KM_PRESS))*/
            /*y -= 1;*/
        /*else if (keys == (KB_DN | KM_PRESS))*/
            /*y += 1;*/
        /*else if (keys == (KB_LF | KM_PRESS))*/
            /*x -= 1;*/
        /*else if (keys == (KB_RT | KM_PRESS))*/
            /*x += 1;*/
		/*memset(s.addr, 0, 6400);*/
        /*ggl_rect(&s, x, y, x + 8, y + 8, ggl_mkcolor(10));*/
        tmr_delayms(100);
    }
    return 0;
}
