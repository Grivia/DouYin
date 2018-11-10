//
//  BaseResponse.h
//  DouYin
//
//  Created by 祝汉宇 on 11/10/18.
//  Copyright © 2018 z. All rights reserved.
//

#import "JSONModel.h"

@interface BaseResponse:JSONModel

@property (nonatomic , assign) NSInteger        code;
@property (nonatomic , copy) NSString           *message;
@property (nonatomic , assign) NSInteger        has_more;
@property (nonatomic, assign) NSInteger         total_count;

@end
