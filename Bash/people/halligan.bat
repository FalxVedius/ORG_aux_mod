call ../set_pbos.bat

set outputFolder=C:\Users\mishs\Desktop\332nd_aux_mod\addons
set sourceFolder=C:\Users\mishs\Documents\GitHub\332nd_aux_mod\addons

REM Folder of the addonBuilder.exe, needed so that the script can change directory to it
set AddonBuilderPath=C:\Program Files (x86)\Steam\steamapps\common\Arma 3 Tools\AddonBuilder
set tempFolder=C:\Users\mishs\AppData\Local\Temp

REM Files to keep when building, like .hpp and shit
set includeFile=sourceFolder=C:\Users\mishs\Documents\GitHub\332nd_aux_mod\Bash\include.txt

call ../build.bat
