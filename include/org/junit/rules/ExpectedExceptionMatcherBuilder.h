//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/junit/rules/ExpectedExceptionMatcherBuilder.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitRulesExpectedExceptionMatcherBuilder")
#ifdef RESTRICT_OrgJunitRulesExpectedExceptionMatcherBuilder
#define INCLUDE_ALL_OrgJunitRulesExpectedExceptionMatcherBuilder 0
#else
#define INCLUDE_ALL_OrgJunitRulesExpectedExceptionMatcherBuilder 1
#endif
#undef RESTRICT_OrgJunitRulesExpectedExceptionMatcherBuilder

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgJunitRulesExpectedExceptionMatcherBuilder_) && (INCLUDE_ALL_OrgJunitRulesExpectedExceptionMatcherBuilder || defined(INCLUDE_OrgJunitRulesExpectedExceptionMatcherBuilder))
#define OrgJunitRulesExpectedExceptionMatcherBuilder_

@protocol OrgHamcrestMatcher;

/*!
 @brief Builds special matcher used by <code>ExpectedException</code>.
 */
@interface OrgJunitRulesExpectedExceptionMatcherBuilder : NSObject

#pragma mark Package-Private

- (instancetype __nonnull)initPackagePrivate;

- (void)addWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)matcher;

- (id<OrgHamcrestMatcher>)build;

- (jboolean)expectsThrowable;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitRulesExpectedExceptionMatcherBuilder)

FOUNDATION_EXPORT void OrgJunitRulesExpectedExceptionMatcherBuilder_initPackagePrivate(OrgJunitRulesExpectedExceptionMatcherBuilder *self);

FOUNDATION_EXPORT OrgJunitRulesExpectedExceptionMatcherBuilder *new_OrgJunitRulesExpectedExceptionMatcherBuilder_initPackagePrivate(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitRulesExpectedExceptionMatcherBuilder *create_OrgJunitRulesExpectedExceptionMatcherBuilder_initPackagePrivate(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitRulesExpectedExceptionMatcherBuilder)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitRulesExpectedExceptionMatcherBuilder")
