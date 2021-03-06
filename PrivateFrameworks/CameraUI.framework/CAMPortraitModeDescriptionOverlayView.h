/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMPortraitModeDescriptionOverlayView : UIView {
    UIButton * __acknowledgmentButton;
    UIVisualEffectView * __blurEffectView;
    UILabel * __descriptionLabel;
    CAMPortraitModeDescriptionOverlayPrimaryVibrancyEffectView * __primaryVibrancyEffectView;
    UILabel * __subtitleLabel;
    UILabel * __titleLabel;
    <CAMPortraitModeDescriptionOverlayViewDelegate> * _delegate;
    long long  _orientation;
}

@property (nonatomic, readonly) UIButton *_acknowledgmentButton;
@property (nonatomic, readonly) UIVisualEffectView *_blurEffectView;
@property (nonatomic, readonly) UILabel *_descriptionLabel;
@property (nonatomic, readonly) CAMPortraitModeDescriptionOverlayPrimaryVibrancyEffectView *_primaryVibrancyEffectView;
@property (nonatomic, readonly) UILabel *_subtitleLabel;
@property (nonatomic, readonly) UILabel *_titleLabel;
@property (getter=isAcknowledgmentButtonHighlighted, nonatomic) bool acknowledgmentButtonHighlighted;
@property (nonatomic) <CAMPortraitModeDescriptionOverlayViewDelegate> *delegate;
@property (nonatomic) long long orientation;

- (void).cxx_destruct;
- (id)_acknowledgmentButton;
- (double)_additionalFontSizeForContentSize:(id)arg1;
- (id)_blurEffectView;
- (id)_currentContentSize;
- (id)_descriptionLabel;
- (void)_handleAcknowledgmentButtonTapped:(id)arg1;
- (id)_primaryVibrancyEffectView;
- (id)_subtitleLabel;
- (id)_titleLabel;
- (void)_updateFontsForCurrentContentSize;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAcknowledgmentButtonHighlighted;
- (void)layoutSubviews;
- (long long)orientation;
- (void)setAcknowledgmentButtonHighlighted:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setOrientation:(long long)arg1 animated:(bool)arg2;
- (void)setVisible:(bool)arg1 animationDuration:(double)arg2 completion:(id /* block */)arg3;
- (void)updateToContentSize:(id)arg1;

@end
