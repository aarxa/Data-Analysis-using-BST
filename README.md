# Data Analysis Project

## Project Objective
This project performs data analysis using a binary search tree (BST) to manage and analyze transaction data. It was developed in C++ as part of a Data Structures and Algorithms (DSA) course.

## Key Features
- **Binary Search Tree (BST) Implementation:** Uses a custom BST and node classes to manage transaction data.
- **Data Analysis:** Reads data from a CSV file and performs analysis to determine key metrics and insights.
- **Modular Design:** Organized into multiple files for better structure and maintainability.

## Technologies Used
- **C++:** Core programming language used for implementing the project.
- **Custom Data Structures:** Implementation of BST and nodes for data management.

## Files Included
- **main.cpp:** The main driver of the program.
- **BST.cpp / BST.h:** Contains the implementation of the binary search tree class.
- **Node.cpp / Node.h:** Contains the implementation of the node class.
- **TransactionNode.cpp / TransactionNode.h:** Contains the implementation of the transaction node class.
- **DataAnalysis.cpp / DataAnalysis.h:** Contains the implementation of the data analysis functionalities.
- **data.csv:** Sample data file used for analysis.

## Installation Instructions
1. **Clone the Repository:**
   ```bash
   git clone https://github.com/yourusername/data-analysis.git
   cd data-analysis
2. **Compile the Program:**
   Use the provided Makefile or a C++ compiler to build the project:
   ```bash
   make
   ```
   Alternatively, you can compile the program manually:
   ```bash
   g++ -o data-analysis main.cpp BST.cpp Node.cpp TransactionNode.cpp DataAnalysis.cpp

## Usage Instructions
1. **Run the Program:**
   After compiling, run the executable:
   ```bash
   ./data-analysis
   
2. **Data File:**
   Ensure that the data.csv file is in the same directory as the executable. The program will read from this file to perform the analysis.

3. **Program Flow:**
   - **Read Data:** The program reads transaction data from the CSV file.
   - **Insert Data:** Inserts the data into a binary search tree.
   - **Analyze Data:** Performs various analyses on the data, such as finding maximum and minimum transactions.

## Additional Information
- **Acknowledgements:** Special thanks to the course instructor and teaching assistants for their guidance and support throughout the project.
- **Future Enhancements:** Plans to add features like additional data analysis metrics, exporting analysis results to a file, and improving the user interface.
- **Contributions:** Contributions are welcome! Feel free to fork the repository, submit issues, and create pull requests.
