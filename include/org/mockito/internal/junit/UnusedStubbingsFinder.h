//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/junit/UnusedStubbingsFinder.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalJunitUnusedStubbingsFinder")
#ifdef RESTRICT_OrgMockitoInternalJunitUnusedStubbingsFinder
#define INCLUDE_ALL_OrgMockitoInternalJunitUnusedStubbingsFinder 0
#else
#define INCLUDE_ALL_OrgMockitoInternalJunitUnusedStubbingsFinder 1
#endif
#undef RESTRICT_OrgMockitoInternalJunitUnusedStubbingsFinder

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoInternalJunitUnusedStubbingsFinder_) && (INCLUDE_ALL_OrgMockitoInternalJunitUnusedStubbingsFinder || defined(INCLUDE_OrgMockitoInternalJunitUnusedStubbingsFinder))
#define OrgMockitoInternalJunitUnusedStubbingsFinder_

@class OrgMockitoInternalJunitUnusedStubbings;
@protocol JavaLangIterable;
@protocol JavaUtilCollection;

/*!
 @brief Finds unused stubbings
 */
@interface OrgMockitoInternalJunitUnusedStubbingsFinder : NSObject

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief Gets all unused stubbings for given set of mock objects, in order.
 Stubbings explicitily marked as LENIENT are not included.
 */
- (OrgMockitoInternalJunitUnusedStubbings *)getUnusedStubbingsWithJavaLangIterable:(id<JavaLangIterable>)mocks;

/*!
 @brief Gets unused stubbings per location.This method is less accurate than <code>getUnusedStubbings(Iterable)</code>.
 It considers that stubbings with the same location (e.g. ClassFile + line number) are the same.
  This is not completely accurate because a stubbing declared in a setup or constructor
  is created per each test method. Because those are different test methods,
  different mocks are created, different 'Invocation' instance is backing the 'Stubbing' instance.
  In certain scenarios (detecting unused stubbings by JUnit runner), we need this exact level of accuracy.
  Stubbing declared in constructor but realized in % of test methods is considered as 'used' stubbing.
  There are high level unit tests that demonstrate this scenario.
 */
- (id<JavaUtilCollection>)getUnusedStubbingsByLocationWithJavaLangIterable:(id<JavaLangIterable>)mocks;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalJunitUnusedStubbingsFinder)

FOUNDATION_EXPORT void OrgMockitoInternalJunitUnusedStubbingsFinder_init(OrgMockitoInternalJunitUnusedStubbingsFinder *self);

FOUNDATION_EXPORT OrgMockitoInternalJunitUnusedStubbingsFinder *new_OrgMockitoInternalJunitUnusedStubbingsFinder_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalJunitUnusedStubbingsFinder *create_OrgMockitoInternalJunitUnusedStubbingsFinder_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalJunitUnusedStubbingsFinder)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalJunitUnusedStubbingsFinder")
