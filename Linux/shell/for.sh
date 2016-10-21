for file in *.sh
do
	ls -l $file
done

for arg
do
	case $arg in
	-a)
		echo process option -a
		;;
	-k)
		echo process option -k
		;;
	*)
		if [ `echo $arg | cut -c1` = '-' ]
		then
			echo "invalid option: $arg"
		elif [ -f $arg ]
		then
			cat $arg | wc -l
		else
			echo "invalid string: $arg"
		fi		
		;;	
	esac
done
