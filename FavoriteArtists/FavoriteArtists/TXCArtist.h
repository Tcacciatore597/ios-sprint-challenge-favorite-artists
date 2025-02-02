//
//  TXCArtist.h
//  FavoriteArtists
//
//  Created by Thomas Cacciatore on 7/19/19.
//  Copyright © 2019 Thomas Cacciatore. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TXCArtist : NSObject

@property (nonatomic, readonly, copy)NSString *name;
@property (nonatomic, readonly, copy)NSString *biography;
@property (nonatomic, readonly) int dateFormed;

- (instancetype)initWithName:(NSString *)name
                   biography:(NSString *)biography
                  dateFormed:(int) dateFormed;

@end

NS_ASSUME_NONNULL_END
