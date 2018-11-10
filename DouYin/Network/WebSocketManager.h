//
//  WebSocketManager.h
//  DouYin
//
//  Created by 祝汉宇 on 11/10/18.
//  Copyright © 2018 z. All rights reserved.
//

#import <UIKit/UIKit.h>

//定义消息通知常量名称
extern NSString *const WebSocketDidReceiveMessageNotification;

@interface WebSocketManager:NSObject
//WebSocketManager单例
+ (instancetype)shareManager;
//断开连接
- (void)disConnect;
//连接
- (void)connect;
//发送消息
- (void)sendMessage:(id)msg;

@end

