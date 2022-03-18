call ../set_pbos.bat

set outputFolder=D:\Modding\@332nd_Local\Addons
set sourceFolder=D:\Modding\GitHub\addons

REM Folder of the addonBuilder.exe, needed so that the script can change directory to it
set AddonBuilderPath=D:\SteamLibrary\steamapps\common\Arma 3 Tools\AddonBuilder
set tempFolder=C:\Users\Erin\AppData\Local\Temp

REM Files to keep when building, like .hpp and shit
set includeFile=D:\Modding\GitHub\Bash\include.txt

call ../build.bat