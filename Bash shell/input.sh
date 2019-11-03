#! usr/bin/bash

# Take input from keyboard
echo "Enter name: "
read name1 name2 name3
echo Enterd name is : $name1 $name2  $name3

# allows the input on same line
read -p 'username: ' user_val
echo username is $user_val

# passsord input
read -sp 'password:' pass
echo  # leave blank space
echo
echo your password is $pass

echo Enter names
read -a names  # it read array
echo "Names: " ${names[0]} ${names[1]} ${names[2]}

# when you dont put anyting after read
echo Enter name
read
echo $REPLY # input goes in reply varaible
