cd PROG_RANDOM_NUMBER/Build
make
cd ../..
for number in `seq 1 100`
do
echo 
echo =============================================
echo
echo TEST \# $number
echo .............................................
cd PROG_RANDOM_NUMBER/Bin
./RANDOM_NUMBER
exit_status=$?
cd ../..
#echo
#echo .............................................
echo
echo RANDOM NUMBER: $exit_status
echo
python PRIME.py $exit_status
echo
echo ==============================================
echo
done
