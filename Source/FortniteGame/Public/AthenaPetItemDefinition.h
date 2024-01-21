#pragma once
#include "CoreMinimal.h"
#include "AthenaCosmeticItemDefinition.h"
#include "Templates/SubclassOf.h"
#include "AthenaPetItemDefinition.generated.h"

class AFortPlayerPet;
class UFortPetStimuliBank;
class UFortTaggedSoundBank;

UCLASS(Blueprintable, MinimalAPI)
class UAthenaPetItemDefinition : public UAthenaCosmeticItemDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortPetStimuliBank*> StimuliBanks;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AFortPlayerPet> PetPrefabClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortTaggedSoundBank> PetSoundBank;
    
public:
    UAthenaPetItemDefinition();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<AFortPlayerPet> GetPetPrefabClass() const;
    
};

