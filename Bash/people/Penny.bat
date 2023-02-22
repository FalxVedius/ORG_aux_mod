call ../set_pbos.bat

set outputFolder=C:\Users\casjo\Documents\Modding\@332nd_Local\Addons
set sourceFolder=C:\Users\casjo\Documents\Modding\332nd_aux_mod\addons

REM Folder of the addonBuilder.exe, needed so that the script can change directory to it
set AddonBuilderPath=C:\Program Files (x86)\Steam\steamapps\common\Arma 3 Tools\AddonBuilder
set tempFolder=C:\Users\casjo\AppData\Local\Temp

REM Files to keep when building, like .hpp and shit
set includeFile=C:\Users\casjo\Documents\Modding\332nd_aux_mod\Bash\include.txt

call ../build.bat