#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ESelectableVoiceChatSetting.h"
#include "FortContentControlsManager.generated.h"

class UFortLocalPlayer;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortContentControlsManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortLocalPlayer* OwningPlayer;
    
public:
    UFortContentControlsManager();
    UFUNCTION(BlueprintCallable)
    void SetVoiceChatSettings(ESelectableVoiceChatSetting InSetting);
    
    UFUNCTION(BlueprintCallable)
    void SetUserGeneratedContentViewable(const FString& InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetPurchaseReportingEnabled(bool bInValue);
    
    UFUNCTION(BlueprintCallable)
    void SetPlaytimeReportingFrequency(const FString& InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetCanVoiceChatWithUnknowns(bool bInValue);
    
    UFUNCTION(BlueprintCallable)
    void SetCanUseVoiceChat(bool bInValue);
    
    UFUNCTION(BlueprintCallable)
    void SetCanUseTextChat(bool bInValue);
    
    UFUNCTION(BlueprintCallable)
    void SetCanSeeThirdPartyNames(bool bInValue);
    
    UFUNCTION(BlueprintCallable)
    void SetCanSeeOtherPlayersNames(bool bInValue);
    
    UFUNCTION(BlueprintCallable)
    void SetCanSeeMatureLanguage(bool bInValue);
    
    UFUNCTION(BlueprintCallable)
    void SetCanReceiveInGameItems(bool bInValue);
    
    UFUNCTION(BlueprintCallable)
    void SetCanDisplayMyUserName(bool bInValue);
    
    UFUNCTION(BlueprintCallable)
    void SetCanAcceptFriendRequest(bool bInValue);
    
    UFUNCTION(BlueprintCallable)
    void SetAllowedToMakePurchases(bool bInValue);
    
    UFUNCTION(BlueprintCallable)
    void SetAllowedToAcquire(bool bInValue);
    
    UFUNCTION(BlueprintCallable)
    ESelectableVoiceChatSetting GetVoiceChatSettings() const;
    
    UFUNCTION(BlueprintCallable)
    FString GetUserGeneratedContentViewable() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetPurchaseReportingEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    FString GetPlaytimeReportingFrequency() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetCanVoiceChatWithUnknowns() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetCanUseVoiceChat() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetCanUseTextChat() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetCanSeeThirdPartyNames() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetCanSeeOtherPlayersNames() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetCanSeeMatureLanguage() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetCanReceiveInGameItems() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetCanDisplayMyUserName() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetCanAcceptFriendRequest() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetAllowedToMakePurchases() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetAllowedToAcquire() const;
    
};

