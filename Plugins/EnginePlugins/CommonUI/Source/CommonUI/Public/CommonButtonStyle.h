#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Layout/Margin.h"
#include "Styling/SlateBrush.h"
#include "Sound/SlateSound.h"
#include "CommonButtonStyleOptionalSlateSound.h"
#include "Templates/SubclassOf.h"
#include "CommonButtonStyle.generated.h"

class UCommonTextStyle;

UCLASS(Abstract, Blueprintable)
class COMMONUI_API UCommonButtonStyle : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSingleMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush SingleMaterialBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush NormalBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush NormalHovered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush NormalPressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush SelectedBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush SelectedHovered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush SelectedPressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush Disabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin ButtonPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin CustomPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonTextStyle> NormalTextStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonTextStyle> NormalHoveredTextStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonTextStyle> SelectedTextStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonTextStyle> SelectedHoveredTextStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonTextStyle> DisabledTextStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateSound PressedSlateSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommonButtonStyleOptionalSlateSound SelectedPressedSlateSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommonButtonStyleOptionalSlateSound DisabledPressedSlateSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateSound HoveredSlateSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommonButtonStyleOptionalSlateSound SelectedHoveredSlateSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommonButtonStyleOptionalSlateSound DisabledHoveredSlateSound;
    
    UCommonButtonStyle();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCommonTextStyle* GetSelectedTextStyle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSelectedPressedBrush(FSlateBrush& Brush) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCommonTextStyle* GetSelectedHoveredTextStyle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSelectedHoveredBrush(FSlateBrush& Brush) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSelectedBaseBrush(FSlateBrush& Brush) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCommonTextStyle* GetNormalTextStyle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetNormalPressedBrush(FSlateBrush& Brush) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCommonTextStyle* GetNormalHoveredTextStyle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetNormalHoveredBrush(FSlateBrush& Brush) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetNormalBaseBrush(FSlateBrush& Brush) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetMaterialBrush(FSlateBrush& Brush) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCommonTextStyle* GetDisabledTextStyle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetDisabledBrush(FSlateBrush& Brush) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCustomPadding(FMargin& OutCustomPadding) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetButtonPadding(FMargin& OutButtonPadding) const;
    
};

