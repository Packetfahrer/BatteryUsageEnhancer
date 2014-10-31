/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "PSTableCell.h"

@class NSMutableArray, PLBatteryUIMoveableGraphView, UIActivityIndicatorView, UIColor, UIScrollView;

@interface PSGraphViewTableCell : PSTableCell
{
    _Bool waitingForData;
    _Bool graphViewDidChange;
    NSMutableArray *_graphArray;
    UIColor *labelColor;
    UIColor *graphColor;
    UIScrollView *_scrollView;
    PLBatteryUIMoveableGraphView *_graphView;
    UIActivityIndicatorView *_activityIndicator;
}

+ (int)graphHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
- (_Bool)canReload;
- (void)generateGraphs;
@property(retain, nonatomic) NSMutableArray *graphArray;
@property(retain, nonatomic) PLBatteryUIMoveableGraphView *graphView; // @synthesize graphView=_graphView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)pinch:(id)arg1;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void)setSpecifier:(id)arg1;

@end
