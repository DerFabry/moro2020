@echo off

cd .

chcp 1252

if "%1"=="" ("S:\PROGRA~3\MATLAB\R2020a\bin\win64\gmake"  -f wrapper.mk all) else ("S:\PROGRA~3\MATLAB\R2020a\bin\win64\gmake"  -f wrapper.mk %1)
@if errorlevel 1 goto error_exit

exit 0

:error_exit
echo The make command returned an error of %errorlevel%
exit 1
