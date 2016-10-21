echo 0 = true, 1 = false

test -a $1
echo exist: $?
test -r $1
echo read: $?
test -w $1
echo write: $?
test -x $1
echo execute: $?
test -f $1
echo file: $?
test -s $1
echo not zero: $?
test -d $1
echo directory: $?
test -c $1
echo charactor: $?
test -b $1
echo block: $?
test -p $1
echo pipe: $?
echo

test -z $2
echo len=0: $?
test -n $2
echo 'len>0': $?
test $2
echo exist: $?
test "$2"="$3"	# better use ""
echo equal: $?
test "$2"!="$3"
echo not equal: $?
echo

# space needed for [ ]
[ 1 -eq 2 ]
echo eq: $?
[ 1 -ne 2 ]
echo ne: $?
[ 1 -gt 2 ]
echo gt: $?
[ 1 -ge 2 ]
echo ge: $?
[ 1 -lt 2 ]
echo lt: $?
[ 1 -le 2 ]
echo le: $?
