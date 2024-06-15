echo "Running Unit Tests."

for i in tests/*_tests
do
    if test -f $i
    then
        if $VALGRIND ./$1 2>> tests/tests.log
        then
            echo $i PASS
        else
            echo "Error in test $i: here is the tests/tests.log"
            echo "_____"
            tail tests/tests.log
            exit 1
        fi
    fi
done
echo ""