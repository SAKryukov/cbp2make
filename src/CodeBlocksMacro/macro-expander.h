#ifndef MACRO_EXPANDER_H
#define MACRO_EXPANDER_H

#include <string>
#include <stlstrings.h>

class MacroExpander {
public:
    static void Expand(CString& value, const CString& project, const CString& projectDirectory, const CString& target) {
        if (!project.IsEmpty()) {
            value.ReplaceAll(CString(macroProject), project);
            value.ReplaceAll(CString(macroProjectAlt), project);
        } //if project
        if (!projectDirectory.IsEmpty()) {
            value.ReplaceAll(CString(macroProjectDirectory), projectDirectory);
            value.ReplaceAll(CString(macroProjectDirectoryOneWord), projectDirectory);
            value.ReplaceAll(CString(macroProjectDirectoryLong), projectDirectory);
            value.ReplaceAll(CString(macroProjectDirectoryLongOneWord), projectDirectory);
        } //if projectDirectory
        if (!target.IsEmpty()) {
            value.ReplaceAll(CString(macroTarget), target);
        } //if target
    } //Expand
private:
    static constexpr auto macroTarget = "$(TARGET_NAME)";
    static constexpr auto macroProject = "$(PROJECT_NAME)";
        static constexpr auto macroProjectAlt = "$(PROJECTNAME)";
    static constexpr auto macroProjectDirectory = "$(PROJECT_DIR)";
        static constexpr auto macroProjectDirectoryOneWord = "$(PROJECTDIR)";
        static constexpr auto macroProjectDirectoryLong = "$(PROJECT_DIRECTORY)";
        static constexpr auto macroProjectDirectoryLongOneWord = "$(PROJECTDIRECTORY)";
}; //class DefinitionSet

#endif
