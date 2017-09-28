for number in {0..100}
do
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
