# Caesar Cipher Program
## Overview
Welcome to the Caesar Cipher Program, a simple tool for encrypting and decrypting messages using the classic Caesar Cipher encryption technique. This program shifts the characters of a message by 3 positions in the ASCII table, ensuring that your message is securely encrypted or decrypted based on your selection.

## Features
Encrypt: Encrypt a message by shifting characters in the ASCII table by 3 positions forward.

Decrypt: Reverse the process to decrypt an encrypted message.

File-based Input and Output: The program reads input from a file (Message.txt for encryption, Encrypted.txt for decryption) and writes the result to an output file (Encrypted.txt for encryption, Message.txt for decryption).

User-Friendly Interface: The program provides a simple text-based interface for the user to choose between encrypting, decrypting, or exiting the program.

## How It Works
The program first reads the amount of characters (including [SPACE]) to dynamically allocate memory to a character array.

Encryption: The program reads a message from a text file, shifts each character by 3 positions, and writes the result to an encrypted output file.

Decryption: The program reads an encrypted message, shifts each character back by 3 positions, and writes the decrypted message to the output file.

Special Handling: Some special characters like '|', '}', and '~' are mapped to other characters to ensure that they are correctly encrypted and decrypted.

## Usage
Step 1: Choose an Option
When the program starts, you'll be prompted to select one of the following options:

1: Encrypt a message

2: Decrypt a message

3: Exit the program

Step 2: File Input/Output
The program expects a file named Message.txt for encryption or Encrypted.txt for decryption.

After performing the encryption or decryption, the result will be saved in Encrypted.txt or Message.txt, respectively.

## Example:
Input file Message.txt contains the message:
Hello, World!

Upon running the program and selecting 1 (Encrypt), the output file Encrypted.txt will contain:
Khoor/#Zruog$

Select 2 (Decrypt) to reverse the process, and the message will be restored to its original form.
NOTE: After pasting your message in the text file, the amount of characters is usually seen at the lower-left corner of your text editor. Please enter the number of characters at the beginning of the file followed by the message on a new line.

size
message.....

## Requirements
A C++ compiler (e.g., GCC, Clang, bloodshed-Dev-C++ )

The program reads and writes files (Message.txt and Encrypted.txt)

## License
This code is proprietary and is not allowed to be modified, distributed, or used without explicit permission from the author.

All rights reserved.
