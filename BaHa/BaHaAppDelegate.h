//
//  BaHaAppDelegate.h
//  BaHa
//
//  Created by zhaocj on 13-7-16.
//  Copyright (c) 2013年 bamakeji. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BaHaAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
