//
//  MUUser.h
//  demo
//
//  Created by BlueCocoa on 15/6/28.
//  Copyright (c) 2015年 0xBBC. All rights reserved.
//

#import <Foundation/Foundation.h>

@class UIImage;

typedef NS_OPTIONS(NSUInteger, MUUserKind) {
    kMUUserFreshman,
    kMUUserSophomore,
    kMUUserJunior,
    kMUUserSenior,
    kMUUserGraduate
};

typedef NS_OPTIONS(NSUInteger, MUUserGender){
    kMUUserGenderMale,
    kMUUserGenderFemale,
    kMUUserGenderUnknown
};

@interface MUUser : NSObject

- (nonnull instancetype)init;
- (NSUInteger)numberOfHammers;
- (NSUInteger)numberOfPoints;

@property (strong, nonatomic, nullable) UIImage  * avatar;
@property (nonatomic) MUUserGender gender;
@property (nonatomic) MUUserKind kind;
@property (strong, nonatomic, nonnull) NSString * name;
@property (strong, nonatomic, nonnull) NSString * nickname;
@property (nonatomic, getter=isValidated) BOOL validated;

@end
