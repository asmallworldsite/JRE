//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/creation/settings/CreationSettings.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalCreationSettingsCreationSettings")
#ifdef RESTRICT_OrgMockitoInternalCreationSettingsCreationSettings
#define INCLUDE_ALL_OrgMockitoInternalCreationSettingsCreationSettings 0
#else
#define INCLUDE_ALL_OrgMockitoInternalCreationSettingsCreationSettings 1
#endif
#undef RESTRICT_OrgMockitoInternalCreationSettingsCreationSettings

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoInternalCreationSettingsCreationSettings_) && (INCLUDE_ALL_OrgMockitoInternalCreationSettingsCreationSettings || defined(INCLUDE_OrgMockitoInternalCreationSettingsCreationSettings))
#define OrgMockitoInternalCreationSettingsCreationSettings_

#define RESTRICT_OrgMockitoMockMockCreationSettings 1
#define INCLUDE_OrgMockitoMockMockCreationSettings 1
#include "org/mockito/mock/MockCreationSettings.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class IOSClass;
@class IOSObjectArray;
@class OrgMockitoMockSerializableMode;
@protocol JavaUtilList;
@protocol JavaUtilSet;
@protocol OrgMockitoMockMockName;
@protocol OrgMockitoStubbingAnswer;

@interface OrgMockitoInternalCreationSettingsCreationSettings : NSObject < OrgMockitoMockMockCreationSettings, JavaIoSerializable > {
 @public
  IOSClass *typeToMock_;
  id<JavaUtilSet> extraInterfaces_;
  NSString *name_;
  id spiedInstance_;
  id<OrgMockitoStubbingAnswer> defaultAnswer_;
  id<OrgMockitoMockMockName> mockName_;
  OrgMockitoMockSerializableMode *serializableMode_;
  id<JavaUtilList> invocationListeners_;
  id<JavaUtilList> stubbingLookupListeners_;
  id<JavaUtilList> verificationStartedListeners_;
  jboolean stubOnly_;
  jboolean stripAnnotations_;
  jboolean lenient_;
}

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithOrgMockitoInternalCreationSettingsCreationSettings:(OrgMockitoInternalCreationSettingsCreationSettings *)copy_;

- (IOSObjectArray *)getConstructorArgs;

- (id<OrgMockitoStubbingAnswer>)getDefaultAnswer;

- (id<JavaUtilSet>)getExtraInterfaces;

- (id<JavaUtilList>)getInvocationListeners;

- (id<OrgMockitoMockMockName>)getMockName;

- (NSString *)getName;

- (id)getOuterClassInstance;

- (OrgMockitoMockSerializableMode *)getSerializableMode;

- (id)getSpiedInstance;

- (id<JavaUtilList>)getStubbingLookupListeners;

- (IOSClass *)getTypeToMock;

- (id<JavaUtilList>)getVerificationStartedListeners;

- (jboolean)isLenient;

- (jboolean)isSerializable;

- (jboolean)isStripAnnotations;

- (jboolean)isStubOnly;

- (jboolean)isUsingConstructor;

- (OrgMockitoInternalCreationSettingsCreationSettings *)setExtraInterfacesWithJavaUtilSet:(id<JavaUtilSet>)extraInterfaces;

- (OrgMockitoInternalCreationSettingsCreationSettings *)setMockNameWithOrgMockitoMockMockName:(id<OrgMockitoMockMockName>)mockName;

- (OrgMockitoInternalCreationSettingsCreationSettings *)setSerializableModeWithOrgMockitoMockSerializableMode:(OrgMockitoMockSerializableMode *)serializableMode;

- (OrgMockitoInternalCreationSettingsCreationSettings *)setTypeToMockWithIOSClass:(IOSClass *)typeToMock;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalCreationSettingsCreationSettings)

J2OBJC_FIELD_SETTER(OrgMockitoInternalCreationSettingsCreationSettings, typeToMock_, IOSClass *)
J2OBJC_FIELD_SETTER(OrgMockitoInternalCreationSettingsCreationSettings, extraInterfaces_, id<JavaUtilSet>)
J2OBJC_FIELD_SETTER(OrgMockitoInternalCreationSettingsCreationSettings, name_, NSString *)
J2OBJC_FIELD_SETTER(OrgMockitoInternalCreationSettingsCreationSettings, spiedInstance_, id)
J2OBJC_FIELD_SETTER(OrgMockitoInternalCreationSettingsCreationSettings, defaultAnswer_, id<OrgMockitoStubbingAnswer>)
J2OBJC_FIELD_SETTER(OrgMockitoInternalCreationSettingsCreationSettings, mockName_, id<OrgMockitoMockMockName>)
J2OBJC_FIELD_SETTER(OrgMockitoInternalCreationSettingsCreationSettings, serializableMode_, OrgMockitoMockSerializableMode *)
J2OBJC_FIELD_SETTER(OrgMockitoInternalCreationSettingsCreationSettings, invocationListeners_, id<JavaUtilList>)
J2OBJC_FIELD_SETTER(OrgMockitoInternalCreationSettingsCreationSettings, stubbingLookupListeners_, id<JavaUtilList>)
J2OBJC_FIELD_SETTER(OrgMockitoInternalCreationSettingsCreationSettings, verificationStartedListeners_, id<JavaUtilList>)

FOUNDATION_EXPORT void OrgMockitoInternalCreationSettingsCreationSettings_init(OrgMockitoInternalCreationSettingsCreationSettings *self);

FOUNDATION_EXPORT OrgMockitoInternalCreationSettingsCreationSettings *new_OrgMockitoInternalCreationSettingsCreationSettings_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalCreationSettingsCreationSettings *create_OrgMockitoInternalCreationSettingsCreationSettings_init(void);

FOUNDATION_EXPORT void OrgMockitoInternalCreationSettingsCreationSettings_initWithOrgMockitoInternalCreationSettingsCreationSettings_(OrgMockitoInternalCreationSettingsCreationSettings *self, OrgMockitoInternalCreationSettingsCreationSettings *copy_);

FOUNDATION_EXPORT OrgMockitoInternalCreationSettingsCreationSettings *new_OrgMockitoInternalCreationSettingsCreationSettings_initWithOrgMockitoInternalCreationSettingsCreationSettings_(OrgMockitoInternalCreationSettingsCreationSettings *copy_) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalCreationSettingsCreationSettings *create_OrgMockitoInternalCreationSettingsCreationSettings_initWithOrgMockitoInternalCreationSettingsCreationSettings_(OrgMockitoInternalCreationSettingsCreationSettings *copy_);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalCreationSettingsCreationSettings)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalCreationSettingsCreationSettings")
