//
//  NSTextAttachment+Emotion.h
//  DouYin
//
//  Created by 祝汉宇 on 11/2/18.
//  Copyright © 2018 z. All rights reserved.
//

#import <UIKit/UIKit.h>

static char emotionKey;

@interface NSTextAttachment (Emotion)

- (void)setEmotionKey:(NSString *)key;

- (NSString *)emotionKey;

@end
