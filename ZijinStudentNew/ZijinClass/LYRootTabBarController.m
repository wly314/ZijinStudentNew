//
//  LYRootTabBarController.m
//  WorkingRecord
//
//  Created by LeouWang_NJ .TD on 14-10-29.
//  Copyright (c) 2014年 Leou Wang. All rights reserved.
//

#import "LYRootTabBarController.h"

@interface LYRootTabBarController ()<UITabBarControllerDelegate>
{
    BOOL  isLeftViewShow;//保存leftView是否show
}
@end

@implementation LYRootTabBarController

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

-(void)awakeFromNib{
    
    [super awakeFromNib];
    
//    [[UITabBarItem appearance] setTitleTextAttributes:[NSDictionary dictionaryWithObjectsAndKeys:[UIColor yellowColor], UITextAttributeTextColor, nil] forState:UIControlStateSelected];
    
//    [self.tabBar setBarTintColor:[UIColor blackColor]];
    
    self.delegate = self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    [[UIApplication sharedApplication] setStatusBarStyle:UIStatusBarStyleLightContent];//设置状态栏白色
}

- (BOOL)tabBarController:(UITabBarController *)tabBarController shouldSelectViewController:(UIViewController *)viewController {
    
    [[NSNotificationCenter defaultCenter] postNotificationName:@"MoreTableViewHide" object:nil];
    
    return YES;
}

- (void)viewWillAppear:(BOOL)animated{
    
    [super viewWillAppear:animated];
    
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(moreTableViewFrameChange:) name:@"MoreTableViewFrameChange" object:nil];
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(moreTableViewHide:) name:@"MoreTableViewHide" object:nil];
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(moreTableViewShow:) name:@"MoreTableViewShow" object:nil];
}

- (void)viewWillDisappear:(BOOL)animated{
    
    [super viewWillDisappear:animated];
    
    [[NSNotificationCenter defaultCenter] removeObserver:self name:@"MoreTableViewFrameChange" object:nil];
    [[NSNotificationCenter defaultCenter] removeObserver:self name:@"MoreTableViewHide" object:nil];
    [[NSNotificationCenter defaultCenter] removeObserver:self name:@"MoreTableViewShow" object:nil];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void)moreTableViewFrameChange:(NSNotification*) notification{
    
    NSString *obj = (NSString *)[notification object];//获取到传递的对象
    float pointX = [obj floatValue];
    
    if (isLeftViewShow) {
        
        self.view.frame = CGRectMake(self.view.bounds.size.width/2 + pointX, self.view.bounds.origin.y, self.view.bounds.size.width, self.view.bounds.size.height);
    }else{
        self.view.frame = CGRectMake(0 + pointX, self.view.bounds.origin.y, self.view.bounds.size.width, self.view.bounds.size.height);
    }
    
}

- (void)moreTableViewHide:(NSNotification*) notification{
    
    self.view.frame = CGRectMake(0, self.view.bounds.origin.y, self.view.bounds.size.width, self.view.bounds.size.height);
    isLeftViewShow = NO;
}

- (void)moreTableViewShow:(NSNotification*) notification{
    
    self.view.frame = CGRectMake(self.view.bounds.size.width/2 - 5, self.view.bounds.origin.y, self.view.bounds.size.width, self.view.bounds.size.height);
    isLeftViewShow = YES;
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
