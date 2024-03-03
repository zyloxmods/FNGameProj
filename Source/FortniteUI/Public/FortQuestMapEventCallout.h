#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "FortQuestMapEventCallout.generated.h"

class UAudioComponent;
class UCommonButton;
class UCommonTextBlock;
class UFortBangWrapper_NUI;
class UFortProgressArrowButton;
class UFortQuestItemDefinition;
class UFortQuestMapData;
class UFortQuestMapEventSequence;
class UFortQuestMapNewBangWrapper;
class UHorizontalBox;
class UImage;
class USoundBase;

UCLASS(Blueprintable, EditInlineNew)
class UFortQuestMapEventCallout : public UFortActivatablePanel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortBangWrapper_NUI* BangWrapper_GoButton;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortProgressArrowButton* Button_LeftNav;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortProgressArrowButton* Button_RightNav;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_SwitchMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortQuestMapNewBangWrapper* BangWrapper_Arrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortQuestMapEventSequence* Sequence_EventProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* HorizontalBox_NavButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Header;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_Callout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortBangWrapper_NUI* BangWrapper_UnHover;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* DefaultSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortQuestItemDefinition* DefaultRequiredCompletedQuest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* OverrideSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* SoundLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortQuestMapData* QuestMapData;
    
public:
    UFortQuestMapEventCallout();
    UFUNCTION(BlueprintCallable)
    void UpdateGoButtonBangState(bool bClear);
    
    UFUNCTION(BlueprintCallable)
    void UpdateCalloutData();
    
    UFUNCTION(BlueprintCallable)
    void SetIsFaded(bool Faded);
    
    UFUNCTION(BlueprintCallable)
    void SetIsExpanded(bool Expanded);
    
    UFUNCTION(BlueprintCallable)
    void ResetCallout();
    
    UFUNCTION(BlueprintCallable)
    void PlayFadeOut();
    
    UFUNCTION(BlueprintCallable)
    void PlayFadeIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnResetCallout();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayFadeAnimation(bool bIsFadeOut);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEventIndexChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDeactivatePlayAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActivatePlayAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCurrentEventUnlocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortQuestItemDefinition* GetRequiredQuestForCurrentEvent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsFaded() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsExpanded() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEventCount() const;
    
    UFUNCTION(BlueprintCallable)
    void DeactivateCallout();
    
};

