#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "EFortItemTier.h"
#include "FortHeroGameplayPiece.h"
#include "FortHeroTierAbilityKit.h"
#include "FortHeroGameplayDefinition.generated.h"

class UFortAbilityKit;
class UFortCampaignHeroLoadoutItem;
class UFortHero;
class UFortHeroClassGameplayDefinition;
class UFortHeroType;
class UFortTeamPerkItem;
class UFortTeamPerkItemDefinition;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortHeroGameplayDefinition : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortHeroClassGameplayDefinition* HeroClassGameplayDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer HeroBaseStatlineTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer HeroTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortHeroTierAbilityKit> TierAbilityKits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortHeroGameplayPiece HeroPerk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortHeroGameplayPiece CommanderPerk;
    
public:
    UFortHeroGameplayDefinition();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsTeamPerkValidForCommander(const UFortTeamPerkItem* TeamPerk, const UFortCampaignHeroLoadoutItem* HeroLoadout, FText& OutReason);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSlottedHeroAbilityDuplicated(const UFortHero* PotentiallySlottedHero, const UFortCampaignHeroLoadoutItem* HeroLoadout, const FName SupportHeroSlotName, bool bIsSlotting);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsHeroPerkValidForCommander(const UFortHero* SlottedHero, const UFortCampaignHeroLoadoutItem* HeroLoadout, const FName SupportHeroSlotName, bool bIsSlotting, FText& OutReason);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsHeroPerkUnlockedForHero(UFortHero* FortHero);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCommanderPerkUnlockedForHero(UFortHero* FortHero);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAbilityKitUnlockedForHero(const UFortHero* FortHero, UFortAbilityKit* AbilityKit);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FText> GetKeywordDisplayNames(UFortHeroType* HeroType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EFortItemTier GetCommanderTierRequiredForTeamPerkToApplyToCommander(const UFortTeamPerkItem* TeamPerk, const UFortHero* CommanderHero);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EFortItemTier GetCommanderTierRequiredForHeroPerkToApplyToCommander(UFortHero* FortHero, UFortHero* CommanderHero);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EFortItemTier GetAbilityKitUnlockTierForHero(const UFortHero* FortHero, UFortAbilityKit* AbilityKit);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<UFortAbilityKit*> GetAbilityKitsForActiveAbilityPerks(const UFortHeroType* HeroDefinition);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UFortAbilityKit* GetAbilityKitForHeroPerk(const UFortHeroType* HeroDefinition);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UFortAbilityKit* GetAbilityKitForCommanderPerk(const UFortHeroType* HeroDefinition);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool DoesTeamPerkApplyToCommander(const UFortTeamPerkItem* TeamPerk, const UFortHero* CommanderHero);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool DoesHeroSatisfyTeamPerkCondition(const UFortTeamPerkItemDefinition* TeamPerk, UFortHero* SupportHero);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool DoesHeroPerkApplyToCommander(UFortHero* FortHero, UFortHero* CommanderHero);
    
};

