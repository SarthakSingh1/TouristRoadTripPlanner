*IMPORTANT* we have commits for each week inside of the weekly updates folder that talk more in detail about what we talked about, how we split up work, etc. I just compiled all of it into an easy to read format to make grading easier

Week 1: We met this week and set the framework for working collaboratively on our project for the next few weeks. We initialized our CSV data file and began converting it into easily accessible, parseable data. Furthermore, we also set boundaries and general guidelines for implementing our graph structures and how the weights would be set. Additionally, we also created the framework for how the parsed data structure will be made into a traversal that traverses our graphs in two different ways. We also began working on the MakeFile Setup (making the files and putting starter code into it), as well as figuring out the test suite and how to incorporate it into the MakeFile. Finally, we have to decide on the best form of working collaboratively, whether through making separate git branches and merging them, working with VSCode Livshare, etc.

Week 2: We met this week to check in on the progress of our past week, solve bugs, and develop plans for the next week. Additionally, we discussed the end implementation of our program. Currently, we have our dataset, makefile, and graph implementation ready. We decided that all of our data when parsed will be inside of a vector of a struct. This struct will contain information like name, state, neighboring states, etc. We decided on our IO for our program as the following: Input: State(Ex. IL), State(EX. FL). This means I want to go from Illinois to Florida. Output: Total distance(Miles), Attraction Visited, and PNG graph of path. We also got our make files up and running. We are now able to compile main. 

Week 3:
We finished parsing our CSV data and putting that data into a graph object. Now the graph can be represented as an adjacency matrix/ AdjacencyList which has the neighboring attractions stored as borders, with the weights being the distance between the attractions. We have tested the adjacency matrix inside of main and manually verified that everything is how we intend it. 

Week 4:  We now have made significant progress towards completing our 3 algorithms: Kruskals, BFS, and Djstrikas, and are now currently creating test suites to incorporate with I/O. We actually ended up changing from Prims to Kruskals since we thought it created a better MST with our dataset. Additionally, we got code running for our graphical output. We were able to draw two nodes and an edge between them on our map. 

Week 5:
We finished our three algorithms and tested them by using breakpoints and print statements. We also began to merge all of our code into a single class and started to create helper functions that can run all of the algorithms at once and link that to our graphical output. We also got IO working. Lastly, we began using catch to begin writing actual test suites. We got two tests working as of this meeting and divided up the rest of the tests for the rest of this week. 
