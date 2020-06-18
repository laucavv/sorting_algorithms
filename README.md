<p align="center">
  <img src="https://www.holbertonschool.com/holberton-logo.png" width="360"/>
 
 <h1 align="center">0x1B. C - Sorting algorithms & Big O - Bash</h1>
</p>

<p align="center">
  <img src="https://i.stack.imgur.com/WcBRI.png" width="700"/>
</p>
<p>
 The simplest definition I can give for Big-O notation is this:

Big-O notation is a relative representation of the complexity of an algorithm.

There are some important and deliberately chosen words in that sentence:

relative: you can only compare apples to apples. You can't compare an algorithm to do arithmetic multiplication to an algorithm that sorts a list of integers. But a comparison of two algorithms to do arithmetic operations (one multiplication, one addition) will tell you something meaningful;
representation: Big-O (in its simplest form) reduces the comparison between algorithms to a single variable. That variable is chosen based on observations or assumptions. For example, sorting algorithms are typically compared based on comparison operations (comparing two nodes to determine their relative ordering). This assumes that comparison is expensive. But what if the comparison is cheap but swapping is expensive? It changes the comparison; and
complexity: if it takes me one second to sort 10,000 elements, how long will it take me to sort one million? Complexity in this instance is a relative measure to something else.
<br />
Reference stackoverflow: [What is a plain English explanation of “Big O” notation? ](https://stackoverflow.com/questions/487258/what-is-a-plain-english-explanation-of-big-o-notation)
</p>



* At least four different sorting algorithms
  * [Bubble sort](https://www.geeksforgeeks.org/bubble-sort/)
  * [Insertion sort](https://www.geeksforgeeks.org/insertion-sort/)
  * [Selection sort](https://www.geeksforgeeks.org/selection-sort/)
  * [Quick sort](https://www.geeksforgeeks.org/quick-sort/)


### :file_folder: Files 

##|File|Description
---|---|---
1|[README.md](./README.md)|Readme.
2|[0-bubble_sort.c](./0-bubble_sort.c)|Bubble Sort Algorithm 
3|[0-O](./0-O)|Big O notations of the time complexity of the Bubble Sort Algorithm
4|[1-insertion_sort_list.c](./1-insertion_sort_list.c)|Insertion Sort Algorithm
5|[1-O](./1-O)|Big O notations of the time complexity of the Insertion Sort Algorithm
6|[2-selection_sort.c](./2-selection_sort.c)|Selection Sort Algorithm
7|[2-O](./2-O)|Big O notations of the time complexity of the Selection Sort Algorithm
8|[3-quick_sort.c](./3-quick_sort.c)|Quick Sort Algorithm
9|[3-O](./3-O)|Big O notations of the time complexity of the Quick Sort Algorithm

## Usage

### Download:

Clone the repository with the command line interface:

`git clone https://github.com/laucavv/sorting_algorithms.git`

### Compilation:

Compile `.c` files with:

`gcc -Wall -Werror -Wextra -pedantic file.c -o file`

### Execution:

`user@ubuntu:~/sorting_algorithms$ ./file`

<p align="center">
    <h2 align="center">By:</h2>
    <h2 align="center">Juan Sebastian Llano Gallego</h2>
      <p align="center">
        <a href="https://twitter.com/llanoJS" target="_blank">
            <img alt="twitter_page" src="https://raw.githubusercontent.com/EckoJuan/Readme_template/master/images/twitter.png" style="float: center; margin-right: 10px" height="50" width="50">
        </a>
        <a href="https://www.linkedin.com/in/juansllano/" target="_blank">
            <img alt="linkedin_page" src="https://raw.githubusercontent.com/EckoJuan/Readme_template/master/images/linkedin.png" style="float: center; margin-right: 10px" height="50"  width="50">
        </a>
        <a href="https://medium.com/@juanllano93" target="_blank">
            <img alt="medium_page" src="https://raw.githubusercontent.com/EckoJuan/Readme_template/master/images/medium.png" style="float: center; margin-right: 10px" height="50" width="50">
        </a>
  <h2 align="center">Laura Villan</h2>
      <p align="center">
        <a href="https://twitter.com/laucavv23" target="_blank">
            <img alt="twitter_page" src="https://raw.githubusercontent.com/EckoJuan/Readme_template/master/images/twitter.png" style="float: center; margin-right: 10px" height="50" width="50">
        </a>
        <a href="https://www.linkedin.com/in/laura-camila-villan-vinasco-97a1b61a1/" target="_blank">
            <img alt="linkedin_page" src="https://raw.githubusercontent.com/EckoJuan/Readme_template/master/images/linkedin.png" style="float: center; margin-right: 10px" height="50"  width="50">
        </a>
        <a href="https://medium.com/@laucavv23" target="_blank">
            <img alt="medium_page" src="https://raw.githubusercontent.com/EckoJuan/Readme_template/master/images/medium.png" style="float: center; margin-right: 10px" height="50" width="50">
        </a>
      </p>
</p>

## Made with :heart: in
<img src="https://www.holbertonschool.com/holberton-logo.png"
     alt="Flow chart"
     style="float: left; margin-right: 10px;">

__Holberton School - Colombia__

__Foundations - Low-level programming & Algorithm ― Data structures and Algorithms__

__June, 2020.__
