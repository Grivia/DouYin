//
//  PostGroupChatTextRequest.h
//  DouYin
//
//  Created by 祝汉宇 on 11/10/18.
//  Copyright © 2018 z. All rights reserved.
//


#import "BaseRequest.h"

@interface PostGroupChatTextRequest:BaseRequest

@property (nonatomic, copy) NSString *udid;
@property (nonatomic, copy) NSString *text;

@end
