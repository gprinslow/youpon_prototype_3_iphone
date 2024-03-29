//
//  YouponAppDelegate.h
//  Youpon
//
//  Created by Garrison on 8/3/11.
//  Copyright 2011 Garrison Prinslow. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LoginRootTableViewController.h"
#import "RailsService.h"


@interface YouponAppDelegate : NSObject <UIApplicationDelegate, UITabBarControllerDelegate> {
    UITabBarController *_rootTabBarController;
    UINavigationController *_loginNavigationController;
    LoginRootTableViewController *_loginRootTableViewController;
    //added
    RailsService *_railsService;
    NSString *_sessionToken;
    NSDictionary *_currentUser;
}

@property (nonatomic, retain) IBOutlet UITabBarController *rootTabBarController;
@property (nonatomic, retain) IBOutlet UINavigationController *loginNavigationController;
@property (nonatomic, retain) IBOutlet LoginRootTableViewController *loginRootTableViewController;
//added
@property (nonatomic, retain) RailsService *railsService;
@property (nonatomic, retain) NSString *sessionToken;
@property (nonatomic, retain) NSDictionary *currentUser;

@property (nonatomic, retain) IBOutlet UIWindow *window;

//Custom methods - Service Calls??



@end
