#pragma once
#include "CoreMinimal.h"
#include "Engine/LatentActionManager.h"
#include "Types/SlateEnums.h"
#include "Types/SlateEnums.h"
#include "Layout/Margin.h"
#include "FortClientAnnouncementData_Tutorial.h"
#include "FortClientAnnouncement_Conversation.h"
#include "FortClientAnnouncement_TutorialInterface.h"
#include "FortClientAnnouncement_TutorialConversation.generated.h"

class UObject;

UCLASS(Blueprintable)
class AFortClientAnnouncement_TutorialConversation : public AFortClientAnnouncement_Conversation, public IFortClientAnnouncement_TutorialInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FFortClientAnnouncementData_Tutorial TutorialData;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoContinueDelay;
    
public:
    AFortClientAnnouncement_TutorialConversation();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_TutorialData(const FFortClientAnnouncementData_Tutorial& PreviousTutorialData);
    
    
    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    void WaitForContinue(UObject* WorldContextObject, FLatentActionInfo LatentInfo) override PURE_VIRTUAL(WaitForContinue,);
    
    UFUNCTION(BlueprintCallable)
    void SetVAlign(TEnumAsByte<EVerticalAlignment> VAlign) override PURE_VIRTUAL(SetVAlign,);
    
    UFUNCTION(BlueprintCallable)
    void SetTitleText(FText NameText) override PURE_VIRTUAL(SetTitleText,);
    
    UFUNCTION(BlueprintCallable)
    void SetSystemText(FText SystemText) override PURE_VIRTUAL(SetSystemText,);
    
    UFUNCTION(BlueprintCallable)
    void SetPadding(FMargin Padding) override PURE_VIRTUAL(SetPadding,);
    
    UFUNCTION(BlueprintCallable)
    void SetNameText(FText NameText) override PURE_VIRTUAL(SetNameText,);
    
    UFUNCTION(BlueprintCallable)
    void SetLightboxEnabled(bool bLightboxEnabled) override PURE_VIRTUAL(SetLightboxEnabled,);
    
    UFUNCTION(BlueprintCallable)
    void SetLightboxDisableInputOnly(bool bLightboxDisableInputOnly) override PURE_VIRTUAL(SetLightboxDisableInputOnly,);
    
    UFUNCTION(BlueprintCallable)
    void SetHAlign(TEnumAsByte<EHorizontalAlignment> HAlign) override PURE_VIRTUAL(SetHAlign,);
    
    UFUNCTION(BlueprintCallable)
    void SetDetailText(FText NameText) override PURE_VIRTUAL(SetDetailText,);
    
    UFUNCTION(BlueprintCallable)
    void SetButtonEnabled(bool bButtonEnabled) override PURE_VIRTUAL(SetButtonEnabled,);
    
    UFUNCTION(BlueprintCallable)
    void HideTutorialWidget() override PURE_VIRTUAL(HideTutorialWidget,);
    
};

