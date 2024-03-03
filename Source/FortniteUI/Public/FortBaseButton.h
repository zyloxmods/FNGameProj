#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EFortBangType.h"
#include "EFortBrushSize.h"
#include "Types/SlateEnums.h"
#include "Layout/Margin.h"
#include "Fonts/SlateFontInfo.h"
#include "Sound/SlateSound.h"
#include "EFortBangSize.h"
#include "EFortTutorialGlowType.h"
#include "FortBangInterface.h"
#include "FortBaseButtonClickedDelegate.h"
#include "FortEnabledStateChangedDelegate.h"
#include "FortSelectedStateChangedDelegate.h"
#include "FortStateStyle.h"
#include "FortUserWidget.h"
#include "Templates/SubclassOf.h"
#include "FortBaseButton.generated.h"

class UFortButtonStyle;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortBaseButton : public UFortUserWidget, public IFortBangInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortEnabledStateChanged EnabledChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortSelectedStateChanged SelectedChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortBaseButtonClicked ButtonClicked;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortBangSize BangSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D BangOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortBangType BangType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TutorialNameID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortTutorialGlowType TutorialGlowType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortButtonStyle> Style;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortBrushSize::Type> BrushSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateSound PressedSlateSoundOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateSound HoveredSlateSoundOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSelectable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SelectionGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bToggleable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClickable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EButtonClickMethod::Type> ClickMethod;
    
public:
    UFortBaseButton();
    UFUNCTION(BlueprintCallable)
    void SetStyle(TSubclassOf<UFortButtonStyle> InStyle);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectionGroup(FName InSelectionGroup);
    
    UFUNCTION(BlueprintCallable)
    void SetSelected(bool InSelected);
    
    UFUNCTION(BlueprintCallable)
    void SetHovered(bool InHovered);
    
    UFUNCTION(BlueprintCallable)
    void SetClickMethod(TEnumAsByte<EButtonClickMethod::Type> InClickMethod);
    
    UFUNCTION(BlueprintCallable)
    void SetClickable(bool InClickable);
    
    UFUNCTION(BlueprintCallable)
    void SetBrushSize(TEnumAsByte<EFortBrushSize::Type> InSize);
    
    UFUNCTION(BlueprintCallable)
    void SetBangVisibility(bool bVisible);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnButtonClicked();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortButtonStyle* GetStyle() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetSelectionGroupIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSelected() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFortStateStyle GetCurrentStateStyle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSlateFontInfo GetCurrentFont() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMargin GetCurrentCustomPadding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMargin GetCurrentButtonPadding() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceClick();
    
    
    // Fix for true pure virtual functions not being implemented
};

