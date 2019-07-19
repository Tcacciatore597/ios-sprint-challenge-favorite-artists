//
//  NSObject+TXCArtist_NSJSONSerialization.h
//  FavoriteArtists
//
//  Created by Thomas Cacciatore on 7/19/19.
//  Copyright © 2019 Thomas Cacciatore. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSObject (TXCArtist_NSJSONSerialization)

- (void)initWithDictionary:(NSDictionary *)dictionary;

- (NSDictionary *)toDictionary;


@end

NS_ASSUME_NONNULL_END