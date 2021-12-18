# Var
NAME=./convert
MAKE=make
RE=re
FCLEAN=fclean

arr=("42" "42.42" "0" "42.0f" "nan" "-nan" "nanf"  "-nanf" "inf" "-inf" "inff" "-inff" 
        "128" "2147483648" "-2147483649")

# SCRIPT
# RUN MAKE RE
$MAKE $RE

# RUN TESTCASE
echo -e "\033[47;30mRUN TESTCASE\033[0m\n"

for ((i=0; i<${#arr[@]}; i++)); do
    echo -e "\033[33;31m$NAME ${arr[i]}\033[0m"
    $NAME ${arr[i]}
    echo -e ""
done

echo -e "\033[47;30mTEST FINISHED ! GOOD BYE 👋\033[0m\n"

# RUN MAKE FCLEAN
$MAKE $FCLEAN