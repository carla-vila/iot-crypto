#ifndef RSA_H
#define RSA_H

// Function prototypes
long long mod_exp(long long base, long long exp, long long modulus);
long long rsa_encrypt(long long plaintext, long long e, long long n);

#endif /* RSA_H */