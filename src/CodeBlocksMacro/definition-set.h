#ifndef DEFINITION_SET_H
#define DEFINITION_SET_H

#include <string>

class DefinitionSet {
public:
   static std::string MacroTarget() { return "$(TARGET_NAME)"; }
   static std::string MacroProject() { return "$(PROJECT_NAME)"; }
}; //class DefinitionSet

#endif
