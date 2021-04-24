#include "windmill.h"

Windmill::Windmill(int width, int height, vec2 center, int depth){
    std::vector<vec2> bodyVerts;
    
/*     //bottom left
    bodyVerts.push_back(vec2(center.x() - width/3, center.y() + height/4));
    //top left
    bodyVerts.push_back(vec2(center.x() - width/4, center.y() + height/4));
    
  
    //bottom right
    bodyVerts.push_back(vec2(center.x() + width/3, center.y() + height/4));
    //top right
    bodyVerts.push_back(vec2(center.x() + width/4, center.y() - height/4));

 */
    
    //bottom right
    bodyVerts.push_back(vec2(300,300));
    //bottom left
    bodyVerts.push_back(vec2(0,300));
    //top left
    bodyVerts.push_back(vec2(100,0));
    //top right
    bodyVerts.push_back(vec2(200,0));


    

    Polygon body = Polygon(bodyVerts, depth, color(245,184,89));

    this->polys.push_back(body);
}


/* void Windmill::setDepth(int depth){
    for(int i = 0; i < polys.size(); i++){
        polys.at(i).setDepth(depth);
    }
} */