//
//  PictureInfo.h
//  DouYin
//
//  Created by 祝汉宇 on 11/10/18.
//  Copyright © 2018 z. All rights reserved.
//

#import "BaseModel.h"

@interface PictureInfo :BaseModel

@property (nonatomic, copy) NSString      *file_id;
@property (nonatomic, copy) NSString      *url;
@property (nonatomic, assign) NSInteger   width;
@property (nonatomic, assign) NSInteger   height;
@property (nonatomic, copy) NSString      *type;

@end
