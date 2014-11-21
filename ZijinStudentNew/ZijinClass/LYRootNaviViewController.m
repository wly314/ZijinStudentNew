//
//  LYRootNaviViewController.m
//  WorkingRecord
//
//  Created by LeouWang_NJ .TD on 14-10-27.
//  Copyright (c) 2014年 Leou Wang. All rights reserved.
//

#import "LYRootNaviViewController.h"

@interface LYRootNaviViewController ()

@end

@implementation LYRootNaviViewController

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
    if ([[[UIDevice currentDevice] systemVersion] floatValue] >= 7.0){
        
        [self.navigationBar setBarTintColor:[UIColor colorWithRed:0/255.0f green:170.0/255.0f blue:255/255.0f alpha:1.0]];
        self.navigationBar.titleTextAttributes = [NSDictionary dictionaryWithObject:[UIColor whiteColor] forKey:NSForegroundColorAttributeName];
    }else{
        
        [self.navigationBar setTintColor:[UIColor colorWithRed:0/255.0f green:170.0/255.0f blue:255/255.0f alpha:1.0]];
        self.navigationBar.titleTextAttributes = [NSDictionary dictionaryWithObject:[UIColor whiteColor] forKey:UITextAttributeTextColor];
    }
    
}

- (void)viewWillAppear:(BOOL)animated{
    
    [super viewWillAppear:animated];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}



/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender
{
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
