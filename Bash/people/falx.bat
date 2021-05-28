call ../set_pbos.bat

set outputFolder=D:\ArmaMods\@332nd_Local\addons
set sourceFolder=D:\Modding\332nd_aux_mod\addons

REM Folder of the addonBuilder.exe, needed so that the script can change directory to it
set AddonBuilderPath=D:\Steam\steamapps\common\Arma 3 Tools\AddonBuilder
set tempFolder=C:\Users\Jerem\AppData\Local\Temp

REM Files to keep when building, like .hpp and shit
set includeFile=D:\Modding\332nd_aux_mod\Bash\include.txt

call ../build.bat