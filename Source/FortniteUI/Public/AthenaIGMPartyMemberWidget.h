#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "EFortPartyMemberLocation.h"
#include "EGameReadiness.h"
#include "AthenaIGMPartyMemberWidget.generated.h"

class UFortPartyMember;
class UFortSocialAvatarIcon;
class UFortVoiceChatStatusIcon;
class USocialNameTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UAthenaIGMPartyMemberWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLocalPlayerSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInGameSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortSocialAvatarIcon* AvatarIconWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USocialNameTextBlock* Text_SocialName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortVoiceChatStatusIcon* VoiceIcon_Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortPartyMember* CachedPartyMember;
    
public:
    UAthenaIGMPartyMemberWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWidgetReset();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUserSet();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNewReadiness(EGameReadiness GameReadiness);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNewLocation(EFortPartyMemberLocation NewLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnIsPartyLeaderChanged(bool bIsPartyLeader);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingFortnite() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEmptySlot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsLocalPlayerSlot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsInGameSlot() const;
    
};

