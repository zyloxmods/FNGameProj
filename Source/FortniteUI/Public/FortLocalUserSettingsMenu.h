#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "UObject/NoExportTypes.h"
#include "FortLocalUserSettingsMenu.generated.h"

class UFortLocalUserSettingsSection;
class UMenuAnchor;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortLocalUserSettingsMenu : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor SettingTextColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMenuAnchor* OwningMenuAnchor;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortLocalUserSettingsSection* Section_OnlineStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortLocalUserSettingsSection* Section_Privacy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortLocalUserSettingsSection* Section_Participation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortLocalUserSettingsSection* Section_VoiceChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortLocalUserSettingsSection* Section_FriendSubscription;
    
public:
    UFortLocalUserSettingsMenu();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFocused();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleMenuAnchorOpenChanged(bool bIsOpen);
    
};

