@echo off

robocopy "C:\Users\miche\Desktop\School\College\C++ Programming Language" "C:\Users\miche\Documents\GitHub\C_Programs\College" /MIR /z

cd C:\Users\miche\Documents\GitHub\C_Programs
call "C:\Program Files\Git\cmd\git.exe" commit -am "Auto-committed on %date%"
call "C:\Program Files\Git\cmd\git.exe" push

echo Copy, Commit, and Push Sucessful