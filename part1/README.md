# Shellscripting

## Summary

Knowledge of shell scripting is a fundamental skills when it comes to using
a computer. With them, you can automate simple tasks either for system
administration, develop new systems or debugging.

I highly recommend you get familiar with shellscripting, that will go
a long way when trying to troubleshoot a problem. You might not need
it today but it will be a precious ally later.

## Exercise 1: Find the shell of a given user

Write a shell script that print the shell used by a given user.
Your script will take the username as the first argument.

Your script should handle error case (such as undefined argument or non-existent users).


**Hint**: you can find the shell of a user on UNIX systems in `/etc/passwd`


## Exercise 2: rewrite a similar which

The whereis (see `man whereis`) is a tool to locate a command. We want to write
a similar command in shell. The command is given as parameter.

Write a script that attempts to locate programs in all the common directories
used. More than one program can be passed on the command line, you should
then try to locate each of them.

**Hint**: the environment variable `PATH` contains all the directory to look for commands.

## Resources

 * [Bash Guide for Beginners](http://tldp.org/LDP/Bash-Beginners-Guide/html/)
