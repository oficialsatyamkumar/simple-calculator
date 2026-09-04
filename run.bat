@echo off
title Simple Calculator - Satyam Kumar
cls
python calculator.py
if %ERRORLEVEL% NEQ 0 (
    echo.
    echo Python is not installed or not added to PATH.
    echo Please install Python 3.x to run this project.
    pause
)