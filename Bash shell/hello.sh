#! /usr/bin/bash
# this is a comment which is not executed by script
echo "hello world"  # this is also a comment which is not executed by script
# not we talk about a variable :: it stores a value
# 1. system variable :: predefined variables mostly are in capitalized
# 2. user varaible :: user defined  :: defined in lowercase but it not necessary

# system variables

echo $BASH
echo $BASH_VERSION
echo $HOME
echo $PWD

#User defined variables
name=Mark
val10=10
10val=100
echo The name is $name
echo the value is $val10
echo the value is $10val



#touch hello.sh   # create shell file
#ls -al           # check all authentications
#which bash       # check bash location
#./hello.sh       # run shell file
