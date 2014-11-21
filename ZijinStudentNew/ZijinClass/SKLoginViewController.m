//
//  SKLoginViewController.m
//  ZijinStudentNew
//
//  Created by LeouWang on 14/11/11.
//  Copyright (c) 2014年 _iSke_Leou_. All rights reserved.
//

#import "SKLoginViewController.h"

#import "SKWebRequest.h"
#import "LYRootTabBarController.h"
#import "SKSuperViewController.h"

#define ORIGIN_TOP_Y  60
#define TEXTFIELD_HIGHT 40


@interface SKLoginViewController ()<UITextFieldDelegate>
{
    UITextField *userNameTextField;
    UITextField *passwordTextField;
}
@end

@implementation SKLoginViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
    [[UIApplication sharedApplication] setStatusBarStyle:UIStatusBarStyleDefault];//设置状态栏
    
    SKWebRequest *skWebRequest = [SKWebRequest getSingletonInstance];
    BOOL result = [skWebRequest loadUserData];
    if(result){
        
        UIImageView *headImageView = [[UIImageView alloc] initWithFrame:CGRectMake(self.view.bounds.size.width/2 - 60/2, ORIGIN_TOP_Y, 60, 60)];
        headImageView.image = [UIImage imageNamed:@"avatar_default_small.png"];
        [self.view addSubview:headImageView];
        
        UILabel *welcomeLabel = [[UILabel alloc] initWithFrame:CGRectMake(20, ORIGIN_TOP_Y + 60 + TEXTFIELD_HIGHT + 10*2, self.view.bounds.size.width - 20 * 2, TEXTFIELD_HIGHT)];
        welcomeLabel.text = @"欢迎回来～";
        welcomeLabel.textColor = [UIColor colorWithRed:29/255.0f green:127/255.0f blue:247/255.0f alpha:1.0f];
        welcomeLabel.textAlignment = NSTextAlignmentCenter;
        welcomeLabel.font = [UIFont systemFontOfSize:18.0f];
        [self.view addSubview:welcomeLabel];
        
        return;
    }
    
    UIImageView *headImageView = [[UIImageView alloc] initWithFrame:CGRectMake(self.view.bounds.size.width/2 - 60/2, ORIGIN_TOP_Y, 60, 60)];
    headImageView.image = [UIImage imageNamed:@"avatar_default_small.png"];
    [self.view addSubview:headImageView];
    
    userNameTextField = [[UITextField alloc]init];
    userNameTextField.frame = CGRectMake(20, ORIGIN_TOP_Y + 60 + 10, self.view.bounds.size.width - 20 * 2, TEXTFIELD_HIGHT);
    userNameTextField.contentHorizontalAlignment = UIControlContentHorizontalAlignmentCenter;
    userNameTextField.leftViewMode = UITextFieldViewModeAlways;
    userNameTextField.clearButtonMode = UITextFieldViewModeWhileEditing;
    userNameTextField.placeholder = @"账号";
    userNameTextField.leftView = [[UIImageView alloc]initWithImage:[UIImage imageNamed:@"login_user_highlight.png"]];
    userNameTextField.background = [UIImage imageNamed:@"login_text_top.png"];
    userNameTextField.delegate = self;
    [self.view addSubview:userNameTextField];
    
    passwordTextField = [[UITextField alloc]init];
    passwordTextField.frame = CGRectMake(20, ORIGIN_TOP_Y + 60 + TEXTFIELD_HIGHT + 10*2, self.view.bounds.size.width - 20 * 2, TEXTFIELD_HIGHT);
    passwordTextField.leftViewMode = UITextFieldViewModeAlways;
    passwordTextField.clearButtonMode = UITextFieldViewModeWhileEditing;
    passwordTextField.placeholder = @"密码";
    passwordTextField.contentHorizontalAlignment = UIControlContentHorizontalAlignmentCenter;
    passwordTextField.leftView = [[UIImageView alloc]initWithImage:[UIImage imageNamed:@"login_key_highlight.png"]];
    passwordTextField.background = [UIImage imageNamed:@"login_text_bottom.png"];
    passwordTextField.delegate = self;
    [self.view addSubview:passwordTextField];
    
    UIButton *loginBtn = [UIButton buttonWithType:UIButtonTypeCustom];
    loginBtn.frame = CGRectMake(20, ORIGIN_TOP_Y + 60 + TEXTFIELD_HIGHT + TEXTFIELD_HIGHT + 10*3, self.view.bounds.size.width - 20 * 2, TEXTFIELD_HIGHT);
    [loginBtn setTitle:@"登录" forState:UIControlStateNormal];
    [loginBtn setTitleColor:[UIColor colorWithRed:29/255.0f green:127/255.0f blue:247/255.0f alpha:1.0f] forState:UIControlStateNormal];
    [loginBtn setBackgroundImage:[UIImage imageNamed:@"login_btn_bg.png"] forState:UIControlStateNormal];
    [loginBtn setBackgroundImage:[UIImage imageNamed:@"login_btn_bg_highlight.png"] forState:UIControlStateHighlighted];
    [loginBtn addTarget:self action:@selector(loginBtnClick) forControlEvents:UIControlEventTouchUpInside];
    [self.view addSubview:loginBtn];
    
    UIButton *forgetPasswordBtn = [UIButton buttonWithType:UIButtonTypeCustom];
    forgetPasswordBtn.frame = CGRectMake(self.view.bounds.size.width - 10 - 120, self.view.bounds.size.height - 50, 120, 35);
    [forgetPasswordBtn setTitle:@"｜忘记密码｜" forState:UIControlStateNormal];
    forgetPasswordBtn.titleLabel.font = [UIFont systemFontOfSize:17.0f];
    [forgetPasswordBtn setTitleColor:[UIColor colorWithRed:29/255.0f green:127/255.0f blue:247/255.0f alpha:1.0f] forState:UIControlStateNormal];
    [forgetPasswordBtn setTitleColor:[UIColor blueColor
                                      ] forState:UIControlStateHighlighted];
    [self.view addSubview:forgetPasswordBtn];
    
    UITapGestureRecognizer *recognizer = [[UITapGestureRecognizer alloc]initWithTarget:self action:@selector(tapGestureReceive:)];
    [self.view addGestureRecognizer:recognizer];
}

