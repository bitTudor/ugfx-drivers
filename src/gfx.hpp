// C++ wrappers
extern "C" {

#include "gfx.h"

}

namespace ugfx {

struct display
{
    GDisplay* d;

public:
    display(GDisplay* d = GDISP) : d(d) {}

    inline coord_t width() { return gdispGGetWidth(d); }
    inline coord_t height() { return gdispGGetHeight(d); }

    inline void clear(color_t clear_to_color = Black) 
    { gdispGClear(d, clear_to_color); }

    inline void draw_line(coord_t x1, coord_t y1, coord_t x2, coord_t y2, color_t color)
    {
        gdispGDrawLine(d, x1, y1, x2, y2, color);
    }

    inline void flush() { gdispGFlush(d); }

    class color_context_experimental
    {
        color_t current_color;
        ugfx::display& display;

    public:
        color_context_experimental(
            ugfx::display& display,
            color_t current_color) : 
            current_color(current_color), display(display) {}

        inline void draw_line(coord_t x1, coord_t y1, coord_t x2, coord_t y2)
        {
            display.draw_line(x1, y1, x2, y2, current_color);
        }
    };
};

}