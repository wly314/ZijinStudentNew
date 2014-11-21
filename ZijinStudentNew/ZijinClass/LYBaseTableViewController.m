//
//  LYBaseTableViewController.m
//  WorkingRecord
//
//  Created by LeouWang_NJ .TD on 14-10-31.
//  Copyright (c) 2014年 Leou Wang. All rights reserved.
//

#import "LYBaseTableViewController.h"

#import "LYSetingViewController.h"

@interface LYBaseTableViewController ()<UIGestureRecognizerDelegate>
{
    BOOL isShowLeftView;
}
@end

@implementation LYBaseTableViewController

- (id)initWithStyle:(UITableViewStyle)style
{
    self = [super initWithStyle:style];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    UIButton *avatarButton = [UIButton buttonWithType:UIButtonTypeCustom];
    avatarButton.frame = CGRectMake(0, 0, 40, 40);
    [avatarButton addTarget:self action:@selector(editUserInfo:) forControlEvents:UIControlEventTouchUpInside];
    [avatarButton setImage:[UIImage imageNamed:@"default_icon.png"] forState:UIControlStateNormal];
    avatarButton.layer.cornerRadius = 20;//(值越大，角就越圆)
    avatarButton.layer.masksToBounds = YES;//-setMasksToBounds:方法告诉layer将位于它之下的layer都遮盖住。这是必须的，这样会使圆角不被遮，但是这样会导致阴影效果没有
    //边框宽度及颜色设置
    [avatarButton.layer setBorderWidth:1];
    [avatarButton.layer setBorderColor:(__bridge CGColorRef)([UIColor blueColor])];  //设置边框颜色
    self.navigationItem.leftBarButtonItem = [[UIBarButtonItem alloc] initWithCustomView:avatarButton];
    
    UIButton *settingBtn = [UIButton buttonWithType:UIButtonTypeCustom];
    settingBtn.frame = CGRectMake(0, 0, 32, 32);
    [settingBtn setImage:[UIImage imageNamed:@"rootBlock_icon_set.png"] forState:UIControlStateNormal];
    [settingBtn addTarget:self action:@selector(setting:) forControlEvents:UIControlEventTouchUpInside];
    self.navigationItem.rightBarButtonItem = [[UIBarButtonItem alloc] initWithCustomView:settingBtn];
    
    self.navigationItem.title = [self navTitle];
    
    //手势
    UIPanGestureRecognizer *pan = [[UIPanGestureRecognizer alloc] initWithTarget:self action:@selector(handlePan:)];
    pan.delegate = self;
    
    [self.view addGestureRecognizer:pan];
}

- (void)viewWillAppear:(BOOL)animated{
    
    [super viewWillAppear:animated];
    
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(updateNavTitle:) name:UIApplicationSignificantTimeChangeNotification object:nil];
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(moreTableViewHide:) name:@"MoreTableViewHide" object:nil];
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(moreTableViewShow:) name:@"MoreTableViewShow" object:nil];
}

- (void)moreTableViewHide:(NSNotification*) notification{
    
    isShowLeftView = NO;
}

