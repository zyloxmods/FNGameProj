#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EFortCustomGender.h"
#include "WaxPartOverrideData.generated.h"

class UCustomCharacterPart;

USTRUCT(BlueprintType)
struct FWaxPartOverrideData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortCustomGender Gender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCustomCharacterPart*> PartsToSwapIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCustomCharacterPart*> DefaultParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CosmeticSwapTag;
    
    FORTNITEGAME_API FWaxPartOverrideData();
};

