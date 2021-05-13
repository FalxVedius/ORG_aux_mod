@ECHO OFF

@REM call set_pbos.bat

@REM REM https://stackoverflow.com/questions/18462169/how-to-loop-through-array-in-batch

@REM set outputFolder=C:\Users\joshu\Desktop\332nd_Aux_Mod_Local\addons
@REM set sourceFolder=C:\Users\joshu\Documents\GitHub\332nd_aux_mod\addons

@REM REM Folder of the addonBuilder.exe, needed so that the script can change directory to it
@REM set AddonBuilderPath=B:\SteamLibrary HDD\steamapps\common\Arma 3 Tools\AddonBuilder
@REM set tempFolder=C:\Users\joshu\AppData\Local\Temp

@REM REM Files to keep when building, like .hpp and shit
@REM set includeFile=C:\Users\joshu\Documents\GitHub\332nd_aux_mod\Bash\include.txt

@REM REM Sadly for the file below, the filepath can not have any spaces
@REM set keyFile=C:\Users\joshu\Documents\Bikeys\Howtomod.biprivatekey


REM Change directory to the addonBuilder.exe
CD /D %AddonBuilderPath%

REM ---DO NOT EDIT BELOW THIS LINE---
REM ---DO NOT EDIT BELOW THIS LINE---
REM ---DO NOT EDIT BELOW THIS LINE---
REM ---DO NOT EDIT BELOW THIS LINE---

set "x=0"

:SymLoop
if defined Arr[%x%] (
   
    call ECHO %sourceFolder%\%%Arr[%x%]%%
    call AddonBuilder.exe -clear %sourceFolder%\%%Arr[%x%]%% %outputFolder% -temp=%tempFolder% -include=%includeFile%
    set /a "x+=1"
    GOTO :SymLoop
)

pause
REM -sign=%keyFile%