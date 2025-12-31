🏦 Banking Transaction Log Analyzer
📌 Project Overview

The Banking Transaction Log Analyzer is a simple system that reads a transaction log file and identifies suspicious banking transactions based on predefined rules. This project helps in understanding file handling, conditional logic, and basic fraud detection concepts.

🎯 Objectives

Read and process transaction logs from a file

Identify suspicious transactions automatically

Improve understanding of file I/O operations

Apply logical conditions to real-world banking scenarios

⚙️ Features

Reads transaction data from a text file

Detects unusually high transaction amounts

Flags invalid or negative transaction values

Displays suspicious transactions clearly

📂 Log File Format

Each transaction in the log file follows this format:

AccountNumber Amount


Example:

1001 25000
1002 75000
1003 -500

🚨 Criteria for Suspicious Transactions

A transaction is considered suspicious if:

The amount is greater than ₹50,000

The amount is less than or equal to 0

🛠️ Technologies Used

Programming Language: C

Concepts: File Handling, Loops, Conditional Statements

✅ Expected Output

The program displays:

Account number

Transaction amount

Only transactions that meet the suspicious criteria

📈 Applications

Basic fraud detection systems

Banking and financial software training

Educational mini-project for students

🔮 Future Enhancements

Add date and time for each transaction

Detect repeated suspicious transactions from the same account

Export suspicious transactions to a separate file

Implement the project using Java or Python
