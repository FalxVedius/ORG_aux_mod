call ../set_pbos.bat

set outputFolder=E:\ArmaMods\@ORG_Local\addons
set sourceFolder=E:\Modding\ORG_aux_mod\addons

REM Folder of the addonBuilder.exe, needed so that the script can change directory to it
set AddonBuilderPath=E:\Steam\steamapps\common\Arma 3 Tools\AddonBuilder
set tempFolder=C:\Users\Jerem\AppData\Local\Temp

REM Files to keep when building, like .hpp and shit
set includeFile=E:\Modding\ORG_aux_mod\Bash\include.txt

call ../build.bat