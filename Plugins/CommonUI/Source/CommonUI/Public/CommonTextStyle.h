#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=Margin -FallbackName=Margin
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateFontInfo -FallbackName=SlateFontInfo
#include "CommonTextStyle.generated.h"

UCLASS(Abstract, Blueprintable)
class COMMONUI_API UCommonTextStyle : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateFontInfo Font;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsesDropShadow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ShadowOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ShadowColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin Margin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush StrikeBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LineHeightPercentage;
    
    UCommonTextStyle();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetStrikeBrush(FSlateBrush& OutStrikeBrush) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetShadowOffset(FVector2D& OutShadowOffset) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetShadowColor(FLinearColor& OutColor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetMargin(FMargin& OutMargin) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLineHeightPercentage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetFont(FSlateFontInfo& OutFont) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetColor(FLinearColor& OutColor) const;
    
};