- (void)moreTableViewShow:(NSNotification*) notification{
    
    isShowLeftView = YES;
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

#pragma mark - UIGestureRecognizerDelegate
- (void) handlePan: (UIPanGestureRecognizer *)panGes{
    
    static CGFloat currentTranslateX;
    if (panGes.state == UIGestureRecognizerStateBegan)
    {
        currentTranslateX = [panGes translationInView:self.view].x;
        if (isShowLeftView) {
            
            if (currentTranslateX > 0) {
                
                return;
            }
        }else{
            if (currentTranslateX < 0) {
                
                return;
            }
        }
        
    }else if (panGes.state == UIGestureRecognizerStateChanged){
        
        CGFloat transX = [panGes translationInView:self.view].x;
        transX = transX + currentTranslateX;
        if (isShowLeftView) {
            
            if (transX >= 0) {
                
                return;
            }
        }else{
            if (transX <= 0) {
                
                return;
            }
        }
        
        if (transX > self.view.bounds.size.width/2 || transX < -self.view.bounds.size.width/2) {
            return;
        }
        
        [[NSNotificationCenter defaultCenter] postNotificationName:@"MoreTableViewFrameChange" object: [NSString stringWithFormat:@"%f", transX]];
        
    }else if (panGes.state == UIGestureRecognizerStateEnded){
        
        CGFloat panX = [panGes translationInView:self.view].x;
        CGFloat finalX = currentTranslateX + panX;
        if (isShowLeftView) {
            
            if (finalX > 0) {
                [[NSNotificationCenter defaultCenter] postNotificationName:@"MoreTableViewShow" object: [NSString stringWithFormat:@"%f", finalX]];
                isShowLeftView = YES;
                return;
            }
        }else{
            if (finalX < 0) {
                [[NSNotificationCenter defaultCenter] postNotificationName:@"MoreTableViewHide" object: [NSString stringWithFormat:@"%f", finalX]];
                isShowLeftView = NO;
                return;
            }
        }
        if ((!isShowLeftView && finalX > 100) || (isShowLeftView && finalX > -100)){
            [[NSNotificationCenter defaultCenter] postNotificationName:@"MoreTableViewShow" object: [NSString stringWithFormat:@"%f", finalX]];
            isShowLeftView = YES;
        }
        if ((!isShowLeftView && finalX < 100) || (isShowLeftView && finalX < -100)){
            [[NSNotificationCenter defaultCenter] postNotificationName:@"MoreTableViewHide" object: [NSString stringWithFormat:@"%f", finalX]];
            isShowLeftView = NO;
        }
        
    }
}

- (BOOL)gestureRecognizerShouldBegin:(UIGestureRecognizer *)gestureRecognizer{
    
    CGPoint trans = [gestureRecognizer locationInView:self.view];
    if (trans.x > 80) {
        
        return NO;
    }
    return YES;
}

#pragma mark - Setting
- (void)setting:(id)sender{
    
    LYSetingViewController *settingViewController = [[LYSetingViewController alloc] init];
    settingViewController.navigationItem.title = @"Setting";
    settingViewController.hidesBottomBarWhenPushed = YES;
    [self.navigationController pushViewController:settingViewController animated:YES];
}

- (void)editUserInfo:(id)sender{
    
    [[NSNotificationCenter defaultCenter] postNotificationName:@"MoreTableViewHide" object:nil];
    isShowLeftView = NO;
}

#pragma mark - NAVTitle
-(void)updateNavTitle:(NSNotification *)notification
{
    self.navigationItem.title = [self navTitle];
}

-(NSString *)navTitle
{
    return  [self today];
}

-(NSString *)today
{
    NSDateFormatter *formater = [[NSDateFormatter alloc]init];
    [formater setDateFormat:@"YYYY-MM-dd"];
    NSString *today = [formater stringFromDate:[NSDate date]];
    return today;
}

#pragma mark - Table view data source

- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView
{
//#warning Potentially incomplete method implementation.
    // Return the number of sections.
    return 0;
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
//#warning Incomplete method implementation.
    // Return the number of rows in the section.
    return 0;
}

/*
- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:<#@"reuseIdentifier"#> forIndexPath:indexPath];
    
    // Configure the cell...
    
    return cell;
}
*/

/*
// Override to support conditional editing of the table view.
- (BOOL)tableView:(UITableView *)tableView canEditRowAtIndexPath:(NSIndexPath *)indexPath
{
    // Return NO if you do not want the specified item to be editable.
    return YES;
}
*/

/*
// Override to support editing the table view.
- (void)tableView:(UITableView *)tableView commitEditingStyle:(UITableViewCellEditingStyle)editingStyle forRowAtIndexPath:(NSIndexPath *)indexPath
{
    if (editingStyle == UITableViewCellEditingStyleDelete) {
        // Delete the row from the data source
        [tableView deleteRowsAtIndexPaths:@[indexPath] withRowAnimation:UITableViewRowAnimationFade];
    } else if (editingStyle == UITableViewCellEditingStyleInsert) {
        // Create a new instance of the appropriate class, insert it into the array, and add a new row to the table view
    }   
}
*/

/*
// Override to support rearranging the table view.
- (void)tableView:(UITableView *)tableView moveRowAtIndexPath:(NSIndexPath *)fromIndexPath toIndexPath:(NSIndexPath *)toIndexPath
{
}
*/

/*
// Override to support conditional rearranging of the table view.
- (BOOL)tableView:(UITableView *)tableView canMoveRowAtIndexPath:(NSIndexPath *)indexPath
{
    // Return NO if you do not want the item to be re-orderable.
    return YES;
}
*/

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
