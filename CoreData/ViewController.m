//
//  ViewController.m
//  CoreData
//
//  Created by 谢谦 on 16/2/24.
//  Copyright © 2016年 杜苏南. All rights reserved.
//

#import "ViewController.h"
#import "Student+CoreDataProperties.h"
#import "Student.h"
#import "AppDelegate.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    AppDelegate *appDelegate = [[AppDelegate alloc]init];
    Student *s1 = [NSEntityDescription insertNewObjectForEntityForName:@"Student" inManagedObjectContext:appDelegate.managedObjectContext];
    s1.name = @"dsn";
    s1.pass = @"111";
    s1.age = 12;
    NSLog(@"%@",s1);
    
    // Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
