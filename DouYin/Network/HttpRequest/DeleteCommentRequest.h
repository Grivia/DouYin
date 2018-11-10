//
//  DeleteCommentRequest.h
//  DouYin
//
//  Created by 祝汉宇 on 11/10/18.
//  Copyright © 2018 z. All rights reserved.
//


#import "BaseRequest.h"

@interface DeleteCommentRequest:BaseRequest

@property (nonatomic, copy) NSString *cid;
@property (nonatomic, copy) NSString *udid;

@end
