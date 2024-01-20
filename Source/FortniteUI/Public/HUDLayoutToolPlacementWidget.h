#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "HUDLayoutDataEntry.h"
#include "GameplayTagContainer.h"
#include "HUDLayoutToolInterface.h"
#include "Templates/SubclassOf.h"
#include "HUDLayoutToolPlacementWidget.generated.h"

class UBacchusHUDElement;
class UBorder;
class UHUDLayoutToolPlacementWidget;
class UOverlay;

UCLASS(Blueprintable, EditInlineNew)
class UHUDLayoutToolPlacementWidget : public UCommonUserWidget, public IHUDLayoutToolInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanMoveWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBacchusHUDElement> HUDElementClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag HUDElementTagOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBlockingWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMandatoryOnScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* SelectionBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* DisplayScaleBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* MainOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanEditVisibilityOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Property_0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Property_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Property_2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Property_3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, float> FloatProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHUDLayoutDataEntry DefaultEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBacchusHUDElement* BacchusHUDElement;
    
public:
    UHUDLayoutToolPlacementWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void ResetIfMandatoryOffScreen();
    
    UFUNCTION(BlueprintCallable)
    void OnWidgetSelected(UHUDLayoutToolPlacementWidget* InSelectedWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnResetToDefault();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnLayoutVisibilityChanged(bool bShowCombat, bool bShowBuild, bool bShowEdit, bool bShowCreative);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInsideGridStateChange(bool bInsideGrid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInsideGrid() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetIsOverlapping() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanEditVisibility() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FGameplayTag BP_GetMobileVisualType() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

