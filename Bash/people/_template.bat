call ../set_pbos.bat

set outputFolder=XXX
set sourceFolder=XXX

REM Folder of the addonBuilder.exe, needed so that the script can change directory to it
set AddonBuilderPath=XXX
set tempFolder=XXX

REM Files to keep when building, like .hpp and shit
set includeFile=XXX

call ../build.bat