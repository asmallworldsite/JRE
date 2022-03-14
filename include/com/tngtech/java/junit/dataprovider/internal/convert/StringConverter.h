//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/com/tngtech/java/junit/dataprovider/internal/convert/StringConverter.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComTngtechJavaJunitDataproviderInternalConvertStringConverter")
#ifdef RESTRICT_ComTngtechJavaJunitDataproviderInternalConvertStringConverter
#define INCLUDE_ALL_ComTngtechJavaJunitDataproviderInternalConvertStringConverter 0
#else
#define INCLUDE_ALL_ComTngtechJavaJunitDataproviderInternalConvertStringConverter 1
#endif
#undef RESTRICT_ComTngtechJavaJunitDataproviderInternalConvertStringConverter

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComTngtechJavaJunitDataproviderInternalConvertStringConverter_) && (INCLUDE_ALL_ComTngtechJavaJunitDataproviderInternalConvertStringConverter || defined(INCLUDE_ComTngtechJavaJunitDataproviderInternalConvertStringConverter))
#define ComTngtechJavaJunitDataproviderInternalConvertStringConverter_

@class IOSObjectArray;
@protocol ComTngtechJavaJunitDataproviderDataProvider;

@interface ComTngtechJavaJunitDataproviderInternalConvertStringConverter : NSObject

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief Converts the given <code>data</code> to its corresponding arguments using the given <code>parameterTypes</code> and other
  provided information.
 @param data regex-separated <code>String</code>  of parameters for test method
 @param isVarArgs determines whether test method has a varargs parameter
 @param parameterTypes target types of parameters to which corresponding values in regex-separated <code>data</code>             should be converted
 @param dataProvider containing settings which should be used to convert given <code>data</code>
 @param rowIdx index of current <code>data</code>  (row) for better error messages
 @return split, trimmed and converted <code>Object[]</code> of supplied regex-separated <code>data</code>
 @throw IllegalArgumentExceptioniif count of split data and parameter types does not match or argument cannot be
              converted to required type
 */
- (IOSObjectArray *)convertWithNSString:(NSString *)data
                            withBoolean:(jboolean)isVarArgs
                      withIOSClassArray:(IOSObjectArray *)parameterTypes
withComTngtechJavaJunitDataproviderDataProvider:(id<ComTngtechJavaJunitDataproviderDataProvider>)dataProvider
                                withInt:(jint)rowIdx;

@end

J2OBJC_EMPTY_STATIC_INIT(ComTngtechJavaJunitDataproviderInternalConvertStringConverter)

FOUNDATION_EXPORT void ComTngtechJavaJunitDataproviderInternalConvertStringConverter_init(ComTngtechJavaJunitDataproviderInternalConvertStringConverter *self);

FOUNDATION_EXPORT ComTngtechJavaJunitDataproviderInternalConvertStringConverter *new_ComTngtechJavaJunitDataproviderInternalConvertStringConverter_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComTngtechJavaJunitDataproviderInternalConvertStringConverter *create_ComTngtechJavaJunitDataproviderInternalConvertStringConverter_init(void);

J2OBJC_TYPE_LITERAL_HEADER(ComTngtechJavaJunitDataproviderInternalConvertStringConverter)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComTngtechJavaJunitDataproviderInternalConvertStringConverter")
