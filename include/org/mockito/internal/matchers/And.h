//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/matchers/And.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalMatchersAnd")
#ifdef RESTRICT_OrgMockitoInternalMatchersAnd
#define INCLUDE_ALL_OrgMockitoInternalMatchersAnd 0
#else
#define INCLUDE_ALL_OrgMockitoInternalMatchersAnd 1
#endif
#undef RESTRICT_OrgMockitoInternalMatchersAnd

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoInternalMatchersAnd_) && (INCLUDE_ALL_OrgMockitoInternalMatchersAnd || defined(INCLUDE_OrgMockitoInternalMatchersAnd))
#define OrgMockitoInternalMatchersAnd_

#define RESTRICT_OrgMockitoArgumentMatcher 1
#define INCLUDE_OrgMockitoArgumentMatcher 1
#include "org/mockito/ArgumentMatcher.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@interface OrgMockitoInternalMatchersAnd : NSObject < OrgMockitoArgumentMatcher, JavaIoSerializable >

#pragma mark Public

- (instancetype __nonnull)initWithOrgMockitoArgumentMatcher:(id<OrgMockitoArgumentMatcher>)m1
                              withOrgMockitoArgumentMatcher:(id<OrgMockitoArgumentMatcher>)m2;

- (jboolean)matchesWithId:(id)actual;

- (NSString *)description;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalMatchersAnd)

FOUNDATION_EXPORT void OrgMockitoInternalMatchersAnd_initWithOrgMockitoArgumentMatcher_withOrgMockitoArgumentMatcher_(OrgMockitoInternalMatchersAnd *self, id<OrgMockitoArgumentMatcher> m1, id<OrgMockitoArgumentMatcher> m2);

FOUNDATION_EXPORT OrgMockitoInternalMatchersAnd *new_OrgMockitoInternalMatchersAnd_initWithOrgMockitoArgumentMatcher_withOrgMockitoArgumentMatcher_(id<OrgMockitoArgumentMatcher> m1, id<OrgMockitoArgumentMatcher> m2) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalMatchersAnd *create_OrgMockitoInternalMatchersAnd_initWithOrgMockitoArgumentMatcher_withOrgMockitoArgumentMatcher_(id<OrgMockitoArgumentMatcher> m1, id<OrgMockitoArgumentMatcher> m2);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalMatchersAnd)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalMatchersAnd")
