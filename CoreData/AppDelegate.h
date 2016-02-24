//
//  AppDelegate.h
//  CoreData
//
//  Created by 谢谦 on 16/2/24.
//  Copyright © 2016年 杜苏南. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;//对象的上下文（对表做增删改查的工作）
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;//被管理的对象
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;//协调器

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;


@end

