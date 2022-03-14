//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/UnrecoverableEntryException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecurityUnrecoverableEntryException")
#ifdef RESTRICT_JavaSecurityUnrecoverableEntryException
#define INCLUDE_ALL_JavaSecurityUnrecoverableEntryException 0
#else
#define INCLUDE_ALL_JavaSecurityUnrecoverableEntryException 1
#endif
#undef RESTRICT_JavaSecurityUnrecoverableEntryException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaSecurityUnrecoverableEntryException_) && (INCLUDE_ALL_JavaSecurityUnrecoverableEntryException || defined(INCLUDE_JavaSecurityUnrecoverableEntryException))
#define JavaSecurityUnrecoverableEntryException_

#define RESTRICT_JavaSecurityGeneralSecurityException 1
#define INCLUDE_JavaSecurityGeneralSecurityException 1
#include "java/security/GeneralSecurityException.h"

@class JavaLangThrowable;

/*!
 @brief This exception is thrown if an entry in the keystore cannot be recovered.
 @since 1.5
 */
@interface JavaSecurityUnrecoverableEntryException : JavaSecurityGeneralSecurityException

#pragma mark Public

/*!
 @brief Constructs an UnrecoverableEntryException with no detail message.
 */
- (instancetype __nonnull)init;

/*!
 @brief Constructs an UnrecoverableEntryException with the specified detail
  message, which provides more information about why this exception
  has been thrown.
 @param msg the detail message.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)msg;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityUnrecoverableEntryException)

FOUNDATION_EXPORT void JavaSecurityUnrecoverableEntryException_init(JavaSecurityUnrecoverableEntryException *self);

FOUNDATION_EXPORT JavaSecurityUnrecoverableEntryException *new_JavaSecurityUnrecoverableEntryException_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityUnrecoverableEntryException *create_JavaSecurityUnrecoverableEntryException_init(void);

FOUNDATION_EXPORT void JavaSecurityUnrecoverableEntryException_initWithNSString_(JavaSecurityUnrecoverableEntryException *self, NSString *msg);

FOUNDATION_EXPORT JavaSecurityUnrecoverableEntryException *new_JavaSecurityUnrecoverableEntryException_initWithNSString_(NSString *msg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityUnrecoverableEntryException *create_JavaSecurityUnrecoverableEntryException_initWithNSString_(NSString *msg);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityUnrecoverableEntryException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecurityUnrecoverableEntryException")
