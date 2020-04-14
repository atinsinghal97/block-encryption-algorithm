**CSE 539: Applied Cryptography**

**Project 1, Due date: Sep 23**

**Block Encryption Algorithm Project**

**Groups**

This project is to be done in groups of TWO. This requirement will be enforced.

**Purpose**

This project is an opportunity to obtain hands-on practice using the introductory data transformation and brute force techniques covered in the lectures. Design a block encryption algorithm to meet specific requirements, brute force the algorithm, and reflect on how the type of data encrypted affects the breakability of the encryption.

**Objectives**

● Develop a (reversible) 32-bit block encryption algorithm

● Utilize substitution and permutation in encryption

● Brute force a block encryption algorithm

**Technology Requirements**

● C, C++, or Java (C/C++ preferred)

**Project Description**

In cryptography, a block is a fixed-length chunk of data. To encrypt these blocks we use block ciphers. A block cipher is a deterministic algorithm operating on blocks with an unvarying transformation that is specified by a symmetric key. Along with the key, substitution and permutation are also used to transform the data. The S-boxes and P-boxes are used to make the relation between the plaintext and the ciphertext difficult to understand. In general, substitution box (S-box) takes some number of input bits, _m_ , and transforms them into some number of output bits, _n_ , where _n_ is not necessarily equal to _m_ . A permutation box (or P-box) is a method of bit-shuffling used to permute or transpose bits across S-boxes inputs. For this project, you will need to do something similar.

For this project design and implement an algorithm that can encrypt and decrypt the documents. These documents can be in any format (.txt, .pdf, .jpeg and so on). The algorithm should be a 32-bit block encryption algorithm which uses Electronic Code Book (ECB) mode.

The algorithm should meet these requirements:

● The core program/function takes two 32-bit quantities as input, a ‘plaintext’ and a ‘key’, then produce a 32-bit output ‘ciphertext’.

● The input, output, and key are all ‘type-less’ (or unsigned integers) – as they could be any form of data.

● The input and key should be difficult to figure out from the output. I.e., Even if the plaintext and ciphertext are known, the key should be hard to derive. You may use an s-box, a p-box, or both to obscure the relationship between the key and ciphertext.

● The encryption algorithm must be reversible. I.e. Decrypting the encrypted file should be possible when the key is known.

● The encryption should work in a manner that it makes the algorithm hard to “break.”

**Part 1 Directions**

1\. Write a program to encrypt and decrypt data and test it. It should run from the command line with the following format:

% encrypt key <filename1> <filename2

Where **key** is an 8-character (32-bits) HEXADECIMAL string (example: “1A2B9E0F”) and the **input** is in filename1. The program encrypts the input and produces the encrypted **output** in filename2.

2\. Write the decryption program in the same fashion. Make sure you test it on several kinds of input such as text, PDF, JPG, and so on. Please use Linux. You may use C or C++ or Java, but C / C++ is encouraged.

3\. Write a program to brute force the encrypted file and find the key.

4\. Find ways of cracking the key using some weakness of your algorithm without the need for brute forcing it. You are encouraged to get help from friends or colleagues to find weaknesses in your design.

**Part 2 Directions**

Create a design document that:

● Describes your algorithm design and why you made those choices.

● Explain what makes your encryption algorithm effective.

● Documents the time it takes for you to brute force the key.

● Explain how the file type relates to the amount of time it takes to brute force that file.

● What weaknesses did you find? How did they result in faster breaks of the encryption?

**Submission Directions for Project Deliverables**

Submit only the document you generated for Part 2. Keep it short.

Upload to Canvas (.doc, .pdf). Put both names on the document but upload it only once.
