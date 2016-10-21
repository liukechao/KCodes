if [ -f $1 ]
then
	cat $1
elif [ -d $1 ]
then
	ls $1
else
	echo "$1 does not exist"
	echo "input data for $1"
	cat > $1
fi

if [ ! -d $1 -a -d $2 ]
then
	echo "$1 or(and) $2 is not a dir"
else
	c1=`ls -l $1 | wc -l`
	c2=`ls -l $2 | wc -l`
	if [ $c1 -eq $c2 ]
	then echo "two dir match"
	else echo "two dir don't match"
	fi
fi
