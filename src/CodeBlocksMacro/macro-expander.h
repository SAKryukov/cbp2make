#ifndef MACRO_EXPANDER_H
#define MACRO_EXPANDER_H

#include <string>
#include <stlstrings.h>

class MacroExpander {
public:
    static void Expand(CString& value, const CString& project, const CString& target) {
        if (!project.IsEmpty())
            value.ReplaceAll(CString(macroProject), project);
        if (!target.IsEmpty())
            value.ReplaceAll(CString(macroTarget), target);
    } //Expand
private:
    static constexpr auto macroTarget = "$(TARGET_NAME)";
    static constexpr auto macroProject = "$(PROJECT_NAME)";
}; //class DefinitionSet

#endif
