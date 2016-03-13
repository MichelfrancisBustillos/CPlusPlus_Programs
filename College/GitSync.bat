@echo off

robocopy "C:\Users\miche\Desktop\School\College\C++ Programming Language" "C:\Users\miche\Documents\GitHub\C_Programs\College" /MIR /z

cd C:\Users\miche\Documents\GitHub\C_Programs
git add .
git commit -am "Auto-committed on %date%"
git push
cls
echo Copy, Commit, and Push Sucessful
pause