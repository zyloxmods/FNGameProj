#pragma once
#include "CoreMinimal.h"
#include "EFortCustomGender.h"
#include "WaxPartOverrideData.generated.h"

class UAthenaCharacterItemDefinition;
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
    TArray<UAthenaCharacterItemDefinition*> SkinsThatNeedHeads;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCustomCharacterPart*> DefaultParts;
    
    FORTNITEGAME_API FWaxPartOverrideData();
};

