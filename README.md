# zhao
谭浩强学习笔记
### day 7.5
ex1 : Hello World!
ex2 : 比较两整数大小。
---------------------
### day 7.6
ex3 : 1-2022闰年判别。
ex4 : 递归求阶乘。
---------------------
### day 7.7
ex5 : j=5,(++j) + (++j) + (++j)=?不同编译器执行顺序不同，编译器gcc下，答案为22)
遇到第一个(++j)，j先自增一次(j=3)；在遇到“+”时，不会先把j的值传送回来，而是先计算加法运算的第二个操作数，于是遇到第二个(++j)，j自增一次(j=4)，此时j的值(4)才传送回来进行加法运算，这时右边的表达式相当于(4+4)+(++j)=8+(++j)；接着遇到第二个“+”，就先进行第三个(++j)的运算，j再自增一次(j=5)
参考原文链接：https://blog.csdn.net/a26013/article/details/121377828
ex6 :  printf("%d\n%d\n%d\n%d\n%d\n%d\n",++i,--i,i++,i--,-i++,-i--)时，采用自增顺序从右往左。
---------------------