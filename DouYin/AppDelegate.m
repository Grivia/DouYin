//
//  AppDelegate.m
//  DouYin
//
//  Created by 祝汉宇 on 11/2/18.
//  Copyright © 2018 z. All rights reserved.
//

#import "AppDelegate.h"

@interface AppDelegate ()

@end

@implementation AppDelegate


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    _window = [[UIWindow alloc]initWithFrame:[UIScreen mainScreen].bounds];
    _window.rootViewController = [[UINavigationController alloc]initWithRootViewController:[UserHomePageController new]];
    //_window.rootViewController = [[BaseViewController alloc]init];
    [_window makeKeyAndVisible];
    // Override point for customization after application launch.
    return YES;
}

-(void) touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event{
    CGPoint touchLocation = [[[event allTouches] anyObject] locationInView:self.window];
    CGRect statusBatFrame = [UIApplication sharedApplication].statusBarFrame;
    NSLog(@"------%f",touchLocation.y);
    if(CGRectContainsPoint(statusBatFrame, touchLocation)){
        [[NSNotificationCenter defaultCenter]postNotificationName:@"StatusBatBeginNotification" object:nil];
        NSLog(@"点击statusb bar");
        
    }
    
}


@end
