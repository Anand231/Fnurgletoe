
@class RootViewController;

@interface FnurgletoeAppDelegate : NSObject <UIApplicationDelegate>
{
	UIWindow* window;
	RootViewController* rootViewController;
}

@property (nonatomic, retain) IBOutlet UIWindow* window;
@property (nonatomic, retain) IBOutlet RootViewController* rootViewController;

@end
