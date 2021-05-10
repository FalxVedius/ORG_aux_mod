@ECHO OFF
REM https://stackoverflow.com/questions/18462169/how-to-loop-through-array-in-batch

@REM set outputFolder=C:\Users\joshu\Desktop\332nd_Aux_Mod_Local\addons
@REM set sourceFolder=C:\Users\joshu\Documents\GitHub\332nd_aux_mod\addons

@REM REM Folder of the addonBuilder.exe, needed so that the script can change directory to it
@REM set AddonBuilderPath=B:\SteamLibrary HDD\steamapps\common\Arma 3 Tools\AddonBuilder
@REM set tempFolder=C:\Users\joshu\AppData\Local\Temp

@REM REM Files to keep when building, like .hpp and shit
@REM set includeFile=C:\Users\joshu\Documents\GitHub\332nd_aux_mod\Bash\include.txt

@REM REM Sadly for the file below, the filepath can not have any spaces
@REM set keyFile=C:\Users\joshu\Documents\Bikeys\Howtomod.biprivatekey

@REM REM List of all PBO's
@REM set Arr[0]=332nd_backpacks
@REM set Arr[1]=332nd_helmets
@REM set Arr[2]=332nd_main
@REM set Arr[3]=332nd_units
@REM set Arr[4]=332nd_vehicle_weapons
@REM set Arr[5]=332nd_vehicles

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
    call AddonBuilder.exe %sourceFolder%\%%Arr[%x%]%% %outputFolder% -temp=%tempFolder% -include=%includeFile% -sign=%keyFile%
    set /a "x+=1"
    GOTO :SymLoop
)

pause
REM -sign=%keyFile%