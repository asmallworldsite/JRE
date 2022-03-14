//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/junit/validator/AnnotationValidator.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitValidatorAnnotationValidator")
#ifdef RESTRICT_OrgJunitValidatorAnnotationValidator
#define INCLUDE_ALL_OrgJunitValidatorAnnotationValidator 0
#else
#define INCLUDE_ALL_OrgJunitValidatorAnnotationValidator 1
#endif
#undef RESTRICT_OrgJunitValidatorAnnotationValidator

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgJunitValidatorAnnotationValidator_) && (INCLUDE_ALL_OrgJunitValidatorAnnotationValidator || defined(INCLUDE_OrgJunitValidatorAnnotationValidator))
#define OrgJunitValidatorAnnotationValidator_

@class OrgJunitRunnersModelFrameworkField;
@class OrgJunitRunnersModelFrameworkMethod;
@class OrgJunitRunnersModelTestClass;
@protocol JavaUtilList;

/*!
 @brief Validates annotations on classes and methods.To be validated,
  an annotation should be annotated with <code>ValidateWith</code>
  Instances of this class are shared by multiple test runners, so they should
  be immutable and thread-safe.
 @since 4.12
 */
@interface OrgJunitValidatorAnnotationValidator : NSObject

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief Validates annotation on the given class.
 @param testClass that is being validated
 @return A list of exceptions. Default behavior is to return an empty list.
 @since 4.12
 */
- (id<JavaUtilList>)validateAnnotatedClassWithOrgJunitRunnersModelTestClass:(OrgJunitRunnersModelTestClass *)testClass;

/*!
 @brief Validates annotation on the given field.
 @param field that is being validated
 @return A list of exceptions. Default behavior is to return an empty list.
 @since 4.12
 */
- (id<JavaUtilList>)validateAnnotatedFieldWithOrgJunitRunnersModelFrameworkField:(OrgJunitRunnersModelFrameworkField *)field;

/*!
 @brief Validates annotation on the given method.
 @param method that is being validated
 @return A list of exceptions. Default behavior is to return an empty list.
 @since 4.12
 */
- (id<JavaUtilList>)validateAnnotatedMethodWithOrgJunitRunnersModelFrameworkMethod:(OrgJunitRunnersModelFrameworkMethod *)method;

@end

J2OBJC_STATIC_INIT(OrgJunitValidatorAnnotationValidator)

FOUNDATION_EXPORT void OrgJunitValidatorAnnotationValidator_init(OrgJunitValidatorAnnotationValidator *self);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitValidatorAnnotationValidator)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitValidatorAnnotationValidator")
