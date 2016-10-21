cd $1; ls -l

pwd & date

pwd | date

cd $1 && ls -l

cd $1 || echo error

{ who; date; }
{ who; date; } > /dev/null
{ who; date; pwd; } | wc -l

( cd $1; ls -l; )
