call ../set_pbos.bat

set outputFolder=E:\Modding\StarSim\332nd\Customs\@332nd_Local
set sourceFolder=E:\Modding\StarSim\332nd\Customs\332nd_aux_mod\addons

REM Folder of the addonBuilder.exe, needed so that the script can change directory to it
set AddonBuilderPath=D:\SteamLibrary\steamapps\common\Arma 3 Tools\AddonBuilder
set tempFolder=C:\Users\Ryan\AppData\Local\Temp

REM Files to keep when building, like .hpp and shit
set includeFile=D:\Modding\332nd_aux_mod\Bash\include.txt

call ../build.bat