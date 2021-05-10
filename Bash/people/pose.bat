call ../set_pbos.bat

set outputFolder=C:\Users\joshu\Desktop\332nd_Aux_Mod_Local\addons
set sourceFolder=C:\Users\joshu\Documents\GitHub\332nd_aux_mod\addons

REM Folder of the addonBuilder.exe, needed so that the script can change directory to it
set AddonBuilderPath=B:\SteamLibrary HDD\steamapps\common\Arma 3 Tools\AddonBuilder
set tempFolder=C:\Users\joshu\AppData\Local\Temp

REM Files to keep when building, like .hpp and shit
set includeFile=C:\Users\joshu\Documents\GitHub\332nd_aux_mod\Bash\include.txt

call ../build.bat