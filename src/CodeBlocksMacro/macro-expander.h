/*
    cbp2make : Makefile generation tool for the Code::Blocks IDE
    Copyright (C) 2010-2013 Mirai Computing (mirai.computing@gmail.com)

    Portions Copyright (C) 2017 Sergey A Kryukov
    https://github.com/SAKryukov/cbp2make (fork)
    http://www.SAKryukov.org
    https://sakryukov.github.io

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

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
