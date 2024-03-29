# Tourist road trip planner

This program helps create a road trip from one state to another with a variety of algorthms and traversals. Given an input and ending state this program will utilize a dataset of attractions in the United States to find the most efficient path while still hitting as many attractions as is possible. The algorithms used are Kruskals MST algorithm, BFS, and Dijkstra's algorithm. 

## The location of all major code, data, and results

1. Data folder
Inside of this folder are out two datasets: CS225 final project data.csv and data/neighbors-states.csv. The first contained the names, coordinates, index, and state of each attraction we are using. In the second was data relating to neighboring states in the US as we needed to know which edges our graph needed to have. 

1. Parsing.cpp and parsing.h
These files are how we parse csv data into a data strucutre that can be used to perform actions on. We parsed tge two csv's in the data folder

3. Roadtripgraph.cpp and Roadtripgraph.h
This is where all of the graph construction, algorthims, traversals, input/output, and visual output are done. To run the program, and instand of RoadTrupGraph needs to be made as it holds tourist attractions and creates objects which can run our algorithms. 

4. Calculator.cpp and calculator.h
Some of the earlier mentioned algorthms required us to perform some repeated math which these classes handled

5. us_map1.png
This is the file which updated after a program runs. This png will show the path that is depicted in terminal. 


## How to run the program

To run the program you will need to run 
1. make
2. ./main

After this you will be prompted to enter some inputs to decide how you want to use our planner. Initially you will be asked for a starting state. A correct input requires you to use the two letter abberviation for each state. Illinois for example is IL. Then you will be asked for an ending state. After that, our program will run and gereate an MST, BFS traversal, and Dijkstra's algorthm. 

Here are the choices for states(Except Hawaii and Alaska):

<img width="720" alt="Screen Shot 2021-12-11 at 4 53 26 PM" src="https://media.github-dev.cs.illinois.edu/user/9991/files/463b02af-b88e-4750-a2a2-ef4067418cde">


<img width="189" alt="Screen Shot 2021-12-11 at 4 49 14 PM" src="https://media.github-dev.cs.illinois.edu/user/9991/files/6ce9bae2-c13c-4e04-a35a-90ccfbb84e2a">

<img width="549" alt="Screen Shot 2021-12-11 at 4 49 42 PM" src="https://media.github-dev.cs.illinois.edu/user/9991/files/608b004e-b6e4-4afb-8807-4cc1621ddf47">


You will then be asked to enter either "1" or anything else. This input will decide what we will be displaying on us_map1.png. 
1 means you want to show Djstrikas. Any other key means you want to show BFS

<img width="564" alt="Screen Shot 2021-12-11 at 4 50 05 PM" src="https://media.github-dev.cs.illinois.edu/user/9991/files/befbb406-7cae-48dc-99bf-273552234012">

After this input, us_map1.png will be populated and the program is done

![us_map1](https://media.github-dev.cs.illinois.edu/user/9991/files/731eee0a-3be9-4f78-ba52-8f2a47a2eb18)
