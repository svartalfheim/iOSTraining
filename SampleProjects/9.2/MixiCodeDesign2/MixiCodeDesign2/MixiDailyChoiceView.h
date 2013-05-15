//
//  MixiDailyChoiceView.h
//  MixiCodeDesign2
//
//  Created by 田村 航弥 on 2013/05/15.
//  Copyright (c) 2013年 mixi. All rights reserved.
//

#import "MixiDailyAbstractView.h"

@interface MixiDailyChoiceView : MixiDailyAbstractView

+(MixiDailyChoiceView *)dailyChoiceView;
- (IBAction)pressYesButton:(id)sender;
- (IBAction)pressNoButton:(id)sender;

@end