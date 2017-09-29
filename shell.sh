cd random/build
make
cd ..

for number in `seq 1 100`
do
echo TEST NUMBER :- $number

cd bin
./randnum
exit_status=$?
echo $exit_status
#cd ../build
#make clean
cd ..
cd ..
python prime.py $exit_status
cd random
done
