//
//  Header.h
//  DouYin
//
//  Created by 祝汉宇 on 11/10/18.
//  Copyright © 2018 z. All rights reserved.
//

#import "BaseResponse.h"
#import "Comment.h"

@interface CommentListResponse:BaseResponse

@property (nonatomic, copy) NSArray<Comment>   *data;

@end
