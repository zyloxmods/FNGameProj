#pragma once
#include "CoreMinimal.h"
#include "EFortAnnouncementDisplayPreference.h"
#include "FortUIManagerWidget_NUI.h"
#include "FortUIManagerWidget_Campaign.generated.h"

class UFortUINavigationManager;
class UObject;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class FORTNITEUI_API UFortUIManagerWidget_Campaign : public UFortUIManagerWidget_NUI {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnShouldOpenTalkingHead, UTexture2D*, Image, FText, Title, FText, Subtitle, EFortAnnouncementDisplayPreference, DisplayPreference);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnShouldCloseTalkingHead);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnShouldBlockSubtitlePortraitChanged, bool, bShouldBlockSubtitlePortrait);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnEndSpokenDialog);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnBeginSpokenDialog);
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortUINavigationManager* NavigationManager;
    
public:
    UFortUIManagerWidget_Campaign();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UFortUINavigationManager* GetUINavigationManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortUINavigationManager* GetNavigationManager() const;
    
};

