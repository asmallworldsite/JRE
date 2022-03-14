//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/android/build_result/java/com/google/thirdparty/publicsuffix/TrieParser.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleThirdpartyPublicsuffixTrieParser")
#ifdef RESTRICT_ComGoogleThirdpartyPublicsuffixTrieParser
#define INCLUDE_ALL_ComGoogleThirdpartyPublicsuffixTrieParser 0
#else
#define INCLUDE_ALL_ComGoogleThirdpartyPublicsuffixTrieParser 1
#endif
#undef RESTRICT_ComGoogleThirdpartyPublicsuffixTrieParser

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleThirdpartyPublicsuffixTrieParser_) && (INCLUDE_ALL_ComGoogleThirdpartyPublicsuffixTrieParser || defined(INCLUDE_ComGoogleThirdpartyPublicsuffixTrieParser))
#define ComGoogleThirdpartyPublicsuffixTrieParser_

@class ComGoogleCommonCollectImmutableMap;
@protocol JavaLangCharSequence;

/*!
 @brief Parser for a map of reversed domain names stored as a serialized radix tree.
 */
@interface ComGoogleThirdpartyPublicsuffixTrieParser : NSObject

#pragma mark Package-Private

- (instancetype __nonnull)initPackagePrivate;

/*!
 @brief Parses a serialized trie representation of a map of reversed public suffixes into an immutable
  map of public suffixes.
 */
+ (ComGoogleCommonCollectImmutableMap *)parseTrieWithJavaLangCharSequence:(id<JavaLangCharSequence>)encoded;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(ComGoogleThirdpartyPublicsuffixTrieParser)

FOUNDATION_EXPORT void ComGoogleThirdpartyPublicsuffixTrieParser_initPackagePrivate(ComGoogleThirdpartyPublicsuffixTrieParser *self);

FOUNDATION_EXPORT ComGoogleThirdpartyPublicsuffixTrieParser *new_ComGoogleThirdpartyPublicsuffixTrieParser_initPackagePrivate(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleThirdpartyPublicsuffixTrieParser *create_ComGoogleThirdpartyPublicsuffixTrieParser_initPackagePrivate(void);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMap *ComGoogleThirdpartyPublicsuffixTrieParser_parseTrieWithJavaLangCharSequence_(id<JavaLangCharSequence> encoded);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleThirdpartyPublicsuffixTrieParser)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleThirdpartyPublicsuffixTrieParser")
