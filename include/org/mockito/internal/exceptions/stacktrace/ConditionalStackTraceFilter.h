//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/exceptions/stacktrace/ConditionalStackTraceFilter.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalExceptionsStacktraceConditionalStackTraceFilter")
#ifdef RESTRICT_OrgMockitoInternalExceptionsStacktraceConditionalStackTraceFilter
#define INCLUDE_ALL_OrgMockitoInternalExceptionsStacktraceConditionalStackTraceFilter 0
#else
#define INCLUDE_ALL_OrgMockitoInternalExceptionsStacktraceConditionalStackTraceFilter 1
#endif
#undef RESTRICT_OrgMockitoInternalExceptionsStacktraceConditionalStackTraceFilter

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoInternalExceptionsStacktraceConditionalStackTraceFilter_) && (INCLUDE_ALL_OrgMockitoInternalExceptionsStacktraceConditionalStackTraceFilter || defined(INCLUDE_OrgMockitoInternalExceptionsStacktraceConditionalStackTraceFilter))
#define OrgMockitoInternalExceptionsStacktraceConditionalStackTraceFilter_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class JavaLangThrowable;

@interface OrgMockitoInternalExceptionsStacktraceConditionalStackTraceFilter : NSObject < JavaIoSerializable >

#pragma mark Public

- (instancetype __nonnull)init;

- (void)filterWithJavaLangThrowable:(JavaLangThrowable *)throwable;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalExceptionsStacktraceConditionalStackTraceFilter)

FOUNDATION_EXPORT void OrgMockitoInternalExceptionsStacktraceConditionalStackTraceFilter_init(OrgMockitoInternalExceptionsStacktraceConditionalStackTraceFilter *self);

FOUNDATION_EXPORT OrgMockitoInternalExceptionsStacktraceConditionalStackTraceFilter *new_OrgMockitoInternalExceptionsStacktraceConditionalStackTraceFilter_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalExceptionsStacktraceConditionalStackTraceFilter *create_OrgMockitoInternalExceptionsStacktraceConditionalStackTraceFilter_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalExceptionsStacktraceConditionalStackTraceFilter)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalExceptionsStacktraceConditionalStackTraceFilter")
