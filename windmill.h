#ifndef WINDMILL_H
#define WINDMILL_H

#include "polygon.h"
#include "rect.h"
#include "ellipse.h"
#include "color.h"
#include "vec2.h"

class Windmill{
    private:
        std::vector<Polygon> polys;
        std::vector<Rect> rects;
        std::vector<ellipse> ellipses;

        vec2 center;
        int width;
        int height;

    public:
        Windmill(int width, int height, vec2 center);

        void setCenter(vec2 cen);
        void setHeight(int height);
        void setWidth(int width);

        vec2 getCenter();
        int getHeight();
        int getWidth();

        std::vector<Polygon> getPolys();
        std::vector<Rect> getRects();
        std::vector<ellipse> getEllipses();

};

#endif