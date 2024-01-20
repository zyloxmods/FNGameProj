#pragma once
#include "CoreMinimal.h"
#include "FortCharacterPartMontageInfo.h"
#include "FortCharacterPartsRepMontageInfo.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortCharacterPartsRepMontageInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortCharacterPartMontageInfo> CharPartMontages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* PawnMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayBit;
    
    FFortCharacterPartsRepMontageInfo();
};

