#pragma once
#include "CoreMinimal.h"
#include "FortCampaignTeamMemberItemTracker.h"
#include "FortCampaignTeamMemberXpBoost.generated.h"

class UCommonButton;
class UCommonTextBlock;
class UFortPlayerBanner;
class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCampaignTeamMemberXpBoost : public UFortCampaignTeamMemberItemTracker {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText NoPartyMemberString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LocalPlayerXpBoostConfirmationTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LocalPlayerXpBoostConfirmationText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RemotePlayerXpBoostConfirmationTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RemotePlayerXpBoostConfirmationText;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortPlayerBanner* Banner_MemberBanner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_MemberName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Boost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_BoostIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_ActivateBoost;
    
public:
    UFortCampaignTeamMemberXpBoost();
protected:
    UFUNCTION(BlueprintCallable)
    void SetConsumeRequestInProgress(bool bIsRequestInProgress);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnConsumeBoostStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnConsumeBoostComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBoostAmountChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentBoostAmount() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCommonButton* GetBoostActivationButton() const;
    
    UFUNCTION(BlueprintCallable)
    void CenterWidget();
    
};

