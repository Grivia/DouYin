//
//  DeleteGroupChatRequest.h
//  DouYin
//
//  Created by 祝汉宇 on 11/10/18.
//  Copyright © 2018 z. All rights reserved.
//


#import "BaseRequest.h"

@interface DeleteGroupChatRequest:BaseRequest

@property (nonatomic, copy) NSString *id;
@property (nonatomic, copy) NSString *udid;

@end
