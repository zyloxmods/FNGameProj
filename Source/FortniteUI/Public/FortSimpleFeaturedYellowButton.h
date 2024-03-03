#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "Layout/Margin.h"
#include "FortSimpleFeaturedYellowButton.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortSimpleFeaturedYellowButton : public UCommonButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FontSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin PaddingOverrideMargin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayShine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFontSizeOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPaddingOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseShineSwipe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShearText;
    
public:
    UFortSimpleFeaturedYellowButton();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetText(const FText& NewText);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RefreshUI();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeSecondaryText(const FText& NewText);
    
};

