#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "Styling/SlateColor.h"
#include "FortProgressArrowButton.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortProgressArrowButton : public UCommonButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor ArrowColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor HoverColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor ShadowColor;
    
public:
    UFortProgressArrowButton();
    UFUNCTION(BlueprintCallable)
    void UpdateArrowColor(FSlateColor Color, FSlateColor NewHoverColor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShadowColorSet();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnIsInteractiveSet(bool bIsInteractive);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnArrowColorSet();
    
};

