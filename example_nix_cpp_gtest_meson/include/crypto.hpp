#include <openssl/evp.h>
#include <openssl/sha.h>
#include <openssl/md5.h>
#include <sstream>
#include <iomanip>
#include <string>

// Note: C-style casts, for instance (int), are used to simplify the source code.
//       C++ casts, such as static_cast and reinterpret_cast, should otherwise
//       be used in modern C++.

/// Limited C++ bindings for the OpenSSL Crypto functions.
class Crypto {
public:
  /// Return hex string from bytes in input string.
  static std::string hex(const std::string &input) {
    std::stringstream hex_stream;
    hex_stream << std::hex << std::internal << std::setfill('0');
    for (auto &byte : input)
      hex_stream << std::setw(2) << (int)(unsigned char)byte;
    return hex_stream.str();
  }

  /// Return the MD5 (128-bit) hash from input.
  static std::string md5(const std::string &input, size_t iterations = 1) {
    std::string hash;
    hash.resize(128 / 8);
    MD5((const unsigned char *)input.c_str(), input.size(), (unsigned char *)hash.c_str());

    for (size_t c = 1; c < iterations; ++c)
      MD5((const unsigned char *)hash.c_str(), hash.size(), (unsigned char *)hash.c_str());

    return hash;
  }

  /// Return the SHA-1 (160-bit) hash from input.
  static std::string sha1(const std::string &input, size_t iterations = 1) {
    std::string hash;
    hash.resize(160 / 8);
    SHA1((const unsigned char *)input.c_str(), input.size(), (unsigned char *)hash.c_str());

    for (size_t c = 1; c < iterations; ++c)
      SHA1((const unsigned char *)hash.c_str(), hash.size(), (unsigned char *)hash.c_str());

    return hash;
  }

  /// Return the SHA-256 (256-bit) hash from input.
  static std::string sha256(const std::string &input, size_t iterations = 1) {
    std::string hash;
    hash.resize(256 / 8);
    SHA256((const unsigned char *)input.c_str(), input.size(), (unsigned char *)hash.c_str());
    
    for (size_t c = 1; c < iterations; ++c)
      SHA256((const unsigned char *)hash.c_str(), hash.size(), (unsigned char *)hash.c_str());
    
    return hash;
  }

  /// Return the SHA-512 (512-bit) hash from input.
  static std::string sha512(const std::string &input, size_t iterations = 1) {
    std::string hash;
    hash.resize(512 / 8);
    SHA512((const unsigned char *)input.c_str(), input.size(), (unsigned char *)hash.c_str());
    
    for (size_t c = 1; c < iterations; ++c)
      SHA512((const unsigned char *)hash.c_str(), hash.size(), (unsigned char *)hash.c_str());
    
    return hash;
  }

  /// Return key from the Password-Based Key Derivation Function 2 (PBKDF2).
 static std::string pbkdf2(const std::string &password, const std::string &salt, int iterations = 4096, int key_length = 256 / 8) {
    std::string key;
    key.resize(key_length);
    PKCS5_PBKDF2_HMAC_SHA1(password.c_str(), password.size(),
                                          (const unsigned char *)salt.c_str(), salt.size(), iterations,
                                          key_length, (unsigned char *)key.c_str());
    

     // throw std::runtime_error("openssl: error calling PBKCS5_PBKDF2_HMAC_SHA1");
    return key;
  }
  
};
