//
//  GroupChatResponse.h
//  DouYin
//
//  Created by 祝汉宇 on 11/10/18.
//  Copyright © 2018 z. All rights reserved.
//

#import "BaseResponse.h"
#import "GroupChat.h"

@interface GroupChatResponse:BaseResponse

@property (nonatomic, copy) GroupChat   *data;

@end
