//
//  Visitor.h
//  DouYin
//
//  Created by 祝汉宇 on 11/10/18.
//  Copyright © 2018 z. All rights reserved.
//

#import "BaseModel.h"
#import "PictureInfo.h"
@interface Visitor :BaseModel
@property (nonatomic , copy) NSString              *uid;
@property (nonatomic , copy) NSString              *udid;
@property (nonatomic , strong) PictureInfo         *avatar_thumbnail;
@property (nonatomic , strong) PictureInfo         *avatar_medium;
@property (nonatomic , strong) PictureInfo         *avatar_large;
-(NSString *)formatUDID;
@end
