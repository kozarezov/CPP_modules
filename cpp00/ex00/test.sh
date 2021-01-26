#!/bin/bash

# Color Text
################################################################################

Red="\e[31m"			#--------- Red color
Light_red="\e[91m"		#--------- Light red color
Green="\e[32m"			#--------- Green color
Yellow="\e[33m"			#--------- Yellow color
Blue="\e[34m"			#--------- Blue color
Default_color="\e[39m"	#--------- Default color

################################################################################

main()
{
	printf "\n ${Light_red}--------------------------------"
	printf "\n ---------SUBJECT TEST----------- \n\n"
	printf "${Yellow}./megaphone \"shhhhh... I think the students are asleep...\"\n${Green}"
	./megaphone "shhhhh... I think the students are asleep..."
	printf "${Yellow}./megaphone Damnit \" ! \" \"Sorry students, I thought this thing was off.\"\n${Green}"
	./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
	printf "${Yellow}./megaphone\n${Green}"
	./megaphone
	printf "\n ${Light_red}-------------------------------- \n \n"
	printf "${Default_color}"
}

main
