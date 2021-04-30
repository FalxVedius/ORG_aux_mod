@ECHO OFF
REM https://stackoverflow.com/questions/18462169/how-to-loop-through-array-in-batch

set outputFolder=C:\Users\joshu\Desktop\332nd_Aux_Mod_Local\addons
set sourceFolder=C:\Users\joshu\Documents\GitHub\332nd_aux_mod\addons

REM Folder of the addonBuilder.exe, needed so that the script can change directory to it
set AddonBuilderPath=B:\SteamLibrary HDD\steamapps\common\Arma 3 Tools\AddonBuilder
set tempFolder=C:\Users\joshu\AppData\Local\Temp

REM Files to keep when building, like .hpp and shit
set includeFile=C:\Users\joshu\Documents\GitHub\332nd_aux_mod\Bash\include.txt

REM Sadly for the file below, the filepath can not have any spaces
set keyFile=C:\Users\joshu\Documents\Bikeys\Howtomod.biprivatekey

REM List of all PBO's
set Arr[0]=332nd_backpacks
set Arr[1]=332nd_helmets
set Arr[2]=332nd_main
set Arr[3]=332nd_units
set Arr[4]=332nd_vehicle_weapons
set Arr[5]=332nd_vehicles

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
    call AddonBuilder.exe %sourceFolder%\%%Arr[%x%]%% %outputFolder% -temp=%tempFolder% -include=%includeFile% 
    set /a "x+=1"
    GOTO :SymLoop
)

pause
REM -sign=%keyFile%