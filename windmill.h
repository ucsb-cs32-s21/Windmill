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
        Windmill(int width, int height, vec2 center){
            std::vector<vec2> bodyVerts;
            //bottom left
            bodyVerts.push_back(vec2(center.x() + width/3, center.y() + height/4));
            //top left
            bodyVerts.push_back(vec2(center.x() + width/4, center.y() - height/4));
            //top right
            bodyVerts.push_back(vec2(center.x() - width/4, center.y() + height/4));
            //bottom right
            bodyVerts.push_back(vec2(center.x() - width/3, center.y() + height/4));
            
            Polygon body = Polygon(bodyVerts, 1, color(245,184,89));
        }
        Windmill(vec2 coords){

        }


};

#endif