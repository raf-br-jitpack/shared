#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class SharedModelThing, SharedKoin_coreModule, SharedSharedComponents, SharedKoin_coreKoinApplication, SharedKotlinArray<T>, SharedKoin_coreBeanDefinition<T>, SharedKoin_coreScope, SharedKoin_coreDefinitionParameters, SharedKoin_coreOptions, SharedKoin_coreScopeDSL, SharedKoin_coreLogger, SharedKoin_coreLevel, SharedKoin_coreKoin, SharedKoin_coreKind, SharedKoin_coreProperties, SharedKoin_coreCallbacks<T>, SharedKoin_coreScopeDefinition, SharedKotlinLazyThreadSafetyMode, SharedKotlinEnum<E>, SharedKoin_corePropertyRegistry, SharedKoin_coreScopeRegistry;

@protocol SharedKoin_coreQualifier, SharedKotlinIterator, SharedKotlinKClass, SharedKotlinLazy, SharedKoin_coreScopeCallback, SharedKotlinComparable, SharedKoin_coreKoinScopeComponent, SharedKotlinKDeclarationContainer, SharedKotlinKAnnotatedElement, SharedKotlinKClassifier, SharedKoin_coreKoinComponent;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

__attribute__((swift_name("KotlinBase")))
@interface SharedBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface SharedBase (SharedBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface SharedMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface SharedMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorSharedKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface SharedNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinByte")))
@interface SharedByte : SharedNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface SharedUByte : SharedNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface SharedShort : SharedNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface SharedUShort : SharedNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface SharedInt : SharedNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface SharedUInt : SharedNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface SharedLong : SharedNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface SharedULong : SharedNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface SharedFloat : SharedNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface SharedDouble : SharedNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface SharedBoolean : SharedNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharedComponents")))
@interface SharedSharedComponents : SharedBase
- (instancetype)initWithThing:(SharedModelThing *)thing __attribute__((swift_name("init(thing:)"))) __attribute__((objc_designated_initializer));
@property (readonly) SharedModelThing *thing __attribute__((swift_name("thing")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommonModuleKt")))
@interface SharedCommonModuleKt : SharedBase
@property (class, readonly) SharedKoin_coreModule *commonModule __attribute__((swift_name("commonModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IosModuleKt")))
@interface SharedIosModuleKt : SharedBase
+ (SharedSharedComponents *)iOSInit __attribute__((swift_name("iOSInit()")));
@property (class, readonly) SharedKoin_coreModule *iosModule __attribute__((swift_name("iosModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharedKt")))
@interface SharedSharedKt : SharedBase
+ (SharedKoin_coreKoinApplication *)initializeModules:(SharedKotlinArray<SharedKoin_coreModule *> *)modules init:(void (^ _Nullable)(SharedKoin_coreKoinApplication *))init __attribute__((swift_name("initialize(modules:init:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelThing")))
@interface SharedModelThing : SharedBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SharedModelThing *)doCopyName:(NSString *)name __attribute__((swift_name("doCopy(name:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreModule")))
@interface SharedKoin_coreModule : SharedBase
- (instancetype)initWithCreateAtStart:(BOOL)createAtStart override:(BOOL)override __attribute__((swift_name("init(createAtStart:override:)"))) __attribute__((objc_designated_initializer));
- (SharedKoin_coreBeanDefinition<id> *)factoryQualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier override:(BOOL)override definition:(id _Nullable (^)(SharedKoin_coreScope *, SharedKoin_coreDefinitionParameters *))definition __attribute__((swift_name("factory(qualifier:override:definition:)")));
- (SharedKoin_coreOptions *)makeOptionsOverride:(BOOL)override createdAtStart:(BOOL)createdAtStart __attribute__((swift_name("makeOptions(override:createdAtStart:)")));
- (NSArray<SharedKoin_coreModule *> *)plusModules:(NSArray<SharedKoin_coreModule *> *)modules __attribute__((swift_name("plus(modules:)")));
- (NSArray<SharedKoin_coreModule *> *)plusModule:(SharedKoin_coreModule *)module __attribute__((swift_name("plus(module:)")));
- (void)scopeQualifier:(id<SharedKoin_coreQualifier>)qualifier scopeSet:(void (^)(SharedKoin_coreScopeDSL *))scopeSet __attribute__((swift_name("scope(qualifier:scopeSet:)")));
- (void)scopeScopeSet:(void (^)(SharedKoin_coreScopeDSL *))scopeSet __attribute__((swift_name("scope(scopeSet:)")));
- (SharedKoin_coreBeanDefinition<id> *)singleQualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier createdAtStart:(BOOL)createdAtStart override:(BOOL)override definition:(id _Nullable (^)(SharedKoin_coreScope *, SharedKoin_coreDefinitionParameters *))definition __attribute__((swift_name("single(qualifier:createdAtStart:override:definition:)")));
@property (readonly) BOOL isLoaded __attribute__((swift_name("isLoaded")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKoinApplication")))
@interface SharedKoin_coreKoinApplication : SharedBase
- (void)close __attribute__((swift_name("close()")));
- (SharedKoin_coreKoinApplication *)createEagerInstances __attribute__((swift_name("createEagerInstances()")));
- (SharedKoin_coreKoinApplication *)loggerLogger:(SharedKoin_coreLogger *)logger __attribute__((swift_name("logger(logger:)")));
- (SharedKoin_coreKoinApplication *)modulesModules:(SharedKotlinArray<SharedKoin_coreModule *> *)modules __attribute__((swift_name("modules(modules:)")));
- (SharedKoin_coreKoinApplication *)modulesModules_:(NSArray<SharedKoin_coreModule *> *)modules __attribute__((swift_name("modules(modules_:)")));
- (SharedKoin_coreKoinApplication *)modulesModules__:(SharedKoin_coreModule *)modules __attribute__((swift_name("modules(modules__:)")));
- (SharedKoin_coreKoinApplication *)printLoggerLevel:(SharedKoin_coreLevel *)level __attribute__((swift_name("printLogger(level:)")));
- (SharedKoin_coreKoinApplication *)propertiesValues:(NSDictionary<NSString *, NSString *> *)values __attribute__((swift_name("properties(values:)")));
- (void)unloadModulesModules:(NSArray<SharedKoin_coreModule *> *)modules __attribute__((swift_name("unloadModules(modules:)")));
- (void)unloadModulesModule:(SharedKoin_coreModule *)module __attribute__((swift_name("unloadModules(module:)")));
@property (readonly) SharedKoin_coreKoin *koin __attribute__((swift_name("koin")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface SharedKotlinArray<T> : SharedBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(SharedInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<SharedKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreBeanDefinition")))
@interface SharedKoin_coreBeanDefinition<T> : SharedBase
- (instancetype)initWithScopeQualifier:(id<SharedKoin_coreQualifier>)scopeQualifier primaryType:(id<SharedKotlinKClass>)primaryType qualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier definition:(T _Nullable (^)(SharedKoin_coreScope *, SharedKoin_coreDefinitionParameters *))definition kind:(SharedKoin_coreKind *)kind secondaryTypes:(NSArray<id<SharedKotlinKClass>> *)secondaryTypes options:(SharedKoin_coreOptions *)options properties:(SharedKoin_coreProperties *)properties __attribute__((swift_name("init(scopeQualifier:primaryType:qualifier:definition:kind:secondaryTypes:options:properties:)"))) __attribute__((objc_designated_initializer));
- (BOOL)canBindPrimary:(id<SharedKotlinKClass>)primary secondary:(id<SharedKotlinKClass>)secondary __attribute__((swift_name("canBind(primary:secondary:)")));
- (id<SharedKoin_coreQualifier>)component1 __attribute__((swift_name("component1()")));
- (id<SharedKotlinKClass>)component2 __attribute__((swift_name("component2()")));
- (id<SharedKoin_coreQualifier> _Nullable)component3 __attribute__((swift_name("component3()")));
- (T _Nullable (^)(SharedKoin_coreScope *, SharedKoin_coreDefinitionParameters *))component4 __attribute__((swift_name("component4()")));
- (SharedKoin_coreKind *)component5 __attribute__((swift_name("component5()")));
- (NSArray<id<SharedKotlinKClass>> *)component6 __attribute__((swift_name("component6()")));
- (SharedKoin_coreOptions *)component7 __attribute__((swift_name("component7()")));
- (SharedKoin_coreProperties *)component8 __attribute__((swift_name("component8()")));
- (SharedKoin_coreBeanDefinition<T> *)doCopyScopeQualifier:(id<SharedKoin_coreQualifier>)scopeQualifier primaryType:(id<SharedKotlinKClass>)primaryType qualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier definition:(T _Nullable (^)(SharedKoin_coreScope *, SharedKoin_coreDefinitionParameters *))definition kind:(SharedKoin_coreKind *)kind secondaryTypes:(NSArray<id<SharedKotlinKClass>> *)secondaryTypes options:(SharedKoin_coreOptions *)options properties:(SharedKoin_coreProperties *)properties __attribute__((swift_name("doCopy(scopeQualifier:primaryType:qualifier:definition:kind:secondaryTypes:options:properties:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (BOOL)hasTypeClazz:(id<SharedKotlinKClass>)clazz __attribute__((swift_name("hasType(clazz:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isClazz:(id<SharedKotlinKClass>)clazz qualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier scopeDefinition:(id<SharedKoin_coreQualifier>)scopeDefinition __attribute__((swift_name("is(clazz:qualifier:scopeDefinition:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property SharedKoin_coreCallbacks<T> *callbacks __attribute__((swift_name("callbacks")));
@property (readonly) T _Nullable (^definition)(SharedKoin_coreScope *, SharedKoin_coreDefinitionParameters *) __attribute__((swift_name("definition")));
@property (readonly) SharedKoin_coreKind *kind __attribute__((swift_name("kind")));
@property (readonly) SharedKoin_coreOptions *options __attribute__((swift_name("options")));
@property (readonly) id<SharedKotlinKClass> primaryType __attribute__((swift_name("primaryType")));
@property (readonly) SharedKoin_coreProperties *properties __attribute__((swift_name("properties")));
@property (readonly) id<SharedKoin_coreQualifier> _Nullable qualifier __attribute__((swift_name("qualifier")));
@property (readonly) id<SharedKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@property NSArray<id<SharedKotlinKClass>> *secondaryTypes __attribute__((swift_name("secondaryTypes")));
@end;

__attribute__((swift_name("Koin_coreQualifier")))
@protocol SharedKoin_coreQualifier
@required
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScope")))
@interface SharedKoin_coreScope : SharedBase
- (instancetype)initWithId:(NSString *)id _scopeDefinition:(SharedKoin_coreScopeDefinition *)_scopeDefinition _koin:(SharedKoin_coreKoin *)_koin __attribute__((swift_name("init(id:_scopeDefinition:_koin:)"))) __attribute__((objc_designated_initializer));
- (void)addParametersParameters:(SharedKoin_coreDefinitionParameters *)parameters __attribute__((swift_name("addParameters(parameters:)")));
- (id _Nullable)bindPrimaryType:(id<SharedKotlinKClass>)primaryType secondaryType:(id<SharedKotlinKClass>)secondaryType parameters:(SharedKoin_coreDefinitionParameters *(^ _Nullable)(void))parameters __attribute__((swift_name("bind(primaryType:secondaryType:parameters:)")));
- (id _Nullable)bindParameters:(SharedKoin_coreDefinitionParameters *(^ _Nullable)(void))parameters __attribute__((swift_name("bind(parameters:)")));
- (void)clearParameters __attribute__((swift_name("clearParameters()")));
- (void)close __attribute__((swift_name("close()")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SharedKoin_coreScopeDefinition *)component2 __attribute__((swift_name("component2()")));
- (SharedKoin_coreScope *)doCopyId:(NSString *)id _scopeDefinition:(SharedKoin_coreScopeDefinition *)_scopeDefinition _koin:(SharedKoin_coreKoin *)_koin __attribute__((swift_name("doCopy(id:_scopeDefinition:_koin:)")));
- (void)declareInstance:(id _Nullable)instance qualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier secondaryTypes:(NSArray<id<SharedKotlinKClass>> * _Nullable)secondaryTypes override:(BOOL)override __attribute__((swift_name("declare(instance:qualifier:secondaryTypes:override:)")));
- (void)dropInstanceBeanDefinition:(SharedKoin_coreBeanDefinition<id> *)beanDefinition __attribute__((swift_name("dropInstance(beanDefinition:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (id _Nullable)getClazz:(id<SharedKotlinKClass>)clazz qualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier parameters:(SharedKoin_coreDefinitionParameters *(^ _Nullable)(void))parameters __attribute__((swift_name("get(clazz:qualifier:parameters:)")));
- (id)getQualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier parameters:(SharedKoin_coreDefinitionParameters *(^ _Nullable)(void))parameters __attribute__((swift_name("get(qualifier:parameters:)")));
- (NSArray<id> *)getAll __attribute__((swift_name("getAll()")));
- (NSArray<id> *)getAllClazz:(id<SharedKotlinKClass>)clazz __attribute__((swift_name("getAll(clazz:)")));
- (SharedKoin_coreKoin *)getKoin __attribute__((swift_name("getKoin()")));
- (id _Nullable)getOrNullClazz:(id<SharedKotlinKClass>)clazz qualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier parameters:(SharedKoin_coreDefinitionParameters *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(clazz:qualifier:parameters:)")));
- (id _Nullable)getOrNullQualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier parameters:(SharedKoin_coreDefinitionParameters *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(qualifier:parameters:)")));
- (NSString *)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (NSString *)getPropertyKey:(NSString *)key defaultValue:(NSString *)defaultValue __attribute__((swift_name("getProperty(key:defaultValue:)")));
- (NSString * _Nullable)getPropertyOrNullKey:(NSString *)key __attribute__((swift_name("getPropertyOrNull(key:)")));
- (SharedKoin_coreScope *)getScopeScopeID:(NSString *)scopeID __attribute__((swift_name("getScope(scopeID:)")));
- (id)getSource __attribute__((swift_name("getSource()")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (id<SharedKotlinLazy>)injectQualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier mode:(SharedKotlinLazyThreadSafetyMode *)mode parameters:(SharedKoin_coreDefinitionParameters *(^ _Nullable)(void))parameters __attribute__((swift_name("inject(qualifier:mode:parameters:)")));
- (id<SharedKotlinLazy>)injectOrNullQualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier mode:(SharedKotlinLazyThreadSafetyMode *)mode parameters:(SharedKoin_coreDefinitionParameters *(^ _Nullable)(void))parameters __attribute__((swift_name("injectOrNull(qualifier:mode:parameters:)")));
- (BOOL)isNotClosed __attribute__((swift_name("isNotClosed()")));
- (void)linkToScopes:(SharedKotlinArray<SharedKoin_coreScope *> *)scopes __attribute__((swift_name("linkTo(scopes:)")));
- (void)loadDefinitionBeanDefinition:(SharedKoin_coreBeanDefinition<id> *)beanDefinition __attribute__((swift_name("loadDefinition(beanDefinition:)")));
- (void)registerCallbackCallback:(id<SharedKoin_coreScopeCallback>)callback __attribute__((swift_name("registerCallback(callback:)")));
- (void)setSourceT:(id _Nullable)t __attribute__((swift_name("setSource(t:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (void)unlinkScopes:(SharedKotlinArray<SharedKoin_coreScope *> *)scopes __attribute__((swift_name("unlink(scopes:)")));
@property (readonly) SharedKoin_coreScopeDefinition *_scopeDefinition __attribute__((swift_name("_scopeDefinition")));
@property (readonly) BOOL closed __attribute__((swift_name("closed")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) SharedKoin_coreLogger *logger __attribute__((swift_name("logger")));
@end;

__attribute__((swift_name("Koin_coreDefinitionParameters")))
@interface SharedKoin_coreDefinitionParameters : SharedBase
- (instancetype)initWith_values:(NSMutableArray<id> *)_values __attribute__((swift_name("init(_values:)"))) __attribute__((objc_designated_initializer));
- (SharedKoin_coreDefinitionParameters *)addValue:(id)value __attribute__((swift_name("add(value:)")));
- (id _Nullable)component1 __attribute__((swift_name("component1()")));
- (id _Nullable)component2 __attribute__((swift_name("component2()")));
- (id _Nullable)component3 __attribute__((swift_name("component3()")));
- (id _Nullable)component4 __attribute__((swift_name("component4()")));
- (id _Nullable)component5 __attribute__((swift_name("component5()")));
- (id _Nullable)elementAtI:(int32_t)i clazz:(id<SharedKotlinKClass>)clazz __attribute__((swift_name("elementAt(i:clazz:)")));
- (id)get __attribute__((swift_name("get()")));
- (id _Nullable)getI:(int32_t)i __attribute__((swift_name("get(i:)")));
- (id _Nullable)getOrNullClazz:(id<SharedKotlinKClass>)clazz __attribute__((swift_name("getOrNull(clazz:)")));
- (SharedKoin_coreDefinitionParameters *)insertIndex:(int32_t)index value:(id)value __attribute__((swift_name("insert(index:value:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (BOOL)isNotEmpty __attribute__((swift_name("isNotEmpty()")));
- (void)setI:(int32_t)i t:(id _Nullable)t __attribute__((swift_name("set(i:t:)")));
- (int32_t)size __attribute__((swift_name("size()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<id> *values __attribute__((swift_name("values")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreOptions")))
@interface SharedKoin_coreOptions : SharedBase
- (instancetype)initWithIsCreatedAtStart:(BOOL)isCreatedAtStart override:(BOOL)override isExtraDefinition:(BOOL)isExtraDefinition __attribute__((swift_name("init(isCreatedAtStart:override:isExtraDefinition:)"))) __attribute__((objc_designated_initializer));
- (BOOL)component1 __attribute__((swift_name("component1()")));
- (BOOL)component2 __attribute__((swift_name("component2()")));
- (BOOL)component3 __attribute__((swift_name("component3()")));
- (SharedKoin_coreOptions *)doCopyIsCreatedAtStart:(BOOL)isCreatedAtStart override:(BOOL)override isExtraDefinition:(BOOL)isExtraDefinition __attribute__((swift_name("doCopy(isCreatedAtStart:override:isExtraDefinition:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property BOOL isCreatedAtStart __attribute__((swift_name("isCreatedAtStart")));
@property BOOL isExtraDefinition __attribute__((swift_name("isExtraDefinition")));
@property BOOL override __attribute__((swift_name("override")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeDSL")))
@interface SharedKoin_coreScopeDSL : SharedBase
- (instancetype)initWithScopeQualifier:(id<SharedKoin_coreQualifier>)scopeQualifier definitions:(SharedMutableSet<SharedKoin_coreBeanDefinition<id> *> *)definitions __attribute__((swift_name("init(scopeQualifier:definitions:)"))) __attribute__((objc_designated_initializer));
- (SharedKoin_coreBeanDefinition<id> *)factoryQualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier override:(BOOL)override definition:(id _Nullable (^)(SharedKoin_coreScope *, SharedKoin_coreDefinitionParameters *))definition __attribute__((swift_name("factory(qualifier:override:definition:)")));
- (SharedKoin_coreBeanDefinition<id> *)scopedQualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier override:(BOOL)override definition:(id _Nullable (^)(SharedKoin_coreScope *, SharedKoin_coreDefinitionParameters *))definition __attribute__((swift_name("scoped(qualifier:override:definition:)")));
- (SharedKoin_coreBeanDefinition<id> *)singleQualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier override:(BOOL)override definition:(id _Nullable (^)(SharedKoin_coreScope *, SharedKoin_coreDefinitionParameters *))definition __attribute__((swift_name("single(qualifier:override:definition:)"))) __attribute__((unavailable("Can't use Single in a scope. Use Scoped instead")));
@property (readonly) SharedMutableSet<SharedKoin_coreBeanDefinition<id> *> *definitions __attribute__((swift_name("definitions")));
@property (readonly) id<SharedKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@end;

__attribute__((swift_name("Koin_coreLogger")))
@interface SharedKoin_coreLogger : SharedBase
- (instancetype)initWithLevel:(SharedKoin_coreLevel *)level __attribute__((swift_name("init(level:)"))) __attribute__((objc_designated_initializer));
- (void)debugMsg:(NSString *)msg __attribute__((swift_name("debug(msg:)")));
- (void)errorMsg:(NSString *)msg __attribute__((swift_name("error(msg:)")));
- (void)infoMsg:(NSString *)msg __attribute__((swift_name("info(msg:)")));
- (BOOL)isAtLvl:(SharedKoin_coreLevel *)lvl __attribute__((swift_name("isAt(lvl:)")));
- (void)logLevel:(SharedKoin_coreLevel *)level msg:(NSString *)msg __attribute__((swift_name("log(level:msg:)")));
@property SharedKoin_coreLevel *level __attribute__((swift_name("level")));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol SharedKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface SharedKotlinEnum<E> : SharedBase <SharedKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreLevel")))
@interface SharedKoin_coreLevel : SharedKotlinEnum<SharedKoin_coreLevel *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedKoin_coreLevel *debug __attribute__((swift_name("debug")));
@property (class, readonly) SharedKoin_coreLevel *info __attribute__((swift_name("info")));
@property (class, readonly) SharedKoin_coreLevel *error __attribute__((swift_name("error")));
@property (class, readonly) SharedKoin_coreLevel *none __attribute__((swift_name("none")));
+ (SharedKotlinArray<SharedKoin_coreLevel *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKoin")))
@interface SharedKoin_coreKoin : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id _Nullable)bindPrimaryType:(id<SharedKotlinKClass>)primaryType secondaryType:(id<SharedKotlinKClass>)secondaryType parameters:(SharedKoin_coreDefinitionParameters *(^ _Nullable)(void))parameters __attribute__((swift_name("bind(primaryType:secondaryType:parameters:)")));
- (id _Nullable)bindParameters:(SharedKoin_coreDefinitionParameters *(^ _Nullable)(void))parameters __attribute__((swift_name("bind(parameters:)")));
- (void)close __attribute__((swift_name("close()")));
- (SharedKoin_coreScope *)createScopeT:(id<SharedKoin_coreKoinScopeComponent>)t __attribute__((swift_name("createScope(t:)")));
- (SharedKoin_coreScope *)createScopeScopeId:(NSString *)scopeId __attribute__((swift_name("createScope(scopeId:)")));
- (SharedKoin_coreScope *)createScopeScopeId:(NSString *)scopeId source:(id _Nullable)source __attribute__((swift_name("createScope(scopeId:source:)")));
- (SharedKoin_coreScope *)createScopeScopeId:(NSString *)scopeId qualifier:(id<SharedKoin_coreQualifier>)qualifier source:(id _Nullable)source __attribute__((swift_name("createScope(scopeId:qualifier:source:)")));
- (void)declareInstance:(id _Nullable)instance qualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier secondaryTypes:(NSArray<id<SharedKotlinKClass>> *)secondaryTypes override:(BOOL)override __attribute__((swift_name("declare(instance:qualifier:secondaryTypes:override:)")));
- (void)deletePropertyKey:(NSString *)key __attribute__((swift_name("deleteProperty(key:)")));
- (void)deleteScopeScopeId:(NSString *)scopeId __attribute__((swift_name("deleteScope(scopeId:)")));
- (id _Nullable)getClazz:(id<SharedKotlinKClass>)clazz qualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier parameters:(SharedKoin_coreDefinitionParameters *(^ _Nullable)(void))parameters __attribute__((swift_name("get(clazz:qualifier:parameters:)")));
- (id)getQualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier parameters:(SharedKoin_coreDefinitionParameters *(^ _Nullable)(void))parameters __attribute__((swift_name("get(qualifier:parameters:)")));
- (NSArray<id> *)getAll __attribute__((swift_name("getAll()")));
- (SharedKoin_coreScope *)getOrCreateScopeScopeId:(NSString *)scopeId __attribute__((swift_name("getOrCreateScope(scopeId:)")));
- (SharedKoin_coreScope *)getOrCreateScopeScopeId:(NSString *)scopeId qualifier:(id<SharedKoin_coreQualifier>)qualifier source:(id _Nullable)source __attribute__((swift_name("getOrCreateScope(scopeId:qualifier:source:)")));
- (id _Nullable)getOrNullClazz:(id<SharedKotlinKClass>)clazz qualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier parameters:(SharedKoin_coreDefinitionParameters *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(clazz:qualifier:parameters:)")));
- (id _Nullable)getOrNullQualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier parameters:(SharedKoin_coreDefinitionParameters *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(qualifier:parameters:)")));
- (id _Nullable)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (id)getPropertyKey:(NSString *)key defaultValue:(id)defaultValue __attribute__((swift_name("getProperty(key:defaultValue:)")));
- (SharedKoin_coreScope *)getRootScope __attribute__((swift_name("getRootScope()")));
- (SharedKoin_coreScope *)getScopeScopeId:(NSString *)scopeId __attribute__((swift_name("getScope(scopeId:)")));
- (SharedKoin_coreScope * _Nullable)getScopeOrNullScopeId:(NSString *)scopeId __attribute__((swift_name("getScopeOrNull(scopeId:)")));
- (id<SharedKotlinLazy>)injectQualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier mode:(SharedKotlinLazyThreadSafetyMode *)mode parameters:(SharedKoin_coreDefinitionParameters *(^ _Nullable)(void))parameters __attribute__((swift_name("inject(qualifier:mode:parameters:)")));
- (id<SharedKotlinLazy>)injectOrNullQualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier mode:(SharedKotlinLazyThreadSafetyMode *)mode parameters:(SharedKoin_coreDefinitionParameters *(^ _Nullable)(void))parameters __attribute__((swift_name("injectOrNull(qualifier:mode:parameters:)")));
- (void)loadModulesModules:(NSArray<SharedKoin_coreModule *> *)modules createEagerInstances:(BOOL)createEagerInstances __attribute__((swift_name("loadModules(modules:createEagerInstances:)")));
- (void)setPropertyKey:(NSString *)key value:(id)value __attribute__((swift_name("setProperty(key:value:)")));
- (void)setupLoggerLogger:(SharedKoin_coreLogger *)logger __attribute__((swift_name("setupLogger(logger:)")));
- (void)unloadModulesModules:(NSArray<SharedKoin_coreModule *> *)modules createEagerInstances:(BOOL)createEagerInstances __attribute__((swift_name("unloadModules(modules:createEagerInstances:)")));
@property (readonly) SharedKoin_coreLogger *logger __attribute__((swift_name("logger")));
@property (readonly) SharedKoin_corePropertyRegistry *propertyRegistry __attribute__((swift_name("propertyRegistry")));
@property (readonly) SharedKoin_coreScopeRegistry *scopeRegistry __attribute__((swift_name("scopeRegistry")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol SharedKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol SharedKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol SharedKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol SharedKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol SharedKotlinKClass <SharedKotlinKDeclarationContainer, SharedKotlinKAnnotatedElement, SharedKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKind")))
@interface SharedKoin_coreKind : SharedKotlinEnum<SharedKoin_coreKind *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedKoin_coreKind *single __attribute__((swift_name("single")));
@property (class, readonly) SharedKoin_coreKind *factory __attribute__((swift_name("factory")));
+ (SharedKotlinArray<SharedKoin_coreKind *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreProperties")))
@interface SharedKoin_coreProperties : SharedBase
- (instancetype)initWithData:(SharedMutableDictionary<NSString *, id> *)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
- (SharedKoin_coreProperties *)doCopyData:(SharedMutableDictionary<NSString *, id> *)data __attribute__((swift_name("doCopy(data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (id _Nullable)getKey:(NSString *)key __attribute__((swift_name("get(key:)")));
- (id _Nullable)getOrNullKey:(NSString *)key __attribute__((swift_name("getOrNull(key:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (void)setKey:(NSString *)key value:(id _Nullable)value __attribute__((swift_name("set(key:value:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreCallbacks")))
@interface SharedKoin_coreCallbacks<T> : SharedBase
- (instancetype)initWithOnClose:(void (^ _Nullable)(T _Nullable))onClose __attribute__((swift_name("init(onClose:)"))) __attribute__((objc_designated_initializer));
- (void (^ _Nullable)(T _Nullable))component1 __attribute__((swift_name("component1()")));
- (SharedKoin_coreCallbacks<T> *)doCopyOnClose:(void (^ _Nullable)(T _Nullable))onClose __attribute__((swift_name("doCopy(onClose:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) void (^ _Nullable onClose)(T _Nullable) __attribute__((swift_name("onClose")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeDefinition")))
@interface SharedKoin_coreScopeDefinition : SharedBase
- (instancetype)initWithQualifier:(id<SharedKoin_coreQualifier>)qualifier isRoot:(BOOL)isRoot __attribute__((swift_name("init(qualifier:isRoot:)"))) __attribute__((objc_designated_initializer));
- (id<SharedKoin_coreQualifier>)component1 __attribute__((swift_name("component1()")));
- (BOOL)component2 __attribute__((swift_name("component2()")));
- (SharedKoin_coreScopeDefinition *)doCopyQualifier:(id<SharedKoin_coreQualifier>)qualifier isRoot:(BOOL)isRoot __attribute__((swift_name("doCopy(qualifier:isRoot:)")));
- (SharedKoin_coreBeanDefinition<id> *)declareNewDefinitionInstance:(id _Nullable)instance defQualifier:(id<SharedKoin_coreQualifier> _Nullable)defQualifier secondaryTypes:(NSArray<id<SharedKotlinKClass>> * _Nullable)secondaryTypes override:(BOOL)override __attribute__((swift_name("declareNewDefinition(instance:defQualifier:secondaryTypes:override:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (void)removeBeanDefinition:(SharedKoin_coreBeanDefinition<id> *)beanDefinition __attribute__((swift_name("remove(beanDefinition:)")));
- (void)saveBeanDefinition:(SharedKoin_coreBeanDefinition<id> *)beanDefinition forceOverride:(BOOL)forceOverride __attribute__((swift_name("save(beanDefinition:forceOverride:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedMutableSet<SharedKoin_coreBeanDefinition<id> *> *definitions __attribute__((swift_name("definitions")));
@property (readonly) BOOL isRoot __attribute__((swift_name("isRoot")));
@property (readonly) id<SharedKoin_coreQualifier> qualifier __attribute__((swift_name("qualifier")));
@end;

__attribute__((swift_name("KotlinLazy")))
@protocol SharedKotlinLazy
@required
- (BOOL)isInitialized __attribute__((swift_name("isInitialized()")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinLazyThreadSafetyMode")))
@interface SharedKotlinLazyThreadSafetyMode : SharedKotlinEnum<SharedKotlinLazyThreadSafetyMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedKotlinLazyThreadSafetyMode *synchronized __attribute__((swift_name("synchronized")));
@property (class, readonly) SharedKotlinLazyThreadSafetyMode *publication __attribute__((swift_name("publication")));
@property (class, readonly) SharedKotlinLazyThreadSafetyMode *none __attribute__((swift_name("none")));
+ (SharedKotlinArray<SharedKotlinLazyThreadSafetyMode *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((swift_name("Koin_coreScopeCallback")))
@protocol SharedKoin_coreScopeCallback
@required
- (void)onScopeCloseScope:(SharedKoin_coreScope *)scope __attribute__((swift_name("onScopeClose(scope:)")));
@end;

__attribute__((swift_name("Koin_coreKoinComponent")))
@protocol SharedKoin_coreKoinComponent
@required
- (SharedKoin_coreKoin *)getKoin __attribute__((swift_name("getKoin()")));
@end;

__attribute__((swift_name("Koin_coreKoinScopeComponent")))
@protocol SharedKoin_coreKoinScopeComponent <SharedKoin_coreKoinComponent>
@required
- (void)closeScope __attribute__((swift_name("closeScope()")));
@property (readonly) SharedKoin_coreScope *scope __attribute__((swift_name("scope")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_corePropertyRegistry")))
@interface SharedKoin_corePropertyRegistry : SharedBase
- (instancetype)initWith_koin:(SharedKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (void)deletePropertyKey:(NSString *)key __attribute__((swift_name("deleteProperty(key:)")));
- (id _Nullable)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (void)savePropertiesProperties:(NSDictionary<NSString *, id> *)properties __attribute__((swift_name("saveProperties(properties:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeRegistry")))
@interface SharedKoin_coreScopeRegistry : SharedBase
- (instancetype)initWith_koin:(SharedKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
- (SharedKoin_coreScope *)createScopeScopeId:(NSString *)scopeId qualifier:(id<SharedKoin_coreQualifier>)qualifier source:(id _Nullable)source __attribute__((swift_name("createScope(scopeId:qualifier:source:)")));
- (void)declareDefinitionBean:(SharedKoin_coreBeanDefinition<id> *)bean __attribute__((swift_name("declareDefinition(bean:)")));
- (void)deleteScopeScope:(SharedKoin_coreScope *)scope __attribute__((swift_name("deleteScope(scope:)")));
- (void)deleteScopeScopeId:(NSString *)scopeId __attribute__((swift_name("deleteScope(scopeId:)")));
- (SharedKoin_coreScope * _Nullable)getScopeOrNullScopeId:(NSString *)scopeId __attribute__((swift_name("getScopeOrNull(scopeId:)")));
- (int32_t)size __attribute__((swift_name("size()")));
- (void)unloadModulesModules:(id)modules __attribute__((swift_name("unloadModules(modules:)")));
- (void)unloadModulesModule:(SharedKoin_coreModule *)module __attribute__((swift_name("unloadModules(module:)")));
@property (readonly) SharedKoin_coreScope *rootScope __attribute__((swift_name("rootScope")));
@property (readonly) NSDictionary<NSString *, SharedKoin_coreScopeDefinition *> *scopeDefinitions __attribute__((swift_name("scopeDefinitions")));
@end;

#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
