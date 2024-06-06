#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AthenaCosmeticItemDefinition.h"
#include "EAthenaPetAttachRule.h"
#include "Templates/SubclassOf.h"
#include "AthenaPetItemDefinition.generated.h"

class AFortPlayerPet;
class UFortPetStimuliBank;
class UFortTaggedSoundBank;

UCLASS(Blueprintable)
class UAthenaPetItemDefinition : public UAthenaCosmeticItemDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAthenaPetAttachRule PetAttachRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PetAttachOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortPetStimuliBank*> StimuliBanks;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AFortPlayerPet> PetPrefabClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortTaggedSoundBank> PetSoundBank;
    
public:
    UAthenaPetItemDefinition(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<AFortPlayerPet> GetPetPrefabClass() const;
    
};

