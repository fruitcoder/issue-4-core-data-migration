//
//  NSMigrationManager+Lookup.h
//  BookMigration
//
//  Created by Martin Hwasser on 9/1/13.
//  Copyright (c) 2013 Martin Hwasser. All rights reserved.
//

#import <CoreData/CoreData.h>

@interface NSMigrationManager (Lookup)

- (NSMutableDictionary *)lookupWithKey:(NSString *)lookupKey;

@end
