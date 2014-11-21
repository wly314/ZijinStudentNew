//
//  LYBaseBackViewController.m
//  WorkingRecord
//
//  Created by LeouWang_NJ .TD on 14-10-29.
//  Copyright (c) 2014年 Leou Wang. All rights reserved.
//

#import "LYBaseBackViewController.h"

@interface LYBaseBackViewController ()

@end

@implementation LYBaseBackViewController

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
    
//    UIButton *backBtn = [UIButton buttonWithType:UIButtonTypeCustom];
//    backBtn.frame = CGRectMake(0, 0, 32, 32);
////    [backBtn setImage:[UIImage imageNamed:@"rootBlock_icon_set.png"] forState:UIControlStateNormal];
//    [backBtn setTitle:@"back" forState:UIControlStateNormal];
//    [backBtn setTitleColor:[UIColor whiteColor] forState:UIControlStateNormal];
//    [backBtn addTarget:self action:@selector(backToViewController:) forControlEvents:UIControlEventTouchUpInside];
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
    
    UIBarButtonItem *backBarButtonItem = [[UIBarButtonItem alloc] initWithTitle:@"< back" style:UIBarButtonItemStylePlain target:self action:@selector(backToViewController:)];
    if ([[[UIDevice currentDevice] systemVersion] floatValue] >= 7.0){
        
        [backBarButtonItem setTitleTextAttributes:[NSDictionary dictionaryWithObject:[UIColor whiteColor] forKey:NSForegroundColorAttributeName] forState:UIControlStateNormal];
    }else{
        
        [backBarButtonItem setTitleTextAttributes:[NSDictionary dictionaryWithObject:[UIColor whiteColor] forKey:UITextAttributeTextColor] forState:UIControlStateNormal];
    }
    self.navigationItem.leftBarButtonItem = backBarButtonItem;
}

- (void)backToViewController:(id)sender{
    
    [self.navigationController popViewControllerAnimated:YES];
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
