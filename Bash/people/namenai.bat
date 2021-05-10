call ../set_pbos.bat

set outputFolder=C:\Users\Namenai\Desktop\332nd_aux_mod\addons
set sourceFolder=D:\Github\332nd_aux_mod\addons

REM Folder of the addonBuilder.exe, needed so that the script can change directory to it
set AddonBuilderPath=E:\SteamLibrary\steamapps\common\Arma 3 Tools\AddonBuilder
set tempFolder=C:\Users\Namenai\AppData\Local\Temp

REM Files to keep when building, like .hpp and shit
set includeFile=D:\Github\332nd_aux_mod\Bash\include.txt

call ../build.bat