@echo off
title Verse Serialchecker
echo.
color 90

echo.
color 90 
:start
color 4  
cls                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        r
echo [93m      MOTHERBOARD
echo [90m==========================[97m
wmic baseboard get serialnumber
echo [90m==========================[97m
echo [92m        SMBIOS
echo [90m==========================[97m
wmic path win32_computersystemproduct get uuid
echo [90m==========================[97m
echo [95m         BIOS
echo [90m==========================[97m
wmic csproduct get uuid
echo [90m==========================[97m
echo [91m         CPU
echo [90m==========================[97m
wmic cpu get serialnumber
echo [90m==========================[97m
echo [95m       CHASSIS
echo [90m==========================[97m
wmic systemenclosure get serialnumber
echo [90m==========================[97m
echo [93m        SID
echo [90m==========================[97m
wmic useraccount get name,sid
echo [90m==========================[97m
echo [92m         MAC
echo [90m==========================[97m
getmac
echo [90m==========================[97m
echo [93mMAKE SURE ALL OF YOUR SERIALS ARE CHANGED!! ALL OF THEM!!!!
pause>nul
goto start 