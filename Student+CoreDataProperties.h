//
//  Student+CoreDataProperties.h
//  CoreData
//
//  Created by 谢谦 on 16/2/24.
//  Copyright © 2016年 杜苏南. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "Student.h"

NS_ASSUME_NONNULL_BEGIN

@interface Student (CoreDataProperties)

@property (nullable, nonatomic, retain) NSNumber *id;
@property (nullable, nonatomic, retain) NSString *name;
@property (nullable, nonatomic, retain) NSString *pass;

@end

NS_ASSUME_NONNULL_END
