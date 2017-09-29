for number in `seq 1 100`
do
echo TEST NUMBER :- $number
cd random/build
make
cd ../bin
./randnum
exit_status=$?
echo $exit_status
cd ../build
make clean
cd ..
cd ..
python prime.py $exit_status
done
