#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Engine/LatentActionManager.h"
#include "Types/SlateEnums.h"
#include "Types/SlateEnums.h"
#include "Layout/Margin.h"
#include "FortClientAnnouncement_TutorialInterface.generated.h"

class UObject;

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class UFortClientAnnouncement_TutorialInterface : public UInterface {
    GENERATED_BODY()
};

class IFortClientAnnouncement_TutorialInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    virtual void WaitForContinue(UObject* WorldContextObject, FLatentActionInfo LatentInfo) PURE_VIRTUAL(WaitForContinue,);
    
    UFUNCTION(BlueprintCallable)
    virtual void SetVAlign(TEnumAsByte<EVerticalAlignment> VAlign) PURE_VIRTUAL(SetVAlign,);
    
    UFUNCTION(BlueprintCallable)
    virtual void SetTitleText(FText NameText) PURE_VIRTUAL(SetTitleText,);
    
    UFUNCTION(BlueprintCallable)
    virtual void SetSystemText(FText SystemText) PURE_VIRTUAL(SetSystemText,);
    
    UFUNCTION(BlueprintCallable)
    virtual void SetPadding(FMargin Padding) PURE_VIRTUAL(SetPadding,);
    
    UFUNCTION(BlueprintCallable)
    virtual void SetNameText(FText NameText) PURE_VIRTUAL(SetNameText,);
    
    UFUNCTION(BlueprintCallable)
    virtual void SetLightboxEnabled(bool bLightboxEnabled) PURE_VIRTUAL(SetLightboxEnabled,);
    
    UFUNCTION(BlueprintCallable)
    virtual void SetLightboxDisableInputOnly(bool bLightboxDisableInputOnly) PURE_VIRTUAL(SetLightboxDisableInputOnly,);
    
    UFUNCTION(BlueprintCallable)
    virtual void SetHAlign(TEnumAsByte<EHorizontalAlignment> HAlign) PURE_VIRTUAL(SetHAlign,);
    
    UFUNCTION(BlueprintCallable)
    virtual void SetDetailText(FText NameText) PURE_VIRTUAL(SetDetailText,);
    
    UFUNCTION(BlueprintCallable)
    virtual void SetButtonEnabled(bool bButtonEnabled) PURE_VIRTUAL(SetButtonEnabled,);
    
    UFUNCTION(BlueprintCallable)
    virtual void HideTutorialWidget() PURE_VIRTUAL(HideTutorialWidget,);
    
};

