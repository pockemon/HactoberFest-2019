#!/bin/bash
num=10;
while [ $num -gt 0 ]
do 
	read val
	firefox http://stackoverflow.com/questions/$val
	
	num=$(( num - 1))
done

