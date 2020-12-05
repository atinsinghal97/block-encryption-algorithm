# Block-Encryption-Algorithm

**Objectives**
- Develop a (reversible) 32-bit block encryption algorithm
- Utilize substitution and permutation in encryption
- Brute force a block encryption algorithm


**Technology Requirements**
- C, C++, or Java (C/C++ preferred)


**Project Description**
In cryptography, a block is a fixed-length chunk of data. To encrypt these blocks we use block ciphers. A block cipher is a deterministic algorithm operating on blocks with an unvarying transformation that is specified by a symmetric key. Along with the key, substitution and permutation are also used to transform the data. The S-boxes and P-boxes are used to make the relation between the plaintext and the ciphertext difficult to understand. In general, substitution box (S-box) takes some number of input bits, m, and transforms them into some number of output bits, n, where n is not necessarily equal to m. A permutation box (or P-box) is a method of bit-shuffling used to permute or transpose bits across S-boxes inputs. For this project, you will need to do something similar.

For this project design and implement an algorithm that can encrypt and decrypt the documents. These documents can be in any format (.txt, .pdf, .jpeg and so on). The algorithm should be a 32-bit block encryption algorithm which uses Electronic Code Book (ECB) mode.

**The algorithm should meet these requirements:**

- The core program/function takes two 32-bit quantities as input, a ‘plaintext’ and a ‘key’, then produce a 32-bit output ‘ciphertext’.
- The input, output, and key are all ‘type-less’ (or unsigned integers) – as they could be any form of data.
- The input and key should be difficult to figure out from the output. I.e., Even if the plaintext and ciphertext are known, the key should be hard to derive. You may use an s-box, a p-box, or both to obscure the relationship between the key and ciphertext.
- The encryption algorithm must be reversible. I.e. Decrypting the encrypted file should be possible when the key is known.
- The encryption should work in a manner that it makes the algorithm hard to “break.”
