//
//  Header.h
//  DouYin
//
//  Created by 祝汉宇 on 11/10/18.
//  Copyright © 2018 z. All rights reserved.
//

#import "BaseResponse.h"
#import "GroupChat.h"

@interface GroupChatListResponse:BaseResponse

@property (nonatomic, copy) NSArray<GroupChat>   *data;

@end
