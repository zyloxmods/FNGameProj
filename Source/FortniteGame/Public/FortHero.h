#pragma once
#include "CoreMinimal.h"
#include "FortSavedModeLoadout.h"
#include "FortWorker.h"
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
    TArray<UFortHeroSpecialization*> Specializations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortAbilityKit*> SpecializationAbilityKits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCustomCharacterPart*> CharacterParts;
    
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

