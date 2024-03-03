#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "SpatialFactionProgressScreen.generated.h"

class UCommonButton;
class UCommonButtonGroup;
class UDynamicEntryBox;
class UFortPlayerPerksItemDefinition;
class UFortSocialAvatarIcon;
class UFortSpyTechItemDefinition;
class UScrollBox;
class UTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class USpatialFactionProgressScreen : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortPlayerPerksItemDefinition* Faction1PerksItemDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortPlayerPerksItemDefinition* Faction2PerksItemDef;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCommonButtonGroup* ButtonGroup_FactionPerks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_SwapFaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* SpatialFaction_ShadowButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* SpatialFaction_GhostButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* EntryBox_FactionPerkTiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* ScrollBox_PerkItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortSocialAvatarIcon* Icon_PlayerImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_PlayerName;
    
public:
    USpatialFactionProgressScreen();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPerkSelected(UFortSpyTechItemDefinition* PerkItemDef, int32 PerkLevel, int32 PerkFaction, bool bIsRevealed, bool bIsEarned, bool bIsCurrentFaction);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFactionSet(int32 PlayerFaction);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandlePerkSelected(UCommonButton* AssociatedButton, int32 Index);
    
};

