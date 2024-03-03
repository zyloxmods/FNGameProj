#pragma once
#include "CoreMinimal.h"
#include "FortSavedModeLoadout.h"
#include "FortWorker.h"
#include "McpVariantChannelInfo.h"
#include "McpVariantReader.h"
#include "FortHero.generated.h"

class UCustomCharacterPart;
class UFortAbilityKit;
class UFortHeroSpecialization;
class UFortHeroType;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortHero : public UFortWorker {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString hero_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortSavedModeLoadout> mode_loadouts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Refundable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMcpVariantReader> OutfitVariants;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMcpVariantReader> BackblingVariants;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortHeroSpecialization*> Specializations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortAbilityKit*> SpecializationAbilityKits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCustomCharacterPart*> CharacterParts;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMcpVariantChannelInfo> OutfitVariantChannels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMcpVariantChannelInfo> BackblingVariantChannels;
    
public:
    UFortHero();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLevelClamped() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInExpeditionSquad() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetUnclampedLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortHeroType* GetHeroTypeBP() const;
    
};

