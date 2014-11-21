//
//  SKSuperViewController.m
//  ZijinStudentNew
//
//  Created by LeouWang on 14/11/12.
//  Copyright (c) 2014年 _iSke_Leou_. All rights reserved.
//

#import "SKSuperViewController.h"

#import "LYRootTabBarController.h"

@interface SKSuperViewController ()

@end

@implementation SKSuperViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
    self.view.backgroundColor = [UIColor whiteColor];
    
    UITableView *moreTableView = [[UITableView alloc] initWithFrame:self.view.bounds];
    [self.view addSubview:moreTableView];
    
    UIStoryboard *storyboard = [UIStoryboard  storyboardWithName:@"Main" bundle:nil];
    LYRootTabBarController *m_vctrMain = [storyboard instantiateViewControllerWithIdentifier:@"MainTabbarVC"];
    [self addChildViewController:m_vctrMain];
    [self.view addSubview:m_vctrMain.view];
}

- (void)viewWillAppear:(BOOL)animated{
    
    [super viewWillAppear:animated];
    
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