- (void)viewWillAppear:(BOOL)animated{
    
    [super viewWillAppear:animated];
    
    [[NSNotificationCenter defaultCenter] addObserver:self
                                             selector:@selector(keyboardWillBeShown:)
                                                 name:UIKeyboardWillShowNotification object:nil];
    
    [[NSNotificationCenter defaultCenter] addObserver:self
                                             selector:@selector(keyboardWillBeHidden:)
                                                 name:UIKeyboardWillHideNotification object:nil];
    
    self.view.alpha = 1.0f;
}

- (void)viewDidAppear:(BOOL)animated{
    
    [super viewDidAppear:animated];
    
    SKWebRequest *skWebRequest = [SKWebRequest getSingletonInstance];
    BOOL result = [skWebRequest loadUserData];
    if(result){
        
        [self animationBeforeJumpToMain];
    }
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void)tapGestureReceive:(id)sender{
    
    [userNameTextField resignFirstResponder];
    [passwordTextField resignFirstResponder];
}

- (void)keyboardWillBeShown:(id)sender{
    
    self.view.frame = CGRectMake(0, -40, self.view.bounds.size.width, self.view.bounds.size.height);
}

- (void)keyboardWillBeHidden:(id)sender{
    
    self.view.frame = CGRectMake(0, 0, self.view.bounds.size.width, self.view.bounds.size.height);
}

#pragma mark - Login
- (void)loginBtnClick{
    
    [userNameTextField resignFirstResponder];
    [passwordTextField resignFirstResponder];
    
    [self performSelector:@selector(login) withObject:self afterDelay:0.1];
}

- (void)login{
    
    SKWebRequest *skWebRequest = [SKWebRequest getSingletonInstance];
    
    UIActivityIndicatorView *testActivityIndicator = [[UIActivityIndicatorView alloc] initWithActivityIndicatorStyle:UIActivityIndicatorViewStyleGray];
    testActivityIndicator.center = CGPointMake(self.view.bounds.size.width/2, ORIGIN_TOP_Y + 60 + 30 + 30 + 30 + 30 + 10*4);//只能设置中心，不能设置大小
    [self.view addSubview:testActivityIndicator];
    testActivityIndicator.color = [UIColor colorWithRed:29/255.0f green:127/255.0f blue:247/255.0f alpha:1.0f]; // 改变圈圈的颜色； iOS5引入
    [testActivityIndicator startAnimating]; // 开始旋转
    [testActivityIndicator setHidesWhenStopped:YES]; //当旋转结束时隐藏
    
    BOOL isLoginRequest = [skWebRequest loginStudentOfUserName:userNameTextField.text password:passwordTextField.text];
    
    [testActivityIndicator stopAnimating]; // 结束旋转
    
    if (isLoginRequest) {
        
        [skWebRequest saveUserData];
        [self animationBeforeJumpToMain];
        
    }else{
        
        
    }
}

- (void)animationBeforeJumpToMain{
    
    //UIView开始动画，第一个参数是动画的标识，第二个参数附加的应用程序信息用来传递给动画代理消息
    [UIView beginAnimations:nil context:nil];
    //动画持续时间
    [UIView setAnimationDuration:1.0];
    //设置动画的回调函数，设置后可以使用回调方法
    [UIView setAnimationDelegate:nil];
    //设置动画曲线，控制动画速度
    [UIView  setAnimationCurve: UIViewAnimationCurveEaseInOut];
    //设置动画方式，并指出动画发生的位置
    [UIView setAnimationTransition:UIViewAnimationTransitionNone forView:self.view  cache:YES];
    self.view.alpha = 0.3;
    //提交UIView动画
    [UIView commitAnimations];
    
    [self performSelector:@selector(goToMainViewController) withObject:self afterDelay:0.8];
}

//Login in well, Jump to mainViewController
- (void)goToMainViewController{
    
    self.view.alpha = 1.0f;
//    LYRootTabBarController *m_vctrMain = [self.storyboard instantiateViewControllerWithIdentifier:@"MainTabbarVC"];
////    [self addChildViewController:m_vctrMain];
////    [self.view addSubview:m_vctrMain.view];
//    [self presentViewController:m_vctrMain animated:NO completion:nil];
    
    SKSuperViewController *superViewController = [[SKSuperViewController alloc] init];
    [self presentViewController:superViewController animated:NO completion:nil];
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
