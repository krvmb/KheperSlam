#ifndef FORAGING_QT_USER_FUNCTIONS_H
#define FORAGING_QT_USER_FUNCTIONS_H

#include <argos3/plugins/simulator/visualizations/qt-opengl/qtopengl_user_functions.h>
//#include <argos3/plugins/robots/foot-bot/simulator/footbot_entity.h>
#include <argos3/plugings/robots/kheperaiv/simulator/kheperaiv_entity.h>

using namespace argos;

class CForagingQTUserFunctions : public CQTOpenGLUserFunctions {

public:

   CForagingQTUserFunctions();

   virtual ~CForagingQTUserFunctions() {}

   void Draw(CKheperaIVEntity& c_entity);
   
};

#endif
