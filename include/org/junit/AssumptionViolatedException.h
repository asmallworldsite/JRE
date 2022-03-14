//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/junit/AssumptionViolatedException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitAssumptionViolatedException")
#ifdef RESTRICT_OrgJunitAssumptionViolatedException
#define INCLUDE_ALL_OrgJunitAssumptionViolatedException 0
#else
#define INCLUDE_ALL_OrgJunitAssumptionViolatedException 1
#endif
#undef RESTRICT_OrgJunitAssumptionViolatedException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgJunitAssumptionViolatedException_) && (INCLUDE_ALL_OrgJunitAssumptionViolatedException || defined(INCLUDE_OrgJunitAssumptionViolatedException))
#define OrgJunitAssumptionViolatedException_

#define RESTRICT_OrgJunitInternalAssumptionViolatedException 1
#define INCLUDE_OrgJunitInternalAssumptionViolatedException 1
#include "org/junit/internal/AssumptionViolatedException.h"

@class JavaLangThrowable;
@protocol OrgHamcrestMatcher;

/*!
 @brief An exception class used to implement <i>assumptions</i> (state in which a given test
  is meaningful and should or should not be executed).A test for which an assumption
  fails should not generate a test case failure.
 - seealso: org.junit.Assume
 @since 4.12
 */
@interface OrgJunitAssumptionViolatedException : OrgJunitInternalAssumptionViolatedException

#pragma mark Public

/*!
 @brief An assumption exception with the given message only.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)message;

/*!
 @brief An assumption exception with a message with the given <i>actual</i> value and a 
 <i>matcher</i> describing the expectation that failed.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)message
                                    withId:(id)expected
                    withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)matcher;

/*!
 @brief An assumption exception with the given message and a cause.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)message
                     withJavaLangThrowable:(JavaLangThrowable *)t;

/*!
 @brief An assumption exception with the given <i>actual</i> value and a <i>matcher</i> describing 
  the expectation that failed.
 */
- (instancetype __nonnull)initWithId:(id)actual
              withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)matcher;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                               withBoolean:(jboolean)arg1
                                    withId:(id)arg2
                    withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)arg3 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitAssumptionViolatedException)

FOUNDATION_EXPORT void OrgJunitAssumptionViolatedException_initWithId_withOrgHamcrestMatcher_(OrgJunitAssumptionViolatedException *self, id actual, id<OrgHamcrestMatcher> matcher);

FOUNDATION_EXPORT OrgJunitAssumptionViolatedException *new_OrgJunitAssumptionViolatedException_initWithId_withOrgHamcrestMatcher_(id actual, id<OrgHamcrestMatcher> matcher) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitAssumptionViolatedException *create_OrgJunitAssumptionViolatedException_initWithId_withOrgHamcrestMatcher_(id actual, id<OrgHamcrestMatcher> matcher);

FOUNDATION_EXPORT void OrgJunitAssumptionViolatedException_initWithNSString_withId_withOrgHamcrestMatcher_(OrgJunitAssumptionViolatedException *self, NSString *message, id expected, id<OrgHamcrestMatcher> matcher);

FOUNDATION_EXPORT OrgJunitAssumptionViolatedException *new_OrgJunitAssumptionViolatedException_initWithNSString_withId_withOrgHamcrestMatcher_(NSString *message, id expected, id<OrgHamcrestMatcher> matcher) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitAssumptionViolatedException *create_OrgJunitAssumptionViolatedException_initWithNSString_withId_withOrgHamcrestMatcher_(NSString *message, id expected, id<OrgHamcrestMatcher> matcher);

FOUNDATION_EXPORT void OrgJunitAssumptionViolatedException_initWithNSString_(OrgJunitAssumptionViolatedException *self, NSString *message);

FOUNDATION_EXPORT OrgJunitAssumptionViolatedException *new_OrgJunitAssumptionViolatedException_initWithNSString_(NSString *message) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitAssumptionViolatedException *create_OrgJunitAssumptionViolatedException_initWithNSString_(NSString *message);

FOUNDATION_EXPORT void OrgJunitAssumptionViolatedException_initWithNSString_withJavaLangThrowable_(OrgJunitAssumptionViolatedException *self, NSString *message, JavaLangThrowable *t);

FOUNDATION_EXPORT OrgJunitAssumptionViolatedException *new_OrgJunitAssumptionViolatedException_initWithNSString_withJavaLangThrowable_(NSString *message, JavaLangThrowable *t) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitAssumptionViolatedException *create_OrgJunitAssumptionViolatedException_initWithNSString_withJavaLangThrowable_(NSString *message, JavaLangThrowable *t);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitAssumptionViolatedException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitAssumptionViolatedException")
