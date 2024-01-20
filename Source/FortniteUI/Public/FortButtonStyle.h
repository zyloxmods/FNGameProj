#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EFortBrushSize.h"
#include "FortMultiSizeBrush.h"
#include "FortMultiSizeFont.h"
#include "FortMultiSizeMargin.h"
#include "Layout/Margin.h"
#include "Styling/SlateBrush.h"
#include "Fonts/SlateFontInfo.h"
#include "Sound/SlateSound.h"
#include "FortStateStyle.h"
#include "FortButtonStyle.generated.h"

UCLASS(Abstract, Blueprintable)
class UFortButtonStyle : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortStateStyle NormalBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortStateStyle NormalHovered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortStateStyle NormalPressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortStateStyle SelectedBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortStateStyle SelectedHovered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortStateStyle SelectedPressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortStateStyle Disabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortMultiSizeMargin ButtonPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortMultiSizeFont Font;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortMultiSizeMargin CustomPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateSound PressedSlateSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateSound HoveredSlateSound;
    
    UFortButtonStyle();
    UFUNCTION(BlueprintCallable)
    static FMargin GetMarginBySizeFromMultiSizeMargin(const FFortMultiSizeMargin& MultiSizeMargin, TEnumAsByte<EFortBrushSize::Type> Size);
    
    UFUNCTION(BlueprintCallable)
    static FSlateFontInfo GetFontBySizeFromMultiSizeFont(const FFortMultiSizeFont& MultiSizeFont, TEnumAsByte<EFortBrushSize::Type> Size);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSlateFontInfo GetFontBySize(TEnumAsByte<EFortBrushSize::Type> Size) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMargin GetCustomPaddingBySize(TEnumAsByte<EFortBrushSize::Type> Size) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMargin GetButtonPaddingBySize(TEnumAsByte<EFortBrushSize::Type> Size) const;
    
    UFUNCTION(BlueprintCallable)
    static FSlateBrush GetBrushBySizeFromMultiSizeBrush(const FFortMultiSizeBrush& MultiSizeBrush, TEnumAsByte<EFortBrushSize::Type> Size);
    
};

