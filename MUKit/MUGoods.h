//
//  MUGoods.h
//  demo
//
//  Created by BlueCocoa on 15/6/28.
//  Copyright (c) 2015年 0xBBC. All rights reserved.
//

#import <Foundation/Foundation.h>

@class UIImage;

@interface MUGoods : NSObject

- (nonnull instancetype)init;
- (nonnull instancetype)initWithName:(nonnull NSString *)name Brief:(nullable NSString * )brief Price:(NSUInteger)price ImageURL:(nullable NSURL *)imageURL;

@property (strong, nonatomic, nullable) NSString * brief;
@property (strong, nonatomic, nullable) NSURL * imageURL;
@property (strong, nonatomic, nonnull) NSString * name;
@property (nonatomic) NSUInteger price;

@end
