//
//  GroupChat.m
//  DouYin
//
//  Created by 祝汉宇 on 11/10/18.
//  Copyright © 2018 z. All rights reserved.
//

#import "GroupChat.h"

@implementation GroupChat

-(instancetype)initImageChat:(UIImage *)image {
    self = [super init];
    if(self) {
        _msg_type = @"image";
        _isTemp = YES;
        _picImage = image;
        PictureInfo *picInfo = [PictureInfo new];
        picInfo.width = image.size.width;
        picInfo.height = image.size.height;
        _pic_original = _pic_large = _pic_medium = _pic_thumbnail = picInfo;
    }
    return self;
}

-(instancetype)initTextChat:(NSString *)text {
    self = [super init];
    if(self) {
        _msg_type = @"text";
        _isTemp = YES;
        _msg_content = text;
    }
    return self;
}

-(instancetype)updateTempImageChat:(GroupChat *)chat {
    _id = chat.id;
    _pic_original = chat.pic_original;
    _pic_large = chat.pic_large;
    _pic_medium = chat.pic_medium;
    _pic_thumbnail = chat.pic_thumbnail;
    _create_time = chat.create_time;
    _isTemp = YES;
    _percent = 1.0f;
    _isCompleted = YES;
    _isFailed = NO;
    return self;
}

-(instancetype)updateTempTextChat:(GroupChat *)chat {
    _id = chat.id;
    _create_time = chat.create_time;
    _isTemp = YES;
    _isCompleted = YES;
    _isFailed = NO;
    return self;
}

+ (BOOL)propertyIsIgnored:(NSString *)propertyName {
    if([propertyName isEqualToString:@"taskId"]
       ||[propertyName isEqualToString:@"isTemp"]
       ||[propertyName isEqualToString:@"picImage"]
       ||[propertyName isEqualToString:@"contentSize"]
       ||[propertyName isEqualToString:@"cellHeight"]
        ||[propertyName isEqualToString:@"cellAttributedString"])
        return YES;
    return NO;
}
@end