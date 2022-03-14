//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/javax/crypto/spec/PBEParameterSpec.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxCryptoSpecPBEParameterSpec")
#ifdef RESTRICT_JavaxCryptoSpecPBEParameterSpec
#define INCLUDE_ALL_JavaxCryptoSpecPBEParameterSpec 0
#else
#define INCLUDE_ALL_JavaxCryptoSpecPBEParameterSpec 1
#endif
#undef RESTRICT_JavaxCryptoSpecPBEParameterSpec

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxCryptoSpecPBEParameterSpec_) && (INCLUDE_ALL_JavaxCryptoSpecPBEParameterSpec || defined(INCLUDE_JavaxCryptoSpecPBEParameterSpec))
#define JavaxCryptoSpecPBEParameterSpec_

#define RESTRICT_JavaSecuritySpecAlgorithmParameterSpec 1
#define INCLUDE_JavaSecuritySpecAlgorithmParameterSpec 1
#include "java/security/spec/AlgorithmParameterSpec.h"

@class IOSByteArray;

/*!
 @brief This class specifies the set of parameters used with password-based
  encryption (PBE), as defined in the 
 <a href="http://www.ietf.org/rfc/rfc2898.txt">PKCS #5</a>
  standard.
 @author Jan Luehe
 @since 1.4
 */
@interface JavaxCryptoSpecPBEParameterSpec : NSObject < JavaSecuritySpecAlgorithmParameterSpec >

#pragma mark Public

/*!
 @brief Constructs a parameter set for password-based encryption as defined in
  the PKCS #5 standard.
 @param salt the salt. The contents of  <code> salt </code>  are copied
   to protect against subsequent modification.
 @param iterationCount the iteration count.
 @throw NullPointerExceptionif <code>salt</code> is null.
 */
- (instancetype __nonnull)initWithByteArray:(IOSByteArray *)salt
                                    withInt:(jint)iterationCount;

/*!
 @brief Constructs a parameter set for password-based encryption as defined in
  the PKCS #5 standard.
 @param salt the salt. The contents of  <code> salt </code>  are copied
   to protect against subsequent modification.
 @param iterationCount the iteration count.
 @param paramSpec the cipher algorithm parameter specification, which  may be null.
 @throw NullPointerExceptionif <code>salt</code> is null.
 @since 1.8
 */
- (instancetype __nonnull)initWithByteArray:(IOSByteArray *)salt
                                    withInt:(jint)iterationCount
 withJavaSecuritySpecAlgorithmParameterSpec:(id<JavaSecuritySpecAlgorithmParameterSpec>)paramSpec;

/*!
 @brief Returns the iteration count.
 @return the iteration count
 */
- (jint)getIterationCount;

/*!
 @brief Returns the cipher algorithm parameter specification.
 @return the parameter specification, or null if none was set.
 @since 1.8
 */
- (id<JavaSecuritySpecAlgorithmParameterSpec>)getParameterSpec;

/*!
 @brief Returns the salt.
 @return the salt. Returns a new array
  each time this method is called.
 */
- (IOSByteArray *)getSalt;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxCryptoSpecPBEParameterSpec)

FOUNDATION_EXPORT void JavaxCryptoSpecPBEParameterSpec_initWithByteArray_withInt_(JavaxCryptoSpecPBEParameterSpec *self, IOSByteArray *salt, jint iterationCount);

FOUNDATION_EXPORT JavaxCryptoSpecPBEParameterSpec *new_JavaxCryptoSpecPBEParameterSpec_initWithByteArray_withInt_(IOSByteArray *salt, jint iterationCount) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxCryptoSpecPBEParameterSpec *create_JavaxCryptoSpecPBEParameterSpec_initWithByteArray_withInt_(IOSByteArray *salt, jint iterationCount);

FOUNDATION_EXPORT void JavaxCryptoSpecPBEParameterSpec_initWithByteArray_withInt_withJavaSecuritySpecAlgorithmParameterSpec_(JavaxCryptoSpecPBEParameterSpec *self, IOSByteArray *salt, jint iterationCount, id<JavaSecuritySpecAlgorithmParameterSpec> paramSpec);

FOUNDATION_EXPORT JavaxCryptoSpecPBEParameterSpec *new_JavaxCryptoSpecPBEParameterSpec_initWithByteArray_withInt_withJavaSecuritySpecAlgorithmParameterSpec_(IOSByteArray *salt, jint iterationCount, id<JavaSecuritySpecAlgorithmParameterSpec> paramSpec) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxCryptoSpecPBEParameterSpec *create_JavaxCryptoSpecPBEParameterSpec_initWithByteArray_withInt_withJavaSecuritySpecAlgorithmParameterSpec_(IOSByteArray *salt, jint iterationCount, id<JavaSecuritySpecAlgorithmParameterSpec> paramSpec);

J2OBJC_TYPE_LITERAL_HEADER(JavaxCryptoSpecPBEParameterSpec)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxCryptoSpecPBEParameterSpec")
