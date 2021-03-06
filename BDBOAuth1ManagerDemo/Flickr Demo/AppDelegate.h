//
//  AppDelegate.h
//  BDBOAuth1ManagerDemo
//
//  Created by Bradley Bergeron on 11/10/2013.
//  Copyright (c) 2013 Bradley David Bergeron. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "BDBOAuth1RequestOperationManager.h"
#import "BDBOAuth1SessionManager.h"


#pragma mark -
@interface AppDelegate : UIResponder
<UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (nonatomic, copy, readonly) NSString *apiKey;

#if defined(__IPHONE_OS_VERSION_MIN_REQUIRED) && __IPHONE_OS_VERSION_MIN_REQUIRED >= 70000
@property (nonatomic, readonly) BDBOAuth1SessionManager *networkManager;
#else
@property (nonatomic, readonly) BDBOAuth1RequestOperationManager *networkManager;
#endif

#pragma mark Initialization
+ (instancetype)sharedDelegate;

#pragma mark OAuth
- (void)authorize;
- (void)deauthorizeWithCompletion:(void (^)(void))completion;

@end
