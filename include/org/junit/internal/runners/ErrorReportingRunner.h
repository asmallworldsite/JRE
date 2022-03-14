//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/junit/internal/runners/ErrorReportingRunner.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitInternalRunnersErrorReportingRunner")
#ifdef RESTRICT_OrgJunitInternalRunnersErrorReportingRunner
#define INCLUDE_ALL_OrgJunitInternalRunnersErrorReportingRunner 0
#else
#define INCLUDE_ALL_OrgJunitInternalRunnersErrorReportingRunner 1
#endif
#undef RESTRICT_OrgJunitInternalRunnersErrorReportingRunner

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgJunitInternalRunnersErrorReportingRunner_) && (INCLUDE_ALL_OrgJunitInternalRunnersErrorReportingRunner || defined(INCLUDE_OrgJunitInternalRunnersErrorReportingRunner))
#define OrgJunitInternalRunnersErrorReportingRunner_

#define RESTRICT_OrgJunitRunnerRunner 1
#define INCLUDE_OrgJunitRunnerRunner 1
#include "org/junit/runner/Runner.h"

@class IOSClass;
@class IOSObjectArray;
@class JavaLangThrowable;
@class OrgJunitRunnerDescription;
@class OrgJunitRunnerNotificationRunNotifier;

@interface OrgJunitInternalRunnersErrorReportingRunner : OrgJunitRunnerRunner

#pragma mark Public

- (instancetype __nonnull)initWithIOSClass:(IOSClass *)testClass
                     withJavaLangThrowable:(JavaLangThrowable *)cause;

- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable *)cause
                                  withIOSClassArray:(IOSObjectArray *)testClasses;

- (OrgJunitRunnerDescription *)getDescription;

- (void)runWithOrgJunitRunnerNotificationRunNotifier:(OrgJunitRunnerNotificationRunNotifier *)notifier;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitInternalRunnersErrorReportingRunner)

FOUNDATION_EXPORT void OrgJunitInternalRunnersErrorReportingRunner_initWithIOSClass_withJavaLangThrowable_(OrgJunitInternalRunnersErrorReportingRunner *self, IOSClass *testClass, JavaLangThrowable *cause);

FOUNDATION_EXPORT OrgJunitInternalRunnersErrorReportingRunner *new_OrgJunitInternalRunnersErrorReportingRunner_initWithIOSClass_withJavaLangThrowable_(IOSClass *testClass, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitInternalRunnersErrorReportingRunner *create_OrgJunitInternalRunnersErrorReportingRunner_initWithIOSClass_withJavaLangThrowable_(IOSClass *testClass, JavaLangThrowable *cause);

FOUNDATION_EXPORT void OrgJunitInternalRunnersErrorReportingRunner_initWithJavaLangThrowable_withIOSClassArray_(OrgJunitInternalRunnersErrorReportingRunner *self, JavaLangThrowable *cause, IOSObjectArray *testClasses);

FOUNDATION_EXPORT OrgJunitInternalRunnersErrorReportingRunner *new_OrgJunitInternalRunnersErrorReportingRunner_initWithJavaLangThrowable_withIOSClassArray_(JavaLangThrowable *cause, IOSObjectArray *testClasses) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitInternalRunnersErrorReportingRunner *create_OrgJunitInternalRunnersErrorReportingRunner_initWithJavaLangThrowable_withIOSClassArray_(JavaLangThrowable *cause, IOSObjectArray *testClasses);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitInternalRunnersErrorReportingRunner)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitInternalRunnersErrorReportingRunner")
