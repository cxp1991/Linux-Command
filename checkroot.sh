#!/bin/bash 

pass=

login()
{
	read -s -p "[ sudo ] password for $(who|sed -n '1p'|awk '{print $1}'): " pass
}

if [ $UID != 0 ]
then

	login

	while [ $pass != "ceslab" ]
	do
		echo "";
		echo "Sorry, try again"
		login
	done

	echo ""
	echo "Login successful!"

	exit 0
fi
