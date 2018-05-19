在UBUNTU上安装：
sudo add-apt-repository ppa:jonathonf/python-3.6

sudo apt-get update
sudo apt-get install python3.6

#图形开发包，不安装提示请安装    sudo apt-get install python3-tk 但是安装了并没有卵用

1. tk开发包： sudo apt-get install tk-dev

2. Python的tk模块：sudo apt-get install python-tk


#使用python3 编译的错误，已经安装了 python3-tk
pan@ubuntu:~$ python3 pythonDraw.py 
Traceback (most recent call last):
  File "/usr/lib/python3.5/tkinter/__init__.py", line 36, in <module>
    import _tkinter
ImportError: No module named '_tkinter'

During handling of the above exception, another exception occurred:

Traceback (most recent call last):
  File "pythonDraw.py", line 2, in <module>
    import turtle
  File "/usr/lib/python3.5/turtle.py", line 107, in <module>
    import tkinter as TK
  File "/usr/lib/python3.5/tkinter/__init__.py", line 38, in <module>
    raise ImportError(str(msg) + ', please install the python3-tk package')
ImportError: No module named '_tkinter', please install the python3-tk package











sudo snap install  pycharm-community --classic   安装集成开发环境 IDE  

随便在一个文件中编写，只要是py 结尾就行；

比如用 touch 命令创建一个文件

touch py.py  
这就是已经创建了一个Python文件了

对他编译：
file   py.py

//输出函数
print("hello world")   //开头没有空格，结尾没有分号;

写好后保存，运行在终端上输入

Python py.py   

运行结果；
hello world

Python2 不支持中文
Python3 支持中文


早上起床，拿起订书机，把今天要完成的任务，列成一个表【'f','F'】,并且订在了床头。

呆呆的望向天花板：
哪里有我昨晚写下的一堆话，都是励志的，比如  “没钱就挣钱”,"没有什么不可能学不会的" 这些都是字符串

不管怎么样，想法是好的，但都要开始行动才能实现自己的想法：
看上哪个关闭着的卧室门，哈哈哈，这个门真的很搞笑，他说，不管是谁，出门必须低头，必须比他低一级，要不然
谁也不给出去，所以这个 str[0:-1]  要求？矮的没要求，姚明过去就得把头低下、所以，
F = 1.8*eval(Tempstr[0:-1])+32
字符串Tempstr  第一个开始，到倒数第二个，就是最后一个不要，相当于姚明的头不要。


eval（）：  evaluate  评估
一个遛弯，来到厕所，意外（eval）的，居然已经把什么东西都准备好了，到底准备什么？




乌龟大发，当出现这个东西的时候：Cannot find reference 'xxx' in '__init__.py'
Also you can use Turtle class:

T = turtle.Turtle()
T.fillcolor('red')
etc



import turtle
import time
T = turtle.Turtle() //加了这个下面用T对象来搞的就没有警告了。

T.pensize(5) 
turtle.pencolor("yellow")
turtle.fillcolor("red")

turtle.begin_fill()
for i in range(5):
    turtle.forward(200)
    turtle.right(144)
turtle.end_fill()
time.sleep(2)

turtle.penup()
turtle.goto(150, 120)
turtle.pendown()
for i in range(5):
    turtle.forward(200)
    turtle.right(144)
turtle.end_fill()
time.sleep(2)

turtle.penup()
turtle.goto(-150, 120)
turtle.pendown()
for i in range(6):
    turtle.forward(90)
    turtle.right(60)
turtle.end_fill()
time.sleep(2)

turtle.penup()
turtle.goto(-150, -120)
turtle.color("green")
turtle.write("Done", font=('Arial', 40, 'normal'))


turtle.mainloop()


























