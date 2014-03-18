XtifyLib
========
This is a empty repo for use with the Xtify cocoapod. Instead of having a repo where the source has to be maintained by downloading from Xtify on an update the podspec takes care of that.

##Usage##
Either subclass `XLXtifyOptions` or use an instance directly setting the iVars. Any existing installations as described in the [previous pod spec](https://github.com/sstepashka/XtifyLib#example-of-usage) will still work and `XLXtifyOptions` can be used as is with `+[XLXtifyOptions getXtifyOptions]`.

``` objective-c
-(BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
  XLXtifyOptions *options = [XLXtifyOptions getXtifyOptions];
  options->xoAppKey = @"ABCDEF0123456789";
  options->xoLocationRequired = NO;
  options->xoBackgroundLocationRequired = NO;
  options->xoLogging = NO;
  
  [[XLappMgr get] initilizeXoptions:options];
  
  ...
}
```

Or using a subclass

``` objective-c
@interface CustomXtifyOptions : XLXtifyOptions

+(instancetype)sharedInstance;

@end

@implementation CustomXtifyOptions

+(instancetype)sharedInstance
{
    static CustomXtifyOptions *options;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        options = [self new];
    });
    return options;
}

-(instancetype)init
{
    self = [super init];
    if (self) {
        xoAppKey = @"ABCDEF0123456789";
        xoLocationRequired = NO;
        xoBackgroundLocationRequired = NO;
        xoLogging = NO;
#ifdef DEBUG
        xoLogging = YES;
#endif
        xoMultipleMarkets = NO;
        xoManageBadge = XLInboxManagedMethod;
        xoDesiredLocationAccuracy = kCLLocationAccuracyThreeKilometers;
    }
    return self;
}
@end

-(BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
  [[XLappMgr get] initilizeXoptions:[CustomXtifyOptions sharedInstance]];
  
  ...
}
```
