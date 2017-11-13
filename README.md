# cbp2make: Code::Blocks to makefile converter with macro support

This work is derived from [mankash/cbp2make](https://github.com/mankash/cbp2make) which is imported/copied from https://sourceforge.net/p/cbp2make.

Licensed by the original author as GNU General Public License version 3.0 (GPLv3)

## About

'''cbp2make''' is a stand-alone build tool that allows you to generate makefile(s) for GNU Make out of Code::Blocks IDE project or workspace file. (See also [http://forums.codeblocks.org/index.php/topic,13675.0.html])

Present derived work fixes original work with support of Code::Blocks macro [described on its wiki page](http://wiki.codeblocks.org/index.php/Variable_expansion#Build_in_functions_for_path_conversion).

At the moment of writing, only three macro (in seven forms) are expanded:
* $(TARGET_NAME)
* $(PROJECT_NAME), $(PROJECTNAME)
* $(PROJECT_DIR), $(PROJECTDIR), $(PROJECT_DIRECTORY), $(PROJECTDIRECTORY)

