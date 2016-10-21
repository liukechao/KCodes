#no space around =
firstname="Allen"
readonly lastname="Liu"
age=25
workdir=/root/liukechao/
#lastname="Sun"

echo $firstname $lastname"'s age is "$age
echo

echo "Directories and Files in "$workdir
ls $workdir
echo

echo HOME: $HOME
echo PATH: $PATH
PATH=$HOME:$PATH
echo PATH: $PATH
echo SHELL: $SHELL
echo LOGNAME: $LOGNAME
echo

echo $0 $1 $2 $3 $4 $5 $6 $7 $8 $9
#shift
echo $* 
#set arg1 arg2 arg3
echo $#
echo $*
echo $@
echo

echo $? $$ $! $-
echo

echo ${1-$HOME}
#echo ${2=/tmp} Error!
echo ${tmpdir=/tmp}
#echo ${3?"missing second parameter"}
echo ${4+YES}
echo

echo '$#',"$#",\$#
count=1
count=`expr $count \* 10` # space needed
echo count=$count
